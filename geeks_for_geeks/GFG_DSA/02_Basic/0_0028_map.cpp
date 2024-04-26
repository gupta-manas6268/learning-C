// Wrong.

// Sum of f(a[i], a[j]) over all pairs in an array of n integers
// https://www.geeksforgeeks.org/problems/sum-of-fai-aj-over-all-pairs-in-an-array-of-n-integers4057/1?page=1&category=Map&difficulty=Basic&status=unsolved&sortBy=submissions


















//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// Function to calculate the sum
long long sum(int a[], int n);


// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
    {
       int n;
       cin>>n;
       int arr[n];
       for(int i=0;i<n;i++)
       {
           cin>>arr[i];
       }
       	cout << sum(arr, n)<<endl; 
    }

	return 0;
}

// } Driver Code Ends


long long sum(int a[], int n)
{
    // Complete the function
    unordered_map <int, int> m;
    for(int i=0; i < n-1; i++){
        for(int j=i+1; j<n; j++){
            m[a[i]] = a[j];
        }
    }

    long long int ans = 0;
    for(auto &Pair: m){
        int condition = (Pair.second - Pair.first);
        if(condition < 0){
            condition *= -1;
        }

        if(condition > 1){
            ans += (Pair.second - Pair.first);
        }
    }

    return ans;
}
