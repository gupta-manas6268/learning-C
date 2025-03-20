// This is Part-02 of Lecture.

// Wrong.(wrong OUTPUT)

// C. K-Complete Word
// https://codeforces.com/problemset/problem/1332/C






































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
        // I/P
        int n, k; cin >> n >> k;
        string s; cin >> s;

        // Solution
        int Quotient = (n/k);
        int ans = 0;
        for(int i=0; i < (k/2); i++){
            int freq[26] = {0};
            
            for(int j=0; j < Quotient; j++){
                int index_1 = (i + (j*k));
                int index_2 = (i + ((j+1)*k) - 1);
                
                int val_1 = (int)((s[index_1]) - 'a');
                int val_2 = (int)((s[index_2]) - 'a');
                freq[val_1]++; freq[val_2]++;
            }
            
            int maxi = 0;
            for(int k=0; k < 26; k++){
                maxi = max(freq[k], maxi);
            }
            
            ans += ((2*Quotient) - maxi);
        }
        
        if(k%2 == 1){ // odd
            int freq[26] = {0};

            int i = (k/2);
            for(int j=0; j < Quotient; j++){
                int index_1 = (i + (j*k));

                int val_1 = (int)((s[index_1]) - 'a');
                freq[val_1]++;
            }

            int maxi = 0;
            for(int k=0; k < 26; k++){
                maxi = max(freq[k], maxi);
                freq[k] = 0;
            }

            ans += (Quotient - maxi);
        }

        // O/P
        cout << ans << endl;
    }
}