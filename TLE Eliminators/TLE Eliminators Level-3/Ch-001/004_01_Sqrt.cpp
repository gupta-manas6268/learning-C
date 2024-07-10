// Second code is better code.



#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void Sqrt(){
    long long x; cin >> x;
    // assume, x <= 1e16
    double left = 1, right = 1e9;
    double ans = 1;

    // answer to be correct upto 7 decimal places.
    double precision = 1e-8;  // 10 ^ (-8)

    int count = 0;
    while((right - left) > precision){
        double mid = (left + right) / 2;
        if(mid <= (x / mid)){
            ans = mid;
            left = mid + precision; 
        }
        else{
            right = mid - precision;
        }

        count++;
        if(count > 100){ break;}
        // Above line is very important, without this line this code will
        //  convert into a infinite loop, because of limited precision of 
        //  'double' variable, in while loop .
    }

    cout << setprecision(10) << fixed;
    cout << ans << endl;
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    Sqrt();
}