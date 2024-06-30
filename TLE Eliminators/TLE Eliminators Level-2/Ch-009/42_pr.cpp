// Wrong (TLE).

// C. Little Girl and Maximum Sum
// https://codeforces.com/contest/276/problem/C





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

    int n, q; cin >> n >> q;
    vector<int> a;
    for(int i=0; i<n; i++){
        int temp; cin >> temp;
        a.push_back(temp);
    }

    int l[q], r[q];
    for(int i=0; i<q; i++){
        cin >> l[i] >> r[i];
    }

    sort(a.begin(), a.end(), greater<int>());

    int times[n] = {0};
    for(int i=0; i<q; i++){
        int left = (l[i]-1), right = (r[i]-1);
        for(int i = left; i <= right; i++){
            times[i]++;
        }
    }

    vector<int> Times;
    for(int i=0; i<n; i++){
        Times.push_back(times[i]);
    }
    sort(Times.begin(), Times.end(), greater<int>());

    int Sum = 0;
    for(int i=0; i<n; i++){
        if(Times[i] == 0){ break;}
        Sum += (a[i] * Times[i]);
    }

    cout << Sum << endl;
}