// Wrong Answer.

// B. MEXor Mixup
// https://codeforces.com/problemset/problem/1567/B



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
        int a, b; cin >> a >> b;

        int temp = ((a-1) % 4);

        int Xor;
        if(temp == 0){
            Xor = (a-1);
        }
        else if(temp == 1){
            Xor = 1;
        }
        else if(temp == 2){
            Xor = (a-2);
        }
        else{
            Xor = 0;
        }

        int num = (Xor ^ b);
        int Size = a;
        if(Xor == b){}
        else if(num > a){ Size++;}
        else if(num == a){
            Size += 2;
        }
        else{ Size += 1;}

        cout << Size << endl;
    }
}