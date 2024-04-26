// Correct
// https://www.geeksforgeeks.org/problems/palindrome0746/1?page=1&difficulty=School&sortBy=submissions


//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
	public:
		string is_palindrome(int n)
		{
            bool ans = true;

            int arr[12];
            int len = 0;

            while(n > 0){
                arr[len] = (n % 10);
                n /= 10;
                len++;
            }
            for(int i=0; i < (len/2); i++){
                if(arr[i] != arr[len-i-1]){
                    ans = false;
                }
            }

            if(ans == true){ return "Yes";}
            else{ return "No";}

		    // Code here.
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	Solution ob;
    	string ans = ob.is_palindrome(n);
    	cout << ans <<"\n";
    }
	return 0;
}

// } Driver Code Ends