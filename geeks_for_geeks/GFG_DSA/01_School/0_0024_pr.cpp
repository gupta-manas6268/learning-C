// Correct.
// See line 36, 39 and 40 carefully.

// Value equal to index value
// https://www.geeksforgeeks.org/problems/value-equal-to-index-value1330/1?page=1&category=Searching&difficulty=School&sortBy=submissions

















//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:

	vector<int> valueEqualToIndex(int arr[], int n) {
        vector<int> vec;
        // int j = 0;
        for(int i=0; i<n; i++){
            if(arr[i] == i+1){
                // vec[j] = i+1; // These two lines will not work
                // j++;          //  properly.
                vec.push_back(i+1);
            }
        }
        return vec;
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
        auto ans = ob.valueEqualToIndex(arr, n);
        if (ans.empty()) {
            cout << "Not Found";
        } else {
            for (int x: ans) {
                cout << x << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends