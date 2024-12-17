// Correct.

// Maximum AND
// https://www.codechef.com/problems/MAXAND18
























#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

class comparator{
public:
    bool operator()(pair<long long, long long> &p1, pair<long long, long long> &p2){
        if(p1.first != p2.first){
            return p1.first > p2.first;
        }
        return p1.second < p2.second;
    }
};

void solve(){
    long long n, k; cin >> n >> k;
    vector<long long> arr(n);
    for(auto &it: arr){
        cin >> it;
    }

    vector<pair<long long, long long>> v;
    for(int i=30; i >= 0; i--){
        long long count = 0;  // count -> number of numbers in which i'th bit is set.
        for(auto it: arr){
            if(it & 1<<i){
                count++;
            }
        }
        v.push_back({(1<<i)*count, i});
    }

    sort(v.begin(), v.end(), comparator());  // Sort in descending order.
    // {5,1}, {10,5}, {10,4} // before sorting.
    // {10,5}, {10,4}, {5,1} // after sorting.


    // first k numbers in v have the bits that needs to be set in x.
    long long x = 0;
    for(int i=0; i<k; i++){
        int bit_to_set = v[i].second;
        x = (x| (1<<bit_to_set));  
        // x |= (1<<bit_to_set);  // This line is same as above line.
    }

    cout << x << endl;
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        solve();
    }
}