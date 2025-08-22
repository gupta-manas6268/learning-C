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

    // I/P
    int n, k; cin >> n >> k;
    vector<int> x(n);
    int sum = 0;
    for(int i=0; i < n; i++){ 
        cin >> x[i];
        sum += x[i];
    }

    // Solution
    int left = *max_element(x.begin(), x.end()), right = sum;
    int ans;
    while(left <= right){
        int mid = (left + right) / 2;

        int Current_Sum = 0;
        int Partitions = 0;
        for(int i=0; i < n; i++){
            Current_Sum += x[i];
            if(Current_Sum > mid){
                Partitions++;
                Current_Sum = x[i];
            }
            if(i == (n-1)){
                Partitions++;
            }
        }

        if(Partitions <= k){
            ans = mid;
            right = mid - 1;
        }
        else{
            left = mid + 1;
        }
    }

    // O/P
    cout << ans << endl;
}