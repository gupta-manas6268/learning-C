// Correct.
// C++ Basic Data types
// https://www.geeksforgeeks.org/problems/c-basic-data-types3128/1?page=1&category=CPP&difficulty=Basic&sortBy=submissions


//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User functiom template for C++

class Solution {
  public:
    int BasicDataType(string s) {
        int i = 0;
        int len = 0;
        int arr[10];
        int ans = 0;

        int dot = 0;
        int integer = 0, Float = 0, Double = 0;
        int decimal = 0;

        while(s[i] != '\0'){
            if((s[i] < 46) || (s[i] == 47) || (s[i] > 57)){
                return 1;
                break;
            }
            else if((s[i] >= 48) && (s[i] <= 57)){
                i++;
                if(integer == 0){ integer++;}
                if(Float == 1){ decimal++;}
            }
            else{
                i++;
                if(Float == 0){ Float++;}
                else{ return 1; break;}
            }
        }

        if((integer == 1) && (Float == 0)){ return 4;}
        else if((Float == 1) && (decimal < 6)){ return 4;}
        else{ return 8;}
        // code here
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;

        Solution ob;
        cout << ob.BasicDataType(S) << endl;
    }
}
// } Driver Code Ends