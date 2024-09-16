// 

// D2. Sage's Birthday (hard version)
// https://codeforces.com/problemset/problem/1419/D2



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

    int n; cin >> n;
    vector<int> a;
    for(int i=0; i<n; i++){
        int temp; cin >> temp;
        a.push_back(temp);
    }
    sort(a.begin(), a.end());

    vector<int> ans;
    int val = 1;
    while(a.empty() != true){
        if((val % 2) != 0){  // val => odd
            ans.push_back(a[a.size()-1]);
            a.pop_back();
        }
        else{
            ans.push_back(a[0]);
            a.erase(a.begin(), a.begin()+1);
        }
        val++;
    }

    int Ans = 0;
    for(int i=1; i < (n-1); i++){
        if((ans[i] < ans[i-1]) && (ans[i] < ans[i+1])){
            Ans++;
        }
    }

    cout << Ans << endl;
    for(int i=0; i<n; i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}