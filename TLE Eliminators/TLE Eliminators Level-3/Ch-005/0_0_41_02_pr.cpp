// Wrong (Answer).
// (This is My 2nd-time code.)

// E - Double Factorial 
// https://atcoder.jp/contests/abc148/tasks/abc148_e



































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

// Power
// Wrong O/P, because as n <= 1e18. So,
//  it may give integer-overflow & 
//  wrong answer.
int power(int base, int exp){
    int result = 1;

    while(exp > 0){
        if((exp % 2) == 1){
            result *= base;

            base *= base;
            exp /= 2;
        }
        else{
            base *= base;
            exp /= 2;
        }
    }

    return result;
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n; cin >> n;

    // Solution
    int ans = 0;
    if(n%2 == 0){ // Even
        int i=1;
        while((i <= 18) && (n >= power(10, i))){
            int num = n;
            ans += (num / power(10, i));
            i++;
        }
        int j = 1;
        while((j <= 18) && (n >= (power(5, j)))){
            int num_1 = n, num_2 = n;
            ans += ((num_1 / (power(5, j) * 2)) - (num_2 / power(10, j)));
            j++;
        }
    }
    else{ ans = 0;} // Odd

    // O/P
    cout << ans << endl;
}