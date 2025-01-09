// Correct.
// I write this code with the help of ChatGPT.

// C. Number of Equal
// https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/C



































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
    int n, m; cin >> n >> m;
    vector<int> a, b;
    for(int i=0; i<n; i++){
        int temp; cin >> temp;
        a.push_back(temp);
    }
    for(int i=0; i<m; i++){
        int temp; cin >> temp;
        b.push_back(temp);
    }

    // O/P
    int i = 0, j = 0;
    int ans = 0;
    int first = 0, second = 0;
    while(i < n){
        first++;
        if(((i+1) < n) && (a[i] == a[i+1])){
            i++;
            continue;
        }

        while((j < m) && (b[j] < a[i])){
            j++;
        }
        while((j < m) && (b[j] == a[i])){
            second++; j++;
        }
        ans += (first * second);
        first = 0; second = 0;
        i++;
    }

    cout << ans << endl;
}