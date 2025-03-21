// Correct. 
//  (I don't know anything about, How to Solve this
//    Problem. So, write Concept and it's Code in Note-book.)

// This is Mentor's code.

// D. Bracket Coloring
// https://codeforces.com/contest/1837/problem/D
































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
        string s; cin >> s;

        // Solution
        bool Is_Ans = true;
        int k;
        vector<int> Ans;
        vector<int> bal(n+1); // (bal => balance)
        for(int j=0; j<n; j++){
            if(s[j] == '('){
                bal[j+1] = (bal[j] + 1);
            }
            else{
                bal[j+1] = (bal[j] - 1);
            }
        }

        if(bal.back() != 0){ Is_Ans = false;}
        else{
            if((*min_element(bal.begin(), bal.end()) == 0) || (*max_element(bal.begin(), bal.end())) == 0){
                k = 1;
                for(int j=0; j<n; j++){
                    Ans.push_back(1);
                }
            }
            else{
                k = 2;
                int cur = 0; // (cur => current)
                while(cur < n){
                    int w = (s[cur] == '(' ? 1 : 2);
                    do{
                        cur++;
                        Ans.push_back(w);
                    }
                    while(bal[cur] != 0);
                }
            }
        }

        // O/P
        if(Is_Ans == false){ cout << -1 << endl;}
        else{
            cout << k << endl;
            for(int j=0; j<n; j++){
                cout << Ans[j] << " ";
            }
            cout << endl;
        }
    }
}