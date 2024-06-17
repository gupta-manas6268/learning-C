// 

// D. Divide and Equalize
// https://codeforces.com/contest/1881/problem/D



#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

vector<int> factor(int n){
    vector<int> facts;
    for(int i=2; i*i <= n; i++){
        while(n%i == 0){
            facts.push_back(i);
            n /= i;
        }
    }
    if(n > 1){
        facts.push_back(n);
    }
    
    return facts;
}

signed main(){
    // ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        int n; cin >> n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        vector<int> ans;
        for(int i=0; i<n; i++){
            vector<int> factors = factor(arr[i]);
            ans.insert(ans.end(), factors.begin(), factors.end());
        }
        sort(ans.begin(), ans.end());

        bool Ans = true;

        int count = 1;
        for(int i=1; i < ans.size(); i++){
            if(ans[i] == ans[i-1]){
                count++;
            }
            if(i == (ans.size() - 1)){
                if(count%n != 0){
                    Ans = false;
                    break;
                }
            }
            else{
                if(count%n != 0){
                    Ans = false;
                    break;
                }
                count = 1;
            }
        }

        if(Ans == true){ cout << "YES" << endl;}
        else{ cout << "NO" << endl;}
    }
}