// Wrong.

// Pair Sum Existence
// https://www.geeksforgeeks.org/problems/pair-sum-existence/1?page=1&category=set&difficulty=Easy&status=unsolved&sortBy=submissions









//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

int sumExists(int arr[], int n, int sum);
    
int main() {
	
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    
	    int arr[n];  //array of size n
            
        for(int i = 0; i < n; i++)
            cin>>arr[i]; //Input the array
             
        int sum; 
        cin>>sum;
          
        cout<< sumExists(arr, n, sum) <<endl;    
            
	}
}
// } Driver Code Ends


//User function Template for C++

int sumExists(int arr[], int n, int sum){
    
    
    //code here
    multiset <int> m;
    for(int i=0; i<n; i++){
        m.insert(arr[i]);
    }
    
    bool ans = false;
    for(auto it=m.begin(); it!=m.end(); it++){
        int a = (sum - *it);
        auto it_2 = m.find(a);
        if(it_2 != m.end()){
            ans = true; break;
        }
    }

    int final_Ans;
    if(ans == true){ final_Ans = 1;}
    else{ final_Ans = 0;}

    return final_Ans;
}