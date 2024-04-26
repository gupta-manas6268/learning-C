// Wrong.

// Elements in the Range
// https://www.geeksforgeeks.org/problems/elements-in-the-range2834/1?page=1&category=Searching&difficulty=Basic&sortBy=submissions






//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	
	public:
	bool check_elements(int arr[], int n, int A, int B)
	{
        // vector<int> vec;
        // for(int i=0; i<n; i++){
        //     vec.push_back(arr[i]);
        // }
        // vec.sort(vec.begin(), vec.end()); // This line gives error.

        int range[B-A+1] = {0};
        for(int i=0; i<n; i++){
            if((arr[i] >= A) && (arr[i] <= B)){
                int index = i - A;
                range[index]++;
            }
        }
        bool ans = true;
        for(int i=0; i < B-A+1; i++){
            if(range[i] == 0){
                ans = false;
                break;
            }
        }
        return ans;
		// Your code goes here
	}


		 

};
	

//{ Driver Code Starts.


int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n,A,B;
		cin>>n>>A>>B;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];

        

        Solution ob;
        if (ob.check_elements(a, n, A, B))
			cout << "Yes";
		else
			cout << "No";
	    
        
	    cout << "\n";
	     
    }
    return 0;
}







// } Driver Code Ends