// Correct
// Binary number to decimal number
// https://www.geeksforgeeks.org/problems/binary-number-to-decimal-number3525/1?page=1&category=CPP&difficulty=Basic&sortBy=submissions





//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

int power(int a, int b){
    int ans = 1;
    for(int i=1; i <= b; i++){
        ans *= a;
    }

    return ans;
}

class Solution {
  public:
    int binary_to_decimal(string str) {
        int i = 0;
        int len = 0;
        int arr[20];
        int ans = 0;

        while(str[i] != '\0'){
            arr[i] = (str[i] - 48);
            i++;
            len++;
        }

        int j = 0;
        for(int i = len-1; i>=0; i--){
            ans += (arr[i] * power(2, j));
            j++;
        }

        return ans;
        // Code here.
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string str;
        cin >> str;
        Solution ob;
        int ans = ob.binary_to_decimal(str);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends