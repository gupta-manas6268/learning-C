// Wrong.

// A. Wallet Exchange
// https://codeforces.com/problemset/problem/1919/A




#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        int a, b; cin >> a >> b;
        int move = 1;

        while((a > 0) || (b > 0)){
            swap(&a, &b);

            if((move % 2) != 0){
                move++;
                a--;
            }
            if(a == 0){
                cout << "Bob" << endl;
                break;
            }

            if((move % 2) == 0){
                move--;
                b--;
            }
            if(b == 0){
                cout << "Alice" << endl;
                break;
            }
        }
    }
}