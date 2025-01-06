// 

// C. Number of Equal
// https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/C





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

    // O/P
    int ans = 0;
    int i = 0, j = 0;
    while((i < n) && (j < m)){
        if(a[i] != b[j]){
            if(a[i] < b[j]){
                i++;
            }
            else{
                j++;
            }
        }
        else{
            int m = 0, n = 0;
            for(int x = i; x < n; x++){
                if(a[x] == a[i]){ m++;}
                else{ i += m; break;}
                // cout << "a" << " ";
            }
            for(int x = j; x < m; x++){
                if(b[x] == b[j]){ n++;}
                else{ j += n; break;}
                // cout << "b" << " ";
            }

            ans += (n * m);
        }
    }

    cout << ans << endl;
    // TC = O(n + m).
}