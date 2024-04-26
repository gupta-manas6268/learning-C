// Correct
// Sum of all sub-sequences of a number
// https://www.geeksforgeeks.org/problems/sum-of-all-sub-sequences-of-a-number3437/1?page=1&category=CPP&difficulty=Basic&sortBy=submissions




















//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

int fact(int n){
    int ans = 1;
    for(int i=1; i <= n; i++){
        ans *= i;
    }

    return ans;
}
int nCr(int n, int r){
    int ans = (fact(n)/ (fact(n-r) * (fact(r))));
    return ans;
}

class Solution{
public:	

	int subsequenceSum(string s) 
	{
        int i = 0;
        int arr[20];
        int len = 0;
        int sum = 0;

        while(s[i] != '\0'){
            arr[i] = (s[i] - 48);
            sum += arr[i];
            i++;
            len++;
        }

        int Ans = 0;
        for(int j=1; j <= len; j++){
            Ans += ((nCr(len, j) * j * sum)/ len);
        }

        return Ans;
	    // Your code goes here
	}
};

//{ Driver Code Starts.



int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   		Solution ob;

   		cout << ob.subsequenceSum(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends