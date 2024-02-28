// Wrong
// https://www.geeksforgeeks.org/problems/sum-of-series2811/1?page=1&difficulty=School&sortBy=submissions

// This code gives error because of line-13.




//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
// } Driver Code Ends

#define int long long // This line gives error.

class Solution {
  public:
    long long seriesSum(int n) {
        long long ans = (n * (n+1))/ 2;
        return ans;
        // code here
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
        long long res = obj.seriesSum(n);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends