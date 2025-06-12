// Wrong.
// C++ Nega Bit
// https://www.geeksforgeeks.org/problems/c-nega-bit2019/1?page=1&category=CPP&difficulty=Basic&sortBy=submissions


//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
int power(int a, int b){
    int ans = 1;
    for(int i=1; i<=b; i++){
        ans *= a;
    }
    return ans;
}
class Solution {
  public:
    int negaBit(int F , int S) {
        int arr1[30], arr2[30];
        int i=0, len1=0;
        int j=0, len2=0;
    
        while(F > 0){
            arr1[i] = (F % 2);
            F /= 2;
            i++; len1++;
        }
        while(S > 0){
            arr2[j] = (S % 2);
            S /= 2;
            j++; len2++;
        }
        if(len1 > len2){
            for(int i=len2; i < len1; i++){
                arr2[i] = 0;
            }
        }

        for(int j=0; j<len1; j++){
            if(arr1[j] == 1){
                if(arr2[j] == 0){
                    arr2[j] = 1;
                }
                else{
                    arr2[j] = 0;
                }
            }
        }

        int Ans = 0;
        for(int i=0; i<len2; i++){
            Ans += (arr2[i] * power(2, i));
        }

        return Ans;
        // code here
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int F,S;

        cin>>F>>S;

        Solution ob;
        cout << ob.negaBit(F,S) << endl;
    }
    return 0;
}
// } Driver Code Ends