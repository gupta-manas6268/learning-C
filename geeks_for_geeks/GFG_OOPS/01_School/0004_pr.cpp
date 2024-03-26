// Correct
// https://www.geeksforgeeks.org/problems/narcissistic-number4852/1?page=1&difficulty=School&sortBy=submissions



//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends

int power(int a, int b){
    int ans = 1;
    for(int i=1; i <= b; i++){
        ans *= a;
    }

    return ans;
}
class Solution{
public:
    int isNarcissistic(int N){
        int len = 0;
        int n1 = N;
        int n2 = N;

        while(n1 > 0){
            n1 /= 10;
            len++;
        }

        int ans = 0;
        for(int i=0; i<len; i++){
            ans += power((n2 % 10), len);
            n2 /= 10;
        }

        if(ans == N){
            return 1;
        }
        else{
            return 0;
        }
        // code here
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
        cout << ob.isNarcissistic(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends