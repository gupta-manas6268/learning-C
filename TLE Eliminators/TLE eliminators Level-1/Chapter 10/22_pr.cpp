// 

// B - Round-Robin Tournament 
// https://atcoder.jp/contests/abc323/tasks/abc323_b




#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void sort(map <int, int> &M){
    vector <pair<int, int>> A;
    for(auto& it: M){
        A.push_back(it);
    }
    
    // Sort using comparator function.
    sort(A.begin(), A.end(), cmp);
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;
    vector<string> str;
    for(int i=0; i<n; i++){
        string a; cin >> a;
        str.push_back(a);
    }

    vector<int> ans;
    map <int, int > Ans;
    for(int i=0; i<n; i++){
        int a = 0;
        for(int j=0; j<n; j++){
            if(str[i][j] ==  'o'){
                a++;
            }
        }
        ans.push_back(a);
        Ans[i+1] = a;
    }


}