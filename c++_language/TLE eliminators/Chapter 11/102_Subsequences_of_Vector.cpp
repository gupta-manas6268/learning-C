// *********** This is Part-02 of the Lecture. ***********






#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int n;
vector<int> a;

void solve(int i, vector<int> cur){
    if(i == n){
        for(auto x: cur)
            cout << x << " ";
        cout << endl;

        return;
    }

    solve(i+1, cur);

    cur.push_back(a[i]);

    solve(i+1, cur);
    // solve(i+1, cur+a[i]); // This line will show Error.

}

signed main(){
    // ios::sync_with_stdio(false); cin.tie(NULL);  // I Commented this line Because i get confused when this line is not Commented.

    cout << "Enter the Length of the Vector: ";
    cin >> n;
    cout << "Enter a Vector." << endl;

    a.resize(n);  // resize -→ It changes the size of the Vector 'n'.
    
    for(int i=0; i<n; i++)
        cin >> a[i];

    solve(0, {});
}