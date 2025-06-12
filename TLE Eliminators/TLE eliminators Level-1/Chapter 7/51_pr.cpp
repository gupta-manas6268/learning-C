// Correct.

// D. The first missing number
// https://codeforces.com/group/c3FDl9EUi9/contest/262795/problem/D



#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void display(vector<int> &v){
    for(int i=0; i < v.size(); i++){
        cout << v.at(i) << " ";
    }
    cout << endl;
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int n, m; cin >> n >> m;
    vector<int> a;
    for(int i=0; i<n; i++){
        int num; cin >> num;
        a.push_back(num);
    }

    sort(a.begin(), a.end());
    // display(a);

    int left = -m;
    for(int i=0; i<n; i++){

        if(left != a.at(i)){ cout << left << endl; break;}
        if(left == a.at(i+1)){ left--;}
        left++;
    }
}