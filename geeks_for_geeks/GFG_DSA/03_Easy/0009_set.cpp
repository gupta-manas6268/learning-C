// Correct.

// Multiset Operations
// https://www.geeksforgeeks.org/problems/multiset-operations/1?page=1&category=set&difficulty=Easy&sortBy=submissions


















//{ Driver Code Starts
//Initial Template for C++
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

multiset<int> multisetInsert(int arr[],int n); //Function to insert elements of array into a multiset and return a multiset


void multisetDisplay(multiset<int>s); //function to print the elements of the multiset


void multisetErase(multiset<int>&s,int x); //function to erase x from multiset if it exists


// } Driver Code Ends
//User function Template for C++


multiset<int> multisetInsert(int arr[],int n)
{
    multiset<int>s;
   //Insert elements into a multiset
    for(int i=0; i<n; i++){
        s.insert(arr[i]);
    }
    
    return s;
    
}


void multisetDisplay(multiset<int>s)
{
    //Multiset display print elements
    for(auto it=s.begin(); it != s.end(); it++){
        cout << *it << " ";
    }
    cout<<endl;
}


void multisetErase(multiset<int>&s,int x)
{
    int frequency = s.count(x);
    //If and else condition to erase x from multiset
    if(frequency >= 1){
        cout<<"erased "<<x;
        for(int i=0; i<frequency; i++){
            auto it = s.find(x);
            s.erase(it);
        }
    }
    else{
        cout<<"not found";
    }
    
    
    cout<<endl;
}

//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n]; //array of size n
        for(int i=0;i<n;i++)
        cin>>arr[i]; //Input the array
        
        multiset<int>s=multisetInsert(arr,n); //call the insert function that returns a multiset
        multisetDisplay(s);// display the inserted multiset
        int x;
        cin>>x; //x element that needs to be erased from multiset
        
        multisetErase(s,x); //try to erase x from multiset
        multisetDisplay(s); //print the multiset after erase operation
        
        
    }
	return 0;
}




// } Driver Code Ends