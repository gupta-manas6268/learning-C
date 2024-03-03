// Correct
// Leap Year
// https://www.geeksforgeeks.org/problems/leap-year0943/1?page=1&category=Misc&difficulty=Basic&sortBy=submissions


//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int isLeap(int N){
        if((N%100 != 0) && (N%4 == 0)){
            return 1;
        }
        else if(N%400 == 0){
            return 1;
        }
        else{
            return 0;
        }
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
        cout << ob.isLeap(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends