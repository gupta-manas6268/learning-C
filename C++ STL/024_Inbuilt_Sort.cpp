// TC of inbuilt sort = O(n * log(n)).

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    cout << endl;

    sort(a+2, a+n);
    // vector<int> a(n);
    // sort(a.begin() + 2, a.end());  // for vectors, sorting algorithm.
    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }
    cout << endl;

    // I/P:
    // 6
    // 4  5  2  25  7  8

    // O/P:
    // 4  5  2  7  8  25

    return 0;
}