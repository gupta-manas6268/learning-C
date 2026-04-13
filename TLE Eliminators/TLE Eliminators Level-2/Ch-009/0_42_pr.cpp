// Correct.
// (See Line-70 to 91 => It uses Difference Array.)

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

    // I/P
    int n, q; cin >> n >> q;
    vector<int> a(n);
    for(int i=0; i < n; i++){ cin >> a[i];}
    vector<pair<int,int>> Edges(q);
    for(int i=0; i < q; i++){
        cin >> Edges[i].first >> Edges[i].second;
    }

    // Solution
    vector<int> Freq(n+1, 0);

    // Difference Array
    for(int i=0; i < q; i++){ // O(q)
        int left = (Edges[i].first - 1);
        int right = (Edges[i].second - 1);

        Freq[left]++;
        if((right) < n){
            Freq[right+1]--;
        }
    }

    vector<int> Pref_Freq(n, 0);
    for(int i=0; i < n; i++){ // O(n)
        if(i == 0){
            Pref_Freq[i] = Freq[i];
        }
        if(i > 0){
            Pref_Freq[i] = (Pref_Freq[i-1] + Freq[i]);
        }
    }
    sort(a.begin(), a.end()); // O(n * log(n))
    sort(Pref_Freq.begin(), Pref_Freq.end()); // O(n * log(n))
    
    // O/P
    int Sum = 0;
    for(int i = 0; i < n; i++){
        Sum += (a[i] * Pref_Freq[i]);
    }
    cout << Sum << endl;
    // O(q + (n * log(n)))
}