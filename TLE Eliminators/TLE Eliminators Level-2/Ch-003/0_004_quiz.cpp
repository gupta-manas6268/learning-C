// Wrong.

// The Lost Array
// https://www.codechef.com/problems/LOSTARRAY_?tab=statement











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
        vector<int> B;
        for(int i=0; i<=n; i++){
            int temp; cin >> temp;
            B.push_back(temp);
        }

        int Full = B[0];
        vector<int> A;
        for(int i=1; i<=n; i++){
            int temp;
            temp = (Full^B[i]);
            A.push_back(temp);
        }

        for(int i=0; i<n; i++){
            cout << A[i] << " ";
        }
        cout << endl;
    }
}