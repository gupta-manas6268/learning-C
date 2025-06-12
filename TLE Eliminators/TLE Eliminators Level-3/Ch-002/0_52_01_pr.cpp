// Wrong (Gives me Wrong O/P.)
// I Solved it with the Help of Hint.

// C. Save the Nature
// https://codeforces.com/problemset/problem/1223/C



































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

    int tc; cin >> tc;

    while (tc--){
        // I/P
        int n; cin >> n;
        vector<int> p(n+1);
        p[0] = 0;
        for(int i=1; i<=n; i++){ cin >> p[i];}
        int x, a; cin >> x >> a;
        int y, b; cin >> y >> b;
        int k; cin >> k;

        // O/P
        sort(p.begin(), p.end(), greater<>());

        // int LCM = (a * b)/ __gcd(a,b);
        int LCM = (a/ __gcd(a,b)) * b; 
        // To avoid overflow, as 1 <= a,b <= n, (1 <= n <= 2*1e5)

        int left = 1, right = n; 
        int ans = -1;
        while(left <= right){
            int mid = (left + right)/ 2;
            
            int Common = (mid/ LCM);
            int a_times = (mid/a) - Common;
            int b_times = (mid/b) - Common;
            
            int sum = 0;
            for(int i=1; i <= Common; i++){
                // sum += (p[i] * (x + y))/ 100;
                sum += (p[i]/ 100) * (x + y);
            }
            if(x >= y){
                for(int i = Common + 1; i <= (Common + a_times); i++){
                    // sum += (p[i] * x)/ 100;
                    sum += (p[i]/ 100) * (x);
                }
                for(int i = Common + a_times + 1; i <= (Common + a_times + b_times); i++){
                    // sum += (p[i] * y)/ 100;
                    sum += (p[i]/ 100) * (y);
                }
            }
            else{
                for(int i = Common + 1; i <= (Common + b_times); i++){
                    // sum += (p[i] * y)/ 100;
                    sum += (p[i]/ 100) * (y);
                }
                for(int i = Common + b_times + 1; i <= (Common + a_times + b_times); i++){
                    // sum += (p[i] * x)/ 100;
                    sum += (p[i]/ 100) * (x);
                }
            }

            // Binary-Search Condition.
            if(sum >= k){
                right = mid-1;
                ans = mid;
            }
            else{
                left = mid+1;
            }
        }

        cout << ans << endl;
    }
}