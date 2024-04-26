// Correct.
// G.F Series
// https://www.geeksforgeeks.org/problems/gf-series3535/1?page=1&category=Recursion&difficulty=Basic&sortBy=submissions


















//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
long long int power(long long int a, long long int b){
    long long int ans = 1;
    for(int i=1; i <= b; i++){
        ans *= a;
    }
    return ans;
}

class Solution
{
public:
    void gfSeries(int N)
    {
        long long int T[N+1];
        T[1] = 0, T[2] = 1;
        cout << T[1] << " " << T[2] << " ";
        if(N > 2){
            for(int i=3; i<=N; i++){
                T[i] = power(T[i-2], 2) - T[i-1];
                cout << T[i] << " ";
            }
        }
        cout << endl;
        // Write Your Code here
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        ob.gfSeries(N);
    }
    return 0;
}
// } Driver Code Ends