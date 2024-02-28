// Good Question

// https://www.geeksforgeeks.org/problems/power-of-2-1587115620/1?page=1&difficulty=Basic&sortBy=submissions


















//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    // Function to check if given number n is a power of two.
    bool isPowerofTwo(long long n){
        if((n == 1)){
            return true;
        }
        else if(n == 0){
            return false;
        }
        while(n > 1){
            if(n%2 == 0){
                n /= 2;
            }
            else{
                return false;
            }
        }
        if(n == 1){
            return true;
        }
        // Your code here    
        
    }
};

//{ Driver Code Starts.

// Driver code
int main()
{

    int t;
    cin>>t;//testcases

    for(int i=0;i<t;i++)
    {
        long long n; //input a number n
        cin>>n;

        Solution ob;
         if(ob.isPowerofTwo(n))//Now, if log2 produces an integer not decimal then we are sure raising 2 to this value
             cout<<"YES"<<endl;
         else
            cout<<"NO"<<endl;

    }

    return 0;
}

// } Driver Code Ends