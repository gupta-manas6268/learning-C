// Correct.

// Second Largest
// https://www.geeksforgeeks.org/batch/gfg-160-problems/track/arrays-gfg-160/problem/second-largest3735




































//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        // Code Here

        int n = arr.size();
        int max_1 = -1, max_2 = -1;
        for(int i=0; i<n; i++){
            if(i == 0){
                max_1 = arr[i];
            }
            else{
                if(arr[i] > max_1){
                    max_2 = max_1;
                    max_1 = arr[i];
                }
                else if((arr[i] > max_2) && (arr[i] != max_1)){
                    max_2 = arr[i];
                }
            }
        }

        return max_2;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.getSecondLargest(arr);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends