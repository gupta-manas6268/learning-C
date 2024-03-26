#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int compare(vector<int> &vec, int val){
    return vec[1] < val;
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    vector<vector<int>> a = {{1, 2}, {5, 4}, {2, 5}, {1, 7}};
    
    // sort(a.begin(), a.end(), [&] (vector<int> &left, vector<int> &right)) {

    // };

    auto it = lower_bound(a.begin(), a.end(), 5, compare);
    vector<int> vec = *it;
    cout << vec[0] << " " << vec[1] << endl;

}