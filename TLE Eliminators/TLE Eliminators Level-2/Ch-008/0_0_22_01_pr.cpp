// Correct.
// (This is My code in 2nd-time.)
// (See Line-97 to 101.)

// A. Constructive Problem
// https://codeforces.com/contest/1819/problem/A




































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int MEX = 0, extra = 0;
bool doubt = false;
vector<int> Index;
void solve_1(vector<pair<int,int>>& a, int n){
    for(int i=0; i < n; i++){
        if(a[i].first == MEX){
            MEX++;
        }
        else if(a[i].first > MEX){
            if(a[i].first == (MEX+1)){
                doubt = true;
                Index.push_back(a[i].second);
            }
            else{ extra++; break;}
        }
        else{ extra++;}
    }
}
bool solve_2(vector<int>& a, int n, int mex){
    int temp_MEX = 0;
    for(int i=0; i < n; i++){
        if(a[i] == temp_MEX){
            temp_MEX++;
        }
        else if(a[i] > temp_MEX){
            break;
        }
    }

    if(temp_MEX == mex){ return true;}
    else{ return false;}
}


signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        // Put values at Default, because of multiple
        //  test-cases.
        MEX = 0, extra = 0;
        doubt = false;
        Index.clear();
        
        
        // I/P
        int n; cin >> n;
        vector<int> a(n);
        for(int i=0; i < n; i++){ cin >> a[i];}
        
        // Solution
        vector<pair<int,int>> b(n);
        for(int i=0; i < n; i++){
            b[i] = {a[i], i};
        }
        sort(b.begin(), b.end());
        solve_1(b, n);

        bool ans = false;
        if(doubt == false){
            if(extra > 0){ ans = true;}
            else{ ans = false;}
        }
        else{
            int mini = n+1, maxi = -1;
            for(int i=0; i < Index.size(); i++){
                mini = min(mini, Index[i]);
                maxi = max(maxi, Index[i]);
            }

            for(int i = mini; i <= maxi; i++){ a[i] = MEX;}
            sort(a.begin(), a.end());

            ans = solve_2(a, n, MEX+1);
        }

        // O/P
        if(ans == true){ cout << "Yes" << endl;}
        else{ cout << "No" << endl;}
    }
}