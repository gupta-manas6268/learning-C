// Correct
// https://www.geeksforgeeks.org/problems/find-n-th-term-of-series-1-3-6-10-15-215506/1?page=1&difficulty=School&sortBy=submissions

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long findNthTerm(int N) {
        long long firstTerm = 1;
        long long lastTerm = N;
        long long ans = (lastTerm * (firstTerm + lastTerm))/ 2;

        return ans;
        // code here
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.findNthTerm(N) << endl;
    }
    return 0;
}
// } Driver Code Ends