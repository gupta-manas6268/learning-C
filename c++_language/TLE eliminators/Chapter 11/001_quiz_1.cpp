// *********** This is Part-01 of the Lecture. ***********



// Q.1: Write a recursive function to calculate the 
//       factorial of a number.


















#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int fact(int n){
    if((n == 0) || (n == 1)){ return 1;}
    return fact(n-1) * n;
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int num; cin >> num;

    int ans = fact(num);
    cout << ans << endl;

}