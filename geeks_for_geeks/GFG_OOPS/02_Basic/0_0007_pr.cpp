// Multiple of N closest to X
// https://www.geeksforgeeks.org/problems/multiple-of-x-closest-to-n1719/1?page=1&category=Misc&difficulty=Basic&sortBy=submissions



















//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
	public:
   	int closestNo(int x, int n){
        int remainder = (x % n);
        int quotient = (x / n);

        int ans1 = (n * (quotient));
        int ans2 = (n * (quotient + 1));

        if(x == 0){
            return ans2;
        }
        else if(quotient == 0){
            return ans2;
        }
        else if(remainder == 0){
            return x;
        }
        else{
            int difference1 = (x - ans1);
            int difference2 = (ans2 - x);

            if(difference1 < difference2){
                return ans1;
            }
            else{
                return ans2;
            }
        }
   	    // Code here
   	}    
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int x, n;
		cin >> x >> n;
		Solution ob;
		int ans = ob.closestNo(x, n);
		cout << ans <<"\n";
	}  
	return 0;
}
// } Driver Code Ends