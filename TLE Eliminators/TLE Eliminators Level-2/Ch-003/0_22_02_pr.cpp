// Correct.
// This is Mentor's code.

// Brute Force Method.

// B. Johnny and His Hobbies
// https://codeforces.com/problemset/problem/1362/B



































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        int n; cin >> n;
        vector<int> S;
        int freq[1024] = {0};
        for(int i=0; i<n; i++){
            int temp; cin >> temp;
            freq[temp]++;
            S.push_back(temp);
        }

        // Here, we make 'freq' array & check if after 'S[i]^k',
        //  the set have same frequency of elements or not.
        //  If yes, then it is our Answer.


        int k = -1;
        // As, (0 < k < 1024)
        bool ans = false;
        bool temp_ans = true;
        for(int i=1; i<1024; i++){
            int temp_freq[1024] = {0};
            for(int j=0; j<n; j++){
                int temp = (S[j] ^ i);
                temp_freq[temp]++;
            }
            for(int j=0; j<1024; j++){
                if(temp_freq[j] != freq[j]){
                    temp_ans = false; break; 
                }
                else if((temp_freq[j] == freq[j]) && (j == 1023)){
                    ans = true;
                    k = i; 
                } 
            }
            if(ans == true){ break;}
            temp_ans = true;
        }

        cout << k << endl;
    }
}