// Wrong.

// C++ Operators | Set 1 (Arithmetic)
// https://www.geeksforgeeks.org/problems/c-operators4602/1?page=1&category=CPP&difficulty=School&sortBy=submissions



















//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> cppOperators(int A, int B) {
        int a[4];
        a[0] = A + B;
        a[1] = A * B;
        if(A > B){
            a[2] = A - B;
            a[3] = A / B;
        }
        else{
            a[2] = B - A;
            a[3] = B / A;
        }

        return a;
        // code here
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int A, B;
        cin >> A >> B;
        Solution ob;
        vector<int> ans = ob.cppOperators(A, B);
        for (int u : ans) cout << u << "\n";
    }
}
// } Driver Code Ends