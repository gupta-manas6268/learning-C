// Correct.
// (This is My code & My Concept. So, don't Write it in Note-book.)

// D. Candy Box (easy version)
// https://codeforces.com/problemset/problem/1183/D



































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
        map<int,int> mp;
        for(int i=0; i<n; i++){
            int temp; cin >> temp;
            mp[temp]++;
        }

        // Solution
        vector<int> vec;
        for(auto &it : mp){
            vec.push_back(it.second);
        }

        sort(vec.begin(), vec.end(), greater<>());

        stack<int> st;
        int ans = 0;
        for(int i=0; i < vec.size(); i++){
            if(i == 0){
                st.push(vec[i]);
            }
            else{
                if(st.top() <= vec[i]){
                    st.push(st.top()-1);
                }
                else{
                    st.push(vec[i]);
                }
            }
            ans += st.top();

            if(st.top() <= 0){ break;}
        }

        // O/P
        cout << ans << endl;
    }
}