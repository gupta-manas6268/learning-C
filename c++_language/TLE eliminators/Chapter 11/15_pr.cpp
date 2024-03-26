// Solve this by using Recursion.



#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        int n; cin >> n;

        vector<int> vec;
        int size = 0;

        while(n > 0){
            int a = n % 2;

            vec.push_back(a);
            n /= 2;

            size++;
        }
        for(int i=0; i<size; i++){
            cout << vec[size-i-1];
        }

        cout << endl;
    }
}