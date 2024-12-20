// Wrong.

// Array Division
// https://cses.fi/problemset/task/1085






































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

    int n, k; cin >> n >> k;
    vector<int> x; 
    vector<int> prefix_sum;
    int Sum = 0;
    for(int i=0; i<n; i++){
        int temp; cin >> temp;
        x.push_back(temp);
        Sum += temp;

        prefix_sum.push_back(Sum);
    }

    int left = *max_element(x.begin(), x.end());
    int right = Sum;

    while(left <= right){
        int mid = (left + right)/ 2;
        int add = 0;

        for(int i=0; i<k; i++){
            int index = (*upper_bound(prefix_sum.begin(), prefix_sum.end(), mid + add) - 1);
            if((index == (n-1)) && (i != (k-1))){
                right = mid-1; break;
            }
            if((i == (k-1)) && (index != (k-1))){
                left = mid+1; break;
            }
            if((i == (k-1)) && (index == (k-1))){
                break;
            }
            add = prefix_sum[index];
        }
    }

    int ans = (left + right)/ 2;
    cout << ans << endl;
}