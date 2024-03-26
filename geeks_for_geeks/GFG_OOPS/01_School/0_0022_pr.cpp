// Wrong.

// Smaller and Larger
// https://www.geeksforgeeks.org/problems/smaller-and-larger4005/1?page=1&category=Arrays&difficulty=School&sortBy=submissions











//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	vector<int> getMoreAndLess(int arr[], int n, int x) {
        vector<int> vec = {0, 0};
        int left = 0, right = n-1;
        int mid = (left + right)/2;
        int target;

        if(arr[mid] < x){
            left = mid + 1;
        }
        else if(arr[mid] > x){
            right = mid - 1;
        }
        else{

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
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMoreAndLess(arr, n, x);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}

// } Driver Code Ends