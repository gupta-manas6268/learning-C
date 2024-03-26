// Correct.
// For Loop- primeCheck
// https://www.geeksforgeeks.org/problems/for-loop-primechecl/1?page=1&category=CPP&difficulty=Easy&sortBy=submissions


//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string isPrime(int n) {
        bool ans = true;
        // Code here
        
        if(n == 1){ ans = false;}

        for (int i = 2; i <= sqrt(n); i++) {
            if(n == 2){ ans = true; break;}
            else if((n % i) == 0){ ans = false; break;}
            // Write your logic here
            // Return "Yes" if n is prime, else return "No"
            /*n is prime only if it is not divisible by any i.
            We will not reach till n and 1 is already discarded*/

            // return  Yes if n is a prime number ,else return No
        }
        if(ans == true){
            return "Yes";
        }
        else if(ans == false){
            return "No";
        }
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int n;
        scanf("%d",&n);
        
        Solution obj;
        string res = obj.isPrime(n);
        
        cout<<res<<"\n";
        
    }
}

// } Driver Code Ends