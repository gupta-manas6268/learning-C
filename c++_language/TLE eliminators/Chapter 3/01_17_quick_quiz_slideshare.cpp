#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int sumDigit(int n){
    int a = 0;

    while(n>0){
        a += n % 10;
        n /= 10;
    }
    return a;
}
signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int k; cin>>k;
    int a = 0;

    bool b = true;

    for(int i=1; i; i++){
        for(int j=0; j<=9; j++){
            if(sumDigit(i) + j == 10){
                a++;

                if(a == k){
                    int ans = (i * 10) + j;
                    cout << ans <<endl;
                    bool b = false;
                    break;
                }
            }
        }
        if(b == false){
            break;t
        }
    }
}