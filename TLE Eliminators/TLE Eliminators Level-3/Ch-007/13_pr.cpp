// 

// B. USB vs. PS/2
// https://codeforces.com/contest/762/problem/B



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

    int a, b, c; cin >> a >> b >> c;
    int m; cin >> m;
    vector<pair<int,int>> vec;
    for(int i=0; i<m; i++){
        int temp1; cin >> temp1;
        string temp2; cin >> temp2;

        if(temp2 == "USB"){
            vec.push_back({temp1,0});
        }
        else{
            vec.push_back({temp1,1});
        }
    }
    sort(vec.begin(), vec.end());

    int num = 0, cost = 0;
    for(int i=0; i<c; i++){
        num++; 
        cost += vec[i].first;
        vec.erase(vec.begin() + i);
    }

    vector<int> A, B;
    for(int i=0; i < (m-c); i++){
        if(vec[i].second == 0){
            A.push_back(vec[i].first);
        }
        else{
            B.push_back(vec[i].first);
        }
    }
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    int A_Size = A.size();
    A_Size = min(a, A_Size);
    for(int i=0; i < A_Size; i++){
        num++;
        cost += A[i];
    }

    int B_Size = B.size();
    B_Size = min(b, B_Size);
    for(int i=0; i < B_Size; i++){
        num++;
        cost += B[i];
    }

    cout << num << " " << cost << endl;
}