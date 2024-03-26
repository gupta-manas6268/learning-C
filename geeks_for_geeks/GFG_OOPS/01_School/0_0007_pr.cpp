// Correct.

// Palindromic Array
// https://www.geeksforgeeks.org/problems/palindromic-array-1587115620/1?page=1&difficulty=School&sortBy=submissions


















//{ Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


// } Driver Code Ends
/*Complete the function below*/

int numToArray(int n){
	int arr[15];
	int i = 0;
	int len = 0;
    while(n > 0){
		arr[i] = (n % 10);
		n /= 10;
		i++;
		len++;
    }

	int ans = 1;
	for(int i=0; i < (len/2); i++){
		if(arr[i] != arr[len-i-1]){
			ans = 0;
			break;
		}
	}

	return ans;
}
class Solution {
public:
    int PalinArray(int a[], int n)
    {
		int ans = 1;
		for(int i=0; i<n; i++){
			if(numToArray(a[i]) == 0){
				ans = 0;
				break;
			}
		}
		return ans;
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