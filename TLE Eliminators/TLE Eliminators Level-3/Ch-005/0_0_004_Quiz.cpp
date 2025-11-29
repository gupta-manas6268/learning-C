// Write it in 'Register-Notes' immediately, gadhe.

// I think about it's Solution, but write it in 
//  'Register-Notes' because it is Hard-Question.





// Correct.
// This is Mentor's code.

// F. Valuable Cards
// https://codeforces.com/contest/1992/problem/F



























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
        int n, x; cin >> n >> x;
        vector<int> a(n);
        for(auto &i : a){ cin >> i;}

        // Solution
        set<int> current, factors;
        for(int i=1; i*i <= x; i++){
            if(x%i == 0){
                factors.insert(i);
                factors.insert(x/i);
            }
        }

        int segments = 1;
        for(int i=0; i<n; i++){
            set<int> new_Inserts;
            if(x % a[i] == 0){
                new_Inserts.insert(a[i]);
            }
            for(auto &j : factors){
                if((j % a[i] == 0) && (current.count(j / a[i]))){
                    new_Inserts.insert(j);
                }
            }

            if(new_Inserts.count(x)){ // If 'x' is present in 'new_Inserts'.
                segments++; current.clear();
                current.insert(a[i]);
                current.insert(1);
            }
            else{
                for(auto &j : new_Inserts){
                    current.insert(j);
                }
            }
        }

        // O/P
        cout << segments << endl;
        // TC = O(n*log(n)*power(n, 1/3)).
    }
}