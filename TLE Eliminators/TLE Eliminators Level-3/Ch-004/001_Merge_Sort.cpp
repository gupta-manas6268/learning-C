// Merge Sorting of two sorted arrays using 2-pointers.

// See Page-4 to 7 of slide.


#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

vector<int> two_pointers(vector<int> a, vector<int> b){
    int n = a.size();
    int m = b.size();
    vector<int> c(n+m);

    int i = 0, j = 0, k = 0;
    while((i < n) && (j < m)){
        if(a[i] < b[j]){
            c[k] = a[i];
            i++; k++;
        }
        else{
            c[k] = b[j];
            j++; k++;
        }
    }
    while(i < n){
        c[k] = a[i];
        k++; i++;
    }
    while(j < m){
        c[k] = a[j];
        k++; j++;
    }

    return c;
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    int n, m; cin >> n >> m;
    vector<int> a(n), b(m);
    vector<int> c(n + m);

    for(int i=0; i<n; i++){
        int temp; cin >> temp;
        a.push_back(temp);
    }
    for(int i=0; i<m; i++){
        int temp; cin >> temp;
        b.push_back(temp);
    }

    c = two_pointers(a, b);
    for(int i=0; i < (n+m); i++){
        cout << c[i] << " ";
    }
    cout << endl;

    // TC = O(n + m).
}