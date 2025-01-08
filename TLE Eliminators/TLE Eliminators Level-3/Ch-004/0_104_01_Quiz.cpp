// Wrong.

// G. Not Very Rude Substring
// https://codeforces.com/edu/course/2/lesson/9/3/practice/contest/307094/problem/G



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

    // I/P
    int n, c; cin >> n >> c;
    string s; cin >> s;

    // O/P
    int ans = 0;
    vector<int> freq(2);
    int left = 0;
    for(int i=0; i<n; i++){
        int Char = (s[i] - 'a');
        if(Char < 2){
            freq[Char]++;
        }

        int rudeness = 0;
        if((freq[0] > 0) && (freq[1] > 0)){
            rudeness= (freq[0] * freq[1]);
        }

        if(rudeness > c){
            int Char = (s[left] - 'a');
            if(Char < 2){
                freq[Char]--;
            }
            left++;

            if((freq[0] > 0) && (freq[1] > 0)){
                rudeness = (freq[0] * freq[1]);
            }
        }
        ans = max(ans, i-left+1);
    }

    cout << ans << endl;
}