// Correct, but Compilation error in Codeforces.
// Here, we use Dynamic Memory Allocation.

// L. LOL Lovers
// https://codeforces.com/problemset/problem/1912/L

















#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;
    char *s; 
    s = (char*) malloc(n * sizeof(char));
    cin >> s;

    int L = 0, O = 0;
    int *LIndexing, *OIndexing;
    LIndexing = (int*) malloc(n * sizeof(int));
    OIndexing = (int*) malloc(n * sizeof(int));

    int indexing1 = 0, indexing2 = 0;

    for(int i=0; i < n; i++){
        if(s[i] == 'L'){
            L++;
            LIndexing[indexing1] = i;
            indexing1++;
        }
        else{
            O++;
            OIndexing[indexing2] = i;
            indexing2++;
        }
    }

    if(s[0] == 'L'){
        if((L > 2) || (L == 1)){ cout << 1 << endl;}
        else if(L == 2){
            int second = LIndexing[1];
            int o1 = LIndexing[1] - 1;
            int o2 = n - LIndexing[1] - 1;

            if(LIndexing[1] == (n-1)){
                cout << -1 << endl;
            }
            else if(o1 != o2){
                int ans = LIndexing[1] + 1;
                cout << ans << endl;
            }
            else if(o1 == o2){
                if(LIndexing[1] == n-2){
                    cout << -1 << endl;
                }
                else{
                    int ans = LIndexing[1] + 2;
                    cout << ans << endl;
                }
            }
        }
    }
    else{
        if((O > 2) || (O == 1)){ cout << 1 << endl;}
        else if(O == 2){
            int second = OIndexing[1];
            int l1 = OIndexing[1] - 1;
            int l2 = n - OIndexing[1] - 1;

            if(OIndexing[1] == (n-1)){
                cout << -1 << endl;
            }
            else if(l1 != l2){
                int ans = OIndexing[1] + 1;
                cout << ans << endl;
            }
            else if(l1 == l2){
                if(OIndexing[1] == n-2){
                    cout << -1 << endl;
                }
                else{
                    int ans = OIndexing[1] + 2;
                    cout << ans << endl;
                }
            }
        }
    }
}