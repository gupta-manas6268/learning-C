// Correct.
// I Write this code with the help of 'Hints' and 'Chat-GPT'.

// D. Pythagorean Triples
// https://codeforces.com/problemset/problem/1487/D



































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

// Find Sqrt.
bool func(int mid, int n){
    return mid*mid <= n;
}

int Sqrt(int n){
    int start = 1, end = n, ans = -1;

    while(start <= end){
        int mid = start + (end - start)/2;

        if(func(mid, n) == true){
            ans = mid;
            start = (mid + 1);
        }
        else{
            end = (mid - 1);
        }
    }

    return ans;
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        int n; cin >> n;

        int a = Sqrt(2*n - 1);
        if(a%2 == 0){ // even
            a--; // odd
        }

        int ans = (a - 1)/ 2; 
        cout << ans << endl;
        
        // TC = O(1).
    }
}