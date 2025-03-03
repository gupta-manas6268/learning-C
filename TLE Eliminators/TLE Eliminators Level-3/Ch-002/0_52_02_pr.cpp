// Correct.
// This is Mentor's code.

// C. Save the Nature
// https://codeforces.com/problemset/problem/1223/C



































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

bool check(int prefix, vector<int> &arr, int x, int a, int y, int b, int k){ // O(n)
    int LCM = (a/ __gcd(a,b)) * b;

    int a_Count = (prefix/ a) - (prefix/ LCM);
    int b_Count = (prefix/ b) - (prefix/ LCM);
    int LCM_Count = (prefix/ LCM);

    int i = 0, money = 0;
    while(LCM_Count--){
        money += (arr[i++]/ 100) * (x + y);
    }
    while(a_Count--){
        money += (arr[i++]/ 100) * (x);
    }
    while(b_Count--){
        money += (arr[i++]/ 100) * (y);
    }

    return money >= k;
}

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
        vector<int> arr(n);
        for(auto &i : arr){ cin >> i;}
        int x, a; cin >> x >> a;
        int y, b; cin >> y >> b;
        int k; cin >> k;

        // O/P
        sort(arr.begin(), arr.end(), greater<>()); // O(n*log(n))

        if(x < y){
            swap(x,y), swap(a,b);
        }
        int left = 1, right = n;
        int ans = -1;

        while(left <= right){ // O(log(n))
            int mid = (left + right)/ 2;

            if(check(mid, arr, x, a, y, b, k)){ // O(n)
                right = mid-1;
                ans = mid;
            }
            else{
                left = mid+1;
            }
        }

        cout << ans << endl;
        // TC = O(n*log(n)).
    }
}