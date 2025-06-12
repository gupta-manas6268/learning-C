// Correct.

// Print the left element
// https://www.geeksforgeeks.org/problems/print-the-left-element2009/1?page=1&category=Arrays&difficulty=School&sortBy=submissions
















//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int leftElement(int a[], int n) {
        vector<int> vec(a, a + n); // Populate the vector directly 
                                   //  from array a. 
        
        sort(vec.begin(), vec.end());

        int ans;
        if((n % 2) != 0){
            int index = (n/2);
            ans = vec[index];
        }
        else{
            int index = ((n/2) - 1);
            ans = vec[index];
        }

        return ans;
        // Your code goes here   
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++) cin >> a[i];
        Solution ob;
        cout << ob.leftElement(a, n) << endl;
    }
}

// } Driver Code Ends