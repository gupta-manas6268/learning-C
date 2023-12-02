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

        int a[n], negative = 0, sum = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            
            if(a[i] < 0){
                negative++;
            }

            a[i] = abs(a[i]); // abs =→ gives us the 'mod' +ve value of that number.
            sum += a[i]; 
        }

        if(negative % 2 != 0){
            int mini = *min_element(a, a+n);
            cout << sum - mini * 2 << endl; // As, only minimum absolute value is negative by swapping. 
                                            //    So, we subtract 'mini * 2' from the 'sum of absolute value of the number'.
        }
        else{
            cout << sum << endl; // As, all values will become +ve by swapping. 
                                 //   So, we just have to sum the absolute value of all numbers.
        }
    }
}