// Correct.

// C++ Array (print an element) | Set 2
// https://www.geeksforgeeks.org/problems/c-array-print-an-element-set-25933/1?page=1&category=CPP&difficulty=School&sortBy=submissions

// See line-36 and 69 & OUTPUT of this code carefully.
















//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);// Because of the trailing whitespace after
                               // '%d' this code takes one more input.
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
    int findElementAtIndex(int n, int key, vector<int> &arr) {
        int ans = arr[key];
        return ans;
        // code here
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t); // Because of the trailing whitespace after
                     // '%d' this code takes one more input.  
    while(t--){
        
        int n;
        scanf("%d",&n);
        
        
        int key;
        scanf("%d",&key);
        
        
        vector<int> arr(n);
        Array::input(arr,n);
        
        Solution obj;
        int res = obj.findElementAtIndex(n, key, arr);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends