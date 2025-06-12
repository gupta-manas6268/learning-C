// Wrong.
// See line-31 and 32 & OUTPUT of the code carefully.

// Print the left element
// https://www.geeksforgeeks.org/problems/print-the-left-element2009/1?page=1&category=Arrays&difficulty=School&sortBy=submissions

















//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int leftElement(int a[], int n) {
        vector<int> vec; 
        // Vectors are dynamic arrays, so you can't assign values to 
        //  indices that are out of bounds.
        // That's why this code is not giving me OUTPUT.
        for(int i=0; i<n; i++){
            vec[i] = a[i];
        }
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