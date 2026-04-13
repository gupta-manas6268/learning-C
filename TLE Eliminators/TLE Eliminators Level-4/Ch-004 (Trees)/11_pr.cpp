// Correct.

// B. Christmas Spruce
// https://codeforces.com/problemset/problem/913/B




































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int pair_lower_bound(vector<int>& temp, int x){
    int ans = lower_bound(temp.begin(), temp.end(), x) - temp.begin();
    return ans;
}
int pair_upper_bound(vector<int>& temp, int x){
    int ans = upper_bound(temp.begin(), temp.end(), x) - temp.begin();
    return ans;
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n; cin >> n;
    vector<int> parent(n+1, -1);
    for(int i=2; i <= n; i++){
        int temp; cin >> temp;
        parent[i] = temp;
    }

    // Solution
    vector<pair<int,int>> parent_index;
    for(int i=2; i <= n; i++){
        parent_index.push_back({parent[i], i});
    }
    parent_index.push_back({1e4, 1e4});
    sort(parent_index.begin(), parent_index.end());

    // For 'pair_lower_bound' & 'pair_upper_bound' functions.
    vector<int> temp;
    for(int i=0; i < parent_index.size(); i++){
        temp.push_back(parent_index[i].first);
    }

    queue<int> nodes;
    nodes.push(1);
    bool ans = true;
    while(nodes.size() >= 1){
        int index_1 = pair_lower_bound(temp, nodes.front());
        int index_2 = pair_upper_bound(temp, nodes.front());
        nodes.pop();
        
        if((index_2 - index_1) >= 3){
            int leaf = 0;
            for(int i = index_1; i < index_2; i++){
                int index_11 = pair_lower_bound(temp, parent_index[i].second);
                int index_12 = pair_upper_bound(temp, parent_index[i].second);

                if((index_12 - index_11) == 0){
                    leaf++;
                }
                else{
                    nodes.push(parent_index[i].second);
                }
            }
            if(leaf < 3){
                ans = false; break;
            }
        }
        else{ ans = false; break;}
    }

    // O/P
    if(ans == true){ cout << "Yes" << endl;}
    else{ cout << "No" << endl;}
}