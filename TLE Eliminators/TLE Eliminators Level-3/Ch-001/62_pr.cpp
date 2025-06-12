// 

// C. Sagheer and Nubian Market
// https://codeforces.com/problemset/problem/812/C



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
    int n, S; cin >> n >> S;
    int a[n];
    for(int i=0; i<n; i++){ cin >> a[i];}

    // O/P
    int left = 0, right = n;
    int k, T;
    while(left <= right){
        int mid = (left + right)/2;

        if(mid == 0){
            k = 0; T = 0;
        }
        else{
            vector<int> temp;
            for(int i=0; i<n; i++){
                temp[i] = (a[i] + ((i+1) * mid));
            }
            sort(temp.begin(), temp.end());
            T = 0;
            for(int i=0; i<mid; i++){
                T += temp[i];
            }

            if(T <= S){
                k = mid;
                left = mid+1;
            }
            else{
                right = mid-1;
            }
        }
    } 

    cout << k << " " << T << endl;
}