// 

// A. Don't Try to Count
// https://codeforces.com/problemset/problem/1881/A



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
        int n, m; cin >> n >> m;
        string x, s; cin >> x >> s;
        
        vector<int> index;
        for(int i=0; i<n; i++){
            if(x[i] == s[0]){
                index.push_back(i);
            }
        }

        vector<int> ans_vector;
        for(int i=0; i < index.size(); i++){
            int Ans = 0;
            bool ans = true;
            int j = index[i];
            int k = 0;
            while(ans != false){
                if(x[j] != s[k]){
                    ans = false;
                }
                j++; k++;

                if(j == x.size()){
                    j = 0; Ans++;
                }
                if(k == s.size()){
                    ans_vector.push_back(Ans);
                }
            }
        }

        sort(ans_vector.begin(), ans_vector.end());
        int Ans = ans_vector[0];

        // int Ans = *min_element(ans_vector.begin(), ans_vector.end());
        cout << Ans << endl;
    }
}