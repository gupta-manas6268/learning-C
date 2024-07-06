// 

// B. Beautiful Array
// https://codeforces.com/problemset/problem/1715/B



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

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        int n, k, b, s; cin >> n >> k >> b >> s;
        
        vector<int> a;
        int temp = (k * b);
        a.push_back(temp);

        temp = (s - temp);
        bool ans = true;
        if(temp < 0){ ans = false;}
        else if(temp == 0){}
        else if((n == 1) && ((temp % k) >= 1)){ ans = false;}
        else if((temp / (n * n)) > power(k-1, n)){ ans = false;}
        else{
            while(temp > 0){
                if(temp < k){ a.push_back(temp); temp = 0;}
                else{
                    a.push_back(k-1);
                    temp -= (k - 1);
                }
            }
        }


    }
}