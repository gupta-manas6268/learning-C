// This is My code.
// Correct.

// Digit Queries
// https://cses.fi/problemset/task/2431/


















#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int power(int a, int b){
    int ans = 1;
    for(int i=1; i <= b; i++){
        ans *= a;
    }
    return ans;
}

int digit_Value(int n, int digit){
    vector<int> Digit;
    while(n > 0){
        Digit.push_back(n % 10);
        n /= 10;
    }
    reverse(Digit.begin(), Digit.end());

    int ans = Digit[digit-1];
    return ans;
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        long long  k; cin >> k;
        vector<long long> digit;
        long long  total_Digit = 0;
        digit.push_back(total_Digit);

        for(int i=1; i; i++){
            if(total_Digit < power(10, 18)){
                total_Digit += (9 * power(10, i-1) * (i));
                digit.push_back(total_Digit);
            }
            else{
                break;
            }
        }

        int ans;
        for(int i=1; i < digit.size(); i++){
            if((k > digit[i-1]) && (k <= digit[i])){
                k -= digit[i-1];
                int number = (power(10, i-1) - 1);
                if(k%i == 0){
                    number += ((k / i) - 1);
                    number += 1;

                    ans = digit_Value(number, i);
                }
                else{
                    number += (k / i);
                    number += 1;

                    ans = digit_Value(number, k%i);
                }
            }
        }

        cout << ans << endl;
    }
}