// Correct
// https://www.geeksforgeeks.org/problems/print-the-pattern-set-1/1?page=1&difficulty=School&sortBy=submissions



//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
void printPat(int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n;
	cin>>n;
    printPat(n);
    cout<<endl;
	}
}
// } Driver Code Ends


/*You are required to complete this method*/
void printPat(int n)
{
    for(int i=n; i>=1; i--){
        for(int j=n; j>=1; j--){
            int numberOfTimes = i;

            while(numberOfTimes > 0){
                cout << j << " ";
                numberOfTimes--;
            }
        }
        cout << "$";
    }
//Your code here
}