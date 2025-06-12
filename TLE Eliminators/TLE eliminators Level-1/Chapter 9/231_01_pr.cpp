// Wrong.

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
    vector<int> arr(n);
    for(int i=0; i<n; i++){ cin >> arr[i];}

    int q; cin >> q;
    vector<int> query(q);
    for(int i=0; i<q; i++){ cin >> query[i];}

    for(int i=0; i<q; i++){
        vector<int> :: iterator lower;
        lower = lower_bound(arr.begin(), arr.end(), query[i]);

        if()
    }

    return 0;
}