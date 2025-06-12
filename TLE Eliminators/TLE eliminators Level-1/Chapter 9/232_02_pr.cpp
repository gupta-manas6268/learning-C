// Correct.

// Lower Bound-STL
// https://www.hackerrank.com/challenges/cpp-lower-bound/problem?isFullScreen=true


















#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n; cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){ cin >> v[i];}

    int q; cin >> q;
    for(int i=0; i<q; i++){
        int x; cin >> x;

        int ans = lower_bound(v.begin(), v.end(), x) - v.begin();
        if((ans < n) && (v[ans] == x)){
            cout << "Yes ";
        }
        else{
            cout << "No ";
        }

        ans++;
        cout << ans << endl;
    }

    return 0;
}