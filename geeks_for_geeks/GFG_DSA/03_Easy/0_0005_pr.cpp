// Wrong.

// Recursive sequence
// https://www.geeksforgeeks.org/problems/recursive-sequence1611/1?page=1&category=Recursion&difficulty=Easy&sortBy=submissions


















//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
long long int power(int a, int b){
    int ans = 1;
    for(int i=1; i <= b; i++){
        ans *= a;
    }
    return ans;
}
long long int f(int n){
    long long int sum = (n * (n-1))/2;
    long long int ans = 1;
    for(int i=1; i <= n; i++){
        ans *= (sum + i);
    }
    return ans;
}
class Solution{
public:
    long long sequence(int n){
        long long int sum = 0;
        for(int i=1; i <= n; i++){
            sum += f(i);
        }
        int ans = (sum % (power(10, 9) + 7));
        return ans;
        // code here
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.sequence(N)<<endl;
    }
    return 0;
}
// } Driver Code Ends