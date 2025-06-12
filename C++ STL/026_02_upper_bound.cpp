#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int n; cin >> n;

    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a, a+n);
    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }
    cout << endl;

    // int *ptr = lower_bound(a, a+n, 5);
    // int *ptr = lower_bound(a, a+n,6);
    int *ptr = upper_bound(a, a+n,26);  // TC = O(log(n)).

    if(ptr == (a+n)){
        cout << "Not found" << endl;
    }
    else{
        cout << (*ptr) << endl;
    }

    // I/P:
    // 6
    // 4  5  5  25  7  8

    return 0;
}