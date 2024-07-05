// Correct.

// B. Chemistry
// https://codeforces.com/problemset/problem/1883/B

































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
        int n, k; cin >> n >> k;
        // string s; cin >> s;
        vector<char> s;
        for(int i=0; i<n; i++){
            char c; cin >> c;
            s.push_back(c);
        }

        int arr[26] = {0};
        // char c; cin >> c;
        // int x = (int)c;
        // cout << x << endl;

        bool ans = true;
        for(int i=0; i<n; i++){
            int x = (int)s[i];
            x -= 97;
            arr[x]++;
        }

        // for(int i=0; i<26; i++){
        //     cout << arr[i] << endl;
        // }

        int size = 0;
        bool odd = false;
        if((n-k)%2 == 0){
            for(int i=0; i<26; i++){
                if(arr[i]%2 == 0){
                    size += arr[i];
                    if(size > (n-k)){ break;}
                }
                else{
                    size += (arr[i] - 1);
                    if(size > (n-k)){ break;}
                }
            }
        }
        else{
            for(int i=0; i<26; i++){
                if(arr[i]%2 == 0){
                    size += arr[i];
                    if(size > (n-k)){ odd = true; break;}
                    if((size > (n-k)) && (odd == true)){ break;}
                }
                else{
                    if(odd == false){
                        odd = true;
                        size += arr[i];
                    }
                    else{
                        size += (arr[i] - 1);
                    }

                    if(size > (n-k)){ break;}
                }
            }
        }
        if((odd == false) && ((n-k)%2 != 0)){ ans = false;}
        if(size < (n-k)){
            ans = false;
        }


        if(ans == true){ cout << "YES" << endl;}
        else{ cout << "NO" << endl;}
        // cout << endl << endl;
    }
}