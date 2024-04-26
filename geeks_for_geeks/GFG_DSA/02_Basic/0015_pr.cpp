// Correct.

// Third largest element
// https://www.geeksforgeeks.org/problems/third-largest-element/1?page=1&category=Arrays&difficulty=Basic&sortBy=submissions


















//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    int thirdLargest(int a[], int n)
    {
        int largest1 = a[0];
        int largest2 = -1, largest3 = -1;
        if(n < 3){ largest3 = -1;}
        else{
            for(int i=1; i<n; i++){
                if(a[i] >= largest1){
                    largest3 = largest2;
                    largest2 = largest1;
                    largest1 = a[i];
                }
                else if((a[i] < largest1) && (largest2 == -1)){
                    largest3 = largest2;
                    largest2 = a[i];
                }
                else if(a[i] < largest1){
                    if(a[i] >= largest2){
                        largest3 = largest2;
                        largest2 = a[i];
                    }
                    else if((a[i] < largest2) && (largest3 == -1)){
                        largest3 = a[i];
                    }
                    else if((a[i] < largest2) && (a[i] > largest3)){
                        largest3 = a[i];
                    }
                }
            }
        }
        return largest3;
         //Your code here
    }

};

//{ Driver Code Starts.
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution obj;
	    cout<<obj.thirdLargest(a,n)<<endl;
    }
}   
// } Driver Code Ends