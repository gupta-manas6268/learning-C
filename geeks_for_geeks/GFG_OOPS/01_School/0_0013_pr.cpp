// Wrong
// Find Index
// https://www.geeksforgeeks.org/problems/find-index4752/1?page=1&difficulty=School&sortBy=submissions


//{ Driver Code Starts
#include <iostream>
#include <bits/stdc++.h> 
#include <vector> 
using namespace std; 

// } Driver Code Ends
class Solution
{
  public:
    vector<int> findIndex(int arr[], int n, int key)
    {
        int ans[2];
        int j = 0;

        for(int i=0; i<n; i++){
            if((arr[i] == key) && (j == 0)){
                ans[0] = i;
            }
            else if(arr[i] == key){
                ans[1] = i;
            }
        }

        return {ans[0], ans[1]};
        //code here.
    }
  
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        vector<int> res;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int key;
        cin>>key;
        Solution ob;
        res=ob.findIndex(arr, n, key);
        for (int i = 0; i < res.size(); i++) 
        cout << res[i] << " ";
        cout << "\n";
    }
    
    return 0;
}

// } Driver Code Ends