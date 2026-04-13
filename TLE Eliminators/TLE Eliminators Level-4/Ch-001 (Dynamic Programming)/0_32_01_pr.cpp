// Wrong. (wrong O/P)
// (I used Recursive-DP, which is giving
//   wrong O/P.)

// Array Description
// https://cses.fi/problemset/task/1746




































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int Ans = 0;
void solve(int index, vector<int>& x, int m){
    for(int i=0; i < x.size(); i++){
        cout << x[i] << " ";
    } cout << endl;
    if(index == x.size()){ 
        Ans++; 
        Ans %= MOD;
        return;
    }

    if(index == 0){
        if(x[index] == 0){
            for(int i=1; i <= m; i++){
                x[index] = i;
                solve(index+1, x, m);
            }
        }
        else{
            solve(index+1, x, m);
        }
    }
    else{
        if(x[index] == 0){
            x[index] = x[index-1];
            solve(index+1, x, m);

            if(((x[index-1]-1) >= 1) && (((x[index-1]-1) <= m))){
                x[index] = x[index-1]-1;
                solve(index+1, x, m);
            }

            if(((x[index-1]+1) >= 1) && (((x[index-1]+1) <= m))){
                x[index] = x[index-1]+1;
                solve(index+1, x, m);
            }
        }
        else{
            if(abs(x[index] - x[index-1]) > 1){
                return;
            }
            else{
                solve(index+1, x, m);
            }
        }
    }
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n, m; cin >> n >> m;
    vector<int> x(n);
    for(int i=0; i < n; i++){ cin >> x[i];}

    // Solution
    vector<vector<int>> vec;
    vector<int> temp;
    for(int i=0; i < n; i++){
        if(((i-1) >= 0) && (x[i-1] == 0) && (x[i] != 0)){
            temp.push_back(x[i]);
            vec.push_back(temp);
        }
        if((i == (n-1)) && (x[i] == 0)){
            temp.push_back(x[i]);
            vec.push_back(temp);
            break;
        }
        if(x[i] == 0){
            temp.push_back(x[i]);
        }
        if((x[i] != 0) && (((i+1) < n) && (x[i+1] == 0))){
            temp.clear();
            temp.push_back(x[i]);
        }
    }
    int Final_Ans = 1;
    for(int i=0; i < vec.size(); i++){
        Ans = 0;
        vector<int> temp = vec[i];
        for(int i=0; i < temp.size(); i++){
            cout << temp[i] << " ";
        } cout << endl << endl;
        solve(0, temp, m);
        Final_Ans *= Ans;
        Final_Ans %= MOD;
    }

    // O/P
    cout << Final_Ans << endl;
}