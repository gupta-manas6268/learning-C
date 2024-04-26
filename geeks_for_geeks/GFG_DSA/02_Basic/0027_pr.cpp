// Correct.

// Parties and seats
// https://www.geeksforgeeks.org/problems/parties-and-seats/1?page=1&category=Map&difficulty=Basic&sortBy=submissions


















//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

/* print the name of the parties along with seats
   they got in election and print the maximum seat
   received
*/
void Election2019(char party[], int seats[], int n)
{
    map <char, int> m;
    int max = seats[0];

    for(int i=0; i<n; i++){
        m[party[i]] = seats[i];

        if(max < seats[i]){
            max = seats[i];
        }
    }

    for(auto &Pair: m){
        cout << Pair.first << " " << Pair.second << endl;
    }
    cout << max << endl;
    //Your code here
}

//{ Driver Code Starts.
    
int main() {
	
		int t; 
		cin>>t;
		while(t--)
		{
		    int n; 
		    cin>>n;
		    char party[n];
		    int seats[n];
		    for(int i = 0; i < n; i++)
		        cin>>party[i]; 
		     
		    for(int i = 0; i < n; i++)
		        cin>>seats[i];
		     
		    Election2019(party, seats, n);
		}
}
// } Driver Code Ends