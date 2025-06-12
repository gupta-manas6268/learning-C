t
// Giving me Wrong answer in VScode.

// https://www.geeksforgeeks.org/problems/union-of-two-arrays3538/1?page=1&difficulty=Basic&sortBy=submissions




//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template in C++

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        sort(a, a + n);
        sort(b, b + m);

        int ans = 0;
        int index = 0;

        for(int i=0; i<n; i++){
            for(int j=index; j<m; j++){
                if(a[i] == b[j]){
                    ans++;
                    index = j;

                    break;
                }
                else if(a[i] < b[j]){
                    break;
                }
                else{
                    ans++;
                    break;
                }
            }
        }

        return ans;
        //code here
    }
};

//{ Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	   
	    for(int i = 0;i<n;i++)
	       cin >> a[i];
	       
	    for(int i = 0;i<m;i++)
	       cin >> b[i];
	    Solution ob;
	    cout << ob.doUnion(a, n, b, m) << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends