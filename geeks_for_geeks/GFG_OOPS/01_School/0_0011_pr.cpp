// Correct, but 'See line-41 and also understand 'auto' variable.
// https://www.geeksforgeeks.org/problems/sum-of-array2326/1?page=1&difficulty=School&sortBy=submissions



//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	// function to return sum of elements
	// in an array of size n
	int sum(int arr[], int n) {
        int ans = 0;

        for(int i=0; i<n; i++){
            ans += arr[i];
        }
        return ans;
	    // code here
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.sum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends