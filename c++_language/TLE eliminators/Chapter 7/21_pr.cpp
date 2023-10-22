#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int x;
    cin >> x;

    vector<int> vec;
    int digit = 0;
    
    while (x > 0){
        int element = x % 10;
        vec.push_back(element);
        digit++;
        x /= 10;
    }

    int pair = x / 2, pair_remainder = x % 2;
    vector<int> ans;

    if (pair_remainder == 1){
        int quotient;
        for (int i = 0; i * i >= vec[digit - 1]; i++){

            if (i * i > vec[digit - 1]){
                ans.push_back(i - 1);
            }
            else{
                ans.push_back(i);
            }
            quotient = 2 * i;
        }

        for (int i = quotient * 10 + 1; i; i++){
        }
    }
}