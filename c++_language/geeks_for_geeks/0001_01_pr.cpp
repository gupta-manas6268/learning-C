// https://practice.geeksforgeeks.org/problems/c-arrays-sum-of-array-set-14805/1

// Not Solved


















//{ Driver Code Starts
#include <iostream>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int getSum(int *a, int n) {
        // Your code goes here

        getSum(a, 0) = 0;

        return a[n-1] + getSum(a, n-1);
    }   
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution ob;
        cout << ob.getSum(a, n) << endl;
    }

    return 0;
}
// } Driver Code Ends