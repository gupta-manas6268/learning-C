#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define all(x) x.begin(), x.end() 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n = 5;

    // No. of ways to put elements s.t. we are on the i'th index &
    //  mask is the representation the elements we have not taken.
    auto f = [&](int index, int mask, vector<int>v, auto &&F) -> void {
        if(index == n){
            for(auto &i : v){ cout << i << " ";}
            cout << endl;
            return;
        }

        for(int i=0; i < n; i++){
            if(((1 << i) & mask) == 0){
                // i'th element is free to be taken
                v.push_back(i + 1);
                F(index + 1, mask | (1 << i), v, F);
                v.pop_back();
            }
        }
    };

    f(0, 0, {}, f);
    // TC = O(n * pow(2, n))

    // (n * pow(2, n)) <<< (fact(n) * n)
}