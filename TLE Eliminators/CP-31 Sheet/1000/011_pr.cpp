// Correct.

// B. Basketball Together
// https://codeforces.com/problemset/problem/1725/B































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

    int N, D; cin >> N >> D;
    vector<int> P;
    for(int i=0; i<N; i++){
        int temp; cin >> temp;
        P.push_back(temp);
    }

    sort(P.begin(), P.end());
    int ans = 0;
    bool Erase = true;
    while(P.size() != 0){
        int num = P.size();
        int temp = (D / P[num-1]);
        temp++;

        if(temp <= P.size()){ ans++;}
        else{ Erase = false; break;}
        P.erase(P.end() -1);
        if(((temp-1) > 0) && (Erase == true)){
            P.erase(P.begin(), P.begin()+temp-1);
        }
    }

    cout << ans << endl;
}