// Wrong.

// Array Subset of another array
// https://www.geeksforgeeks.org/problems/array-subset-of-another-array2317/1?page=1&category=Searching&difficulty=Basic&sortBy=submissions







//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string isSubset(int a1[], int a2[], int n, int m) ;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        int a1[n], a2[m];

        for (int i = 0; i < n; i++) {
            cin >> a1[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> a2[i];
        }

        cout << isSubset(a1, a2, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends


string isSubset(int a1[], int a2[], int n, int m) {
    vector<int> vec1(a1, a1 + n);
    // for(int i=0; i<n; i++){
    //     vec1.push_back(a1[i]);
    // }
    sort(vec1.begin(), vec1.end());

    vector<int> vec2(a2, a2 + m);
    sort(vec2.begin(), vec2.end());

    int j = 0;
    bool ans = true;
    for(int i=0; i<n; i++){
        if(vec2[j] == vec1[i]){
            j++;
        }
    }
    if(j < m){ 
        return "No";
    }
    else if(j == m){
        return "Yes";
    }
}