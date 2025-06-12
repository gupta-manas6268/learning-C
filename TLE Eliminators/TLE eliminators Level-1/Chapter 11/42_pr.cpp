// 

// S. Array Average
// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/S





#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

float ans = 0;
void sum(int *arr, int n, int i){
    if(i < (n-1)){
        ans += (arr[i])/ n;
        sum(arr, n, i+1);
    }
    else{
        ans += (arr[i])/ n;
        cout << ans << endl;
    }
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){ cin >> arr[i];}

    sum(arr, n, 0);
}