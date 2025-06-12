#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

bool prime(long long n){
    bool ans = true;
    for(long long i=2; i<n; i++){
        if(i == 2){

        }
        else if(n%i == 0){
            ans = false; break;
        }
    }

    return ans;
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        long long n; cin >> n;

        long long left = 2, right = n;
        long long root = 0;
        bool ans = false;

        while(left <= right){
            long long mid = (left + right)/2;

            if((mid * mid) < n){
                // left = mid+1;
                left = mid+1;
            }
            else if((mid * mid) > n){
                // right = mid-1;
                right = mid-1;
            }
            else{
                root = mid; break;
            }
        }
        if(root != 0){
            if(prime(root) == true){
                ans = true;
            }
        }

        cout << root << " ";
        if(ans == true){ cout << "YES" << endl;}
        else{ cout << "NO" << endl;}
    }
}