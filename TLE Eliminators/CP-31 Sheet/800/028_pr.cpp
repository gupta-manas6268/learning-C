// 

// A. Make it Beautiful
// https://codeforces.com/problemset/problem/1783/A



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
        int n; cin >> n;
        vector<int> a;
        for(int i=0; i<n; i++){
            int temp; cin >> temp;
            a.push_back(temp);
        }

        sort(a.begin(), a.end(), greater<int>());
        int freq = count(a.begin(), a.end(), a[n-1]);

        vector<int> ans;
        bool Ans;

        if(freq == a.size()){ Ans = false;}
        else{
            Ans = true;
            if(freq == 1){
                for(int i=0; i<ans.size(); i++){
                    ans.push_back(a[i]);
                }
            }
            else{
                for(int i=0; i < (ans.size()-1); i++){
                    if(i == 1){
                        ans.push_back(a[ans.size()-1]);
                    }
                    ans.push_back(a[i]);
                }
            }
        }

        if(Ans == false){ cout << "NO" << endl;}
        else{
            cout << "YES" << endl;
            for(int i=0; i<ans.size(); i++){
                cout << ans[i] << " ";
            }
            cout << endl;
        }
    }
}