// Wrong.

// Searching in an array where adjacent differ by at most k
// https://www.geeksforgeeks.org/problems/searching-in-an-array-where-adjacent-differ-by-at-most-k0456/1?page=1&category=CPP&difficulty=Easy&sortBy=submissions


//{ Driver Code Starts
// C++ program to search an element in an array
// where difference between all elements is 1
#include<bits/stdc++.h>
using namespace std;

// x is the element to be searched in arr[0..n-1]
// such that all elements differ by at-most k.
int search(int arr[], int n, int x, int k);


// Driver program to test above function
int main()
{
	int t,n,k,x;
	cin>>t;
	while(t--)
    {

        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cin>>x;
        cout<<search(arr, n, x, k)<<endl;

    }
return 0;
}


// } Driver Code Ends


// x is the element to be searched in arr[0..n-1]
// such that all elements differ by at-most k.
int search(int arr[], int n, int x, int k)
{
    int i = 0;

    while(i <= n){
        float num = (x - arr[i])/k;

        if(i >= n){
            return -1;
        }
        else if(num == 0){
            return i;
        }
        else if((num - (num/ 1)) != 0){
            int garbage = num + 1;
            cout << "garbage1 = " << garbage << endl; // Comment this line in the main code.
            i += garbage;
        }
        else{
            int garbage = num;
            cout << "garbage2 = " << garbage << endl; // Comment this line in the main code.
            i += num;
        }
    }
    // Complete the function	
}    	