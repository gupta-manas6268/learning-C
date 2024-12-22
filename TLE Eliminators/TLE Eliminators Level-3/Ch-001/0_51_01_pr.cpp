// Wrong.

// C. A Tale of Two Lands
// https://codeforces.com/problemset/problem/1166/C




































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

    int n; cin >> n;
    vector<int> neg, pos;
    int ans = 0;

    for(int i=0; i<n; i++){
        int temp; cin >> temp;

        if(temp < 0){
            neg.push_back(-temp);
        }
        else if(temp == 0){
            ans += (n-1);
        }
        else{
            pos.push_back(temp);
        }
    }
    sort(neg.begin(), neg.end());
    sort(pos.begin(), pos.end());
    int size1 = pos.size();
    int size2 = neg.size();

    for(int i=0; i<size1; i++){
        int a = (2 * pos[i]), b = (pos[i]/2);
        if(pos[i]%2 != 0){ b++;}

        int index = upper_bound(pos.begin(), pos.end(), a) - pos.begin();
        ans += (index-i-1);

        int index11 = upper_bound(neg.begin(), neg.end(), a) - neg.begin();
        int index12 = lower_bound(neg.begin(), neg.end(), a) - neg.begin();
        int index1, index2; 
        if(index11 != index12){
            index1 = index12;
        }

        int index21 = upper_bound(neg.begin(), neg.end(), b) - neg.begin();
        int index22 = lower_bound(neg.begin(), neg.end(), b) - neg.begin();
        ans += (index12 - index22);
    }

    cout << ans << endl;
}