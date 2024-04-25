// 

// B. T-primes
// https://codeforces.com/problemset/problem/230/B


#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

vector <string> factor(vector <int> arr){
    vector <int> facts(arr.size());
    vector <string> ans(arr.size());
    
    for(int i=0; i < arr.size(); i++){
        for(int j=2; j*j <= arr[i]; j++){
            if(arr[i] % j == 0){
                facts[i]++;
                arr[i] /= j;
            }
            if(facts[i] > 3){
                ans[i] = "NO";
                break;
            }
        }
        if(facts[i] == 3){
            ans[i] = "YES";
        }
    }

    return ans;
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    vector <string> Ans = factor(vector <int> (arr, arr + n));
    for(int i=0; i<n; i++){
        cout << Ans[i] << endl;
    }
}