// Correct.

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

    // I/P
    int a, b, c; cin >> a >> b >> c;
    int m; cin >> m;
    vector<int> A, B;
    for(int i=0; i<m; i++){
        int temp1; cin >> temp1;
        string temp2; cin >> temp2;

        if(temp2 == "USB"){
            A.push_back(temp1);
        }
        else{
            B.push_back(temp1);
        }
    }

    // Solution
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    int num = 0, cost = 0;
    if(A.size() >= a){
        for(int i=0; i<a; i++){
            num++;
            cost += A[i];
        }
        A.erase(A.begin(), A.begin()+a);
    }
    else{
        for(int i=0; i < A.size(); i++){
            num++;
            cost += A[i];
        }
        A.erase(A.begin(), A.end());
    }

    if(B.size() >= b){
        for(int i=0; i<b; i++){
            num++;
            cost += B[i];
        }
        B.erase(B.begin(), B.begin()+b);
    }
    else{
        for(int i=0; i < B.size(); i++){
            num++;
            cost += B[i];
        }
        B.erase(B.begin(), B.end());
    }

    A.insert(A.end(), B.begin(), B.end());
    sort(A.begin(), A.end());
    if(A.size() >= c){
        for(int i=0; i<c; i++){
            num++;
            cost += A[i];
        }
        A.erase(A.begin(), A.begin()+c);
    }
    else{
        for(int i=0; i < A.size(); i++){
            num++;
            cost += A[i];
        }
        A.erase(A.begin(), A.end());
    }

    // O/P
    cout << num << " " << cost << endl;
}