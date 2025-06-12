// 

// Move All Zeroes to End
// https://www.geeksforgeeks.org/batch/gfg-160-problems/track/arrays-gfg-160/problem/move-all-zeroes-to-end-of-array0751



//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    void swap(int *a, int *b){
        int temp;
        temp = *a;
        *a = *b;
        *b = temp;
    }

    void pushZerosToEnd(vector<int>& arr) {
        // code here
        int n = arr.size();
        int ptr_1 = -1;
        for(int i=0; i<(n-1); i++){
            if((arr[i] == 0) && (arr[i+1] != 0)){
                if(ptr_1 == -1){
                    swap(&arr[i], &arr[i+1]);
                }
                else{
                    swap(&arr[ptr_1], &arr[i+1]);
                    ptr_1++;
                }
            }
            else if((arr[i] == 0) && (arr[i+1] == 0)){
                if(ptr_1 == -1){
                    ptr_1 == i;
                }
            }
        }
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
        int n = arr.size();
        ob.pushZerosToEnd(arr);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends