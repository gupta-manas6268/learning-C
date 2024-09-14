// 

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
    int Sum = 0;
    for(int i=0; i<n; i++){
        int temp; cin >> temp;
        x.push_back(temp);
        
        Sum += temp;
    }

    int maxi = *max_element(x.begin(), x.end());

    int left = maxi;
    int right = Sum;
    bool Ans = false;

    int s[4] = {0};
    int j = 0;
    while(Ans == true){
        if(left == right){ Ans = true;}
        int mid = (left + right) / 2;
        for(int i=0; i<=k; i++){ s[i] = 0;}
        for(int i=0; i<n; i++){
            s[j] += x[i];
            if(s[j] > mid){
                s[j] -= x[i];
                j++;
                s[j] += x[i];
            }
            if(j == n){ left = mid; break;}
        }
        if(j < (n-1)){ right = mid - 1;}
    }

    int ans = 0;
    for(int i=0; i<n; i++){
        ans = max(ans, s[i]);
    }

    cout << ans << endl;
}