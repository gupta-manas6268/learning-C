// Correct
// https://www.geeksforgeeks.org/problems/sum-of-digits1742/1?page=1&difficulty=School&sortBy=submissions



















//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int sumOfDigits(int N){
        int ans = 0;

        while(N > 0){
            ans += N % 10;
            N /= 10;
        }
        return ans;
        //code here
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.sumOfDigits(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends