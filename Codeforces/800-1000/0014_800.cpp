// Correct.

// B. Vlad and Shapes
// https://codeforces.com/problemset/problem/1926/B



















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
        int n; cin >> n;
        string s[n];
        for(int i=0; i<n; i++){ cin >> s[i];}

        int num1 = 0, num2 = 0;
        int index1 = -1, index2 = -1;

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if((s[i][j] == '1') && (index1 == -1)){
                    num1++;
                }
                else if((s[i][j] == '1') && (index1 != -1)){
                    num2++;
                }
            }
            if(num1 != 0){ index1++;}
            if(num2 != 0){
                index2++;
                break;
            }
        }
        if(num1 == num2){ cout << "SQUARE" << endl;}
        else{ cout << "TRIANGLE" << endl;}
    }
}