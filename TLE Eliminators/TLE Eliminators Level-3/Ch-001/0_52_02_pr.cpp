// Correct.
// I write this code with the help of Hint.

// C. Cellular Network
// https://codeforces.com/problemset/problem/702/C




































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
    int n, m; cin >> n >> m;
    vector<int> a, b;
    for(int i=0; i<n; i++){
        int temp; cin >> temp;
        a.push_back(temp);
    }
    for(int i=0; i<m; i++){
        int temp; cin >> temp;
        b.push_back(temp);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    // Solution
    vector<int> r;
    for(int i=0; i<n; i++){
        int index2 = upper_bound(b.begin(), b.end(), a[i])-b.begin();
        int index1 = (index2-1);

        if(index2 == m){
            r.push_back(a[i]-b[index2-1]);
        }
        else{
            int temp;
            int A = abs(a[i]-b[index2]);
            int B;
            if(index2 != 0){
                B = abs(a[i]-b[index1]);
                r.push_back(min(A,B));
            }
            else{
                r.push_back(A);
            }
        }
    }

    // O/P
    int ans = *max_element(r.begin(), r.end());
    cout << ans << endl;
}