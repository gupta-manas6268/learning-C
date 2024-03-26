// Correct.

// A. New Palindrome
// https://codeforces.com/problemset/problem/1832/A


















#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        string s; cin >> s;
        int Size = s.size();

        if((Size % 2) != 0){
            if((Size/2) <= 1){
                cout << "NO" << endl;
            }
            else{
                for(int i=0; i < ((Size/2)-1); i++){
                    if(s[i] != s[i+1]){
                        cout << "YES" << endl;
                        break;
                    }
                    else if((i == ((Size/2)-2) && (s[i] == s[i+1]))){
                        cout << "NO" << endl;
                        break;
                    }
                }
            }
        }
        else{
            if((Size/2) <= 1){
                cout << "NO" << endl;
            }
            else{
                for(int i=0; i < ((Size/2)-1); i++){
                    if(s[i] != s[i+1]){
                        cout << "YES" << endl;
                        break;
                    }
                    else if((i == ((Size/2)-2) && (s[i] == s[i+1]))){
                        cout << "NO" << endl;
                        break;
                    }
                }
            }
        }
    }
}