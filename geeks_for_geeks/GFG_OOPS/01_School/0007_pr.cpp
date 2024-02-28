// Wrong
// Not Solved
// https://www.geeksforgeeks.org/problems/palindromic-array-1587115620/1?page=1&difficulty=School&sortBy=submissions


















//{ Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


// } Driver Code Ends
/*Complete the function below*/

int numToArray(int n){

    while(n > 0){

    }
}
class Solution {
public:
    int PalinArray(int a[], int n)
    {


        for(int i=0; i < n/2; i++){
            if(a[i] != a[n-i-1]){
                return 0;
            }
        }
        return 1;
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
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}
// } Driver Code Ends