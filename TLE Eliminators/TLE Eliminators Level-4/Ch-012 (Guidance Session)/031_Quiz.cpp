// 
// (This is Mentor's code. Complete this code from Slide-03, Page-08.)

// Problem E: Expected Rain
// https://drive.google.com/drive/u/1/folders/1XiOQybfPXgWI_2CzQ1O74rrvwpW8GqtL
//  (↑ in this link, go to Statements.pdf, & then to Problem-E)



#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define all(x) x.begin(), x.end() 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void Solve(){
    int n; cin >> n;

    vector<int> h(n);
    for(auto &x : h){ cin >> x;}

    int ans = 0;
    sort(h.begin(), h.end());
    int max = h[n-1];
    int sum = accumulate(h.begin(), h.end(), 0LL);
    sum %= MOD;

    for(int i=0; i < n; i++){
        int prob = inv(n - i); // prob => probabitlity
        int ex
    }
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    
}