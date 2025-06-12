// Correct.
// Print 1 to n without using loops
// https://www.geeksforgeeks.org/problems/print-1-to-n-without-using-loops3621/1?page=1&category=Recursion&difficulty=School&sortBy=submissions



//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
int print (int a, int b){
    cout << a << " ";
    if(a != b){
        print(a+1, b);
    }
}
class Solution
{
public:
    void printTillN(int N)
    {
        print(1, N);
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
        ob.printTillN(N);
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends