// Correct
// C++ Call by reference
// https://www.geeksforgeeks.org/problems/c-call-by-reference/1?page=1&category=Misc&difficulty=Basic&sortBy=submissions

//{ Driver Code Starts
//Initial Template for C++
















#include <iostream>
using namespace std;


// } Driver Code Ends
//User function Template for C++

void reverse_dig(int &a,int &b)
{
    int arr1[20], arr2[20];
    int len1 = 0, len2 = 0;

    while(a > 0){
        arr1[len1] = (a % 10);
        a /= 10;
        
        if(arr1[len1] != 0){
            len1++;
        }
        else if((arr1[len1] == 0) && (len1 != 0)){
            len1++;
        }
    }
    while(b > 0){
        arr2[len2] = (b % 10);
        b /= 10;
        
        if(arr2[len2] != 0){
            len2++;
        }
        else if((arr2[len2] == 0) && (len2 != 0)){
            len2++;
        }
    }

    for(int i=0; i < len1; i++){
        a *= 10;
        a += arr1[i];
    }
    for(int j=0; j < len2; j++){
        b *= 10;
        b += arr2[j];
    }
    //Add your code here.
}
void swap(int &a,int &b)
{
    int temp = a;
    a = b;
    b = temp;
    //Add your code here.
}


//{ Driver Code Starts.

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b;
	    cin>>a>>b;
	
	    reverse_dig(a,b);
	    swap(a,b);
	    cout<<a<<" "<<b<<endl;
    }
	return 0;
}
// } Driver Code Ends