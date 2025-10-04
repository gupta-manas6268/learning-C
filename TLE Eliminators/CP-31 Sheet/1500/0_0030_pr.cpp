// Correct.

// C. Two TVs
// https://codeforces.com/problemset/problem/845/C
































// (Hint: Two-Pointers, Greedy)





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
    int n; cin >> n;
    vector<pair<int,int>> Show(n);
    for(int i=0; i<n; i++){
        int temp1, temp2; cin >> temp1 >> temp2;
        Show[i] = {temp2, temp1};
    }

    // Solution
    sort(Show.begin(), Show.end()); // O(n * log(n))

    vector<int> Take(n, 0);
    int left_1 = -1, left_2 = -1;
    for(int i=0; i < Show.size(); i++){ // O(n)
        if((Show[i].second > left_1) && (Show[i].second > left_2)){
            if(left_1 >= left_2){
                left_1 = Show[i].first; 
            }
            else{
                left_2 = Show[i].first; 
            }
            Take[i] = 1;
        }
        else if((Show[i].second > left_1)){
            left_1 = Show[i].first; 
            Take[i] = 1;
        }
        else if((Show[i].second > left_2)){
            left_2 = Show[i].first; 
            Take[i] = 1;
        }
    }

    bool ans = true;
    for(int i=0; i < Show.size(); i++){
        if(Take[i] == 0){ ans = false; break;}
    }
        
    // O/P
    if(ans == true){ cout << "YES" << endl;}
    else{ cout << "NO" << endl;}
    // TC = O(n * log(n))
}