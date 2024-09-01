// Wrong (Runtime error.)

// V. Creating Expression1
// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/V




































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

bool ans = false;
vector<int> A;
int N, X;
void solve(int sum, int i){
    if(i == 0){ 
        sum += A[i];
        solve(sum, i+1);
    }
    if(i == (N-1)){
        if(sum == X){
            ans = true;
        }
        return;
    }
    
    solve(sum + A[i+1], i+1);
    solve(sum - A[i+1], i+1);
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    cin >> N >> X;
    for(int i=0; i<N; i++){
        int temp; cin >> temp;
        A.push_back(temp);
    }

    solve(0, 0);

    if(ans == true){ cout << "YES" << endl;}
    else{ cout << "NO" << endl;}
}