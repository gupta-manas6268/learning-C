// Correct.

// Compete the skills
// https://www.geeksforgeeks.org/problems/compete-the-skills5807/1?page=1&category=Arrays&difficulty=School&sortBy=submissions


















//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    void scores(long long a[], long long b[], int &ca, int &cb)
    {
        ca = 0; cb = 0;
        for(int i=0; i<3; i++){
            if(a[i] > b[i]){ ca++;}
            else if(a[i] < b[i]){ cb++;}
        }
        // Your code goes here   
    }
};

//{ Driver Code Starts.
int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        long long int a[5], b[5], i=0;
        int ca=0, cb=0;
        for(i=0; i<3; i++)
            cin>>a[i];
    
        for(i=0; i<3; i++)
            cin>>b[i];
        Solution ob;
        ob.scores(a, b, ca, cb);
        
        cout<<ca<<" "<<cb<<endl;
    }
    return 0 ;
}
// } Driver Code Ends