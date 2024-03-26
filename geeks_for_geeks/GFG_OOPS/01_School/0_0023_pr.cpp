// Correct.
// See line-46 and 47 carefully.

// Display longest name
// https://www.geeksforgeeks.org/problems/display-longest-name0853/1?page=1&category=Arrays&difficulty=School&sortBy=submissions




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
            cin >> A[i];
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i]<< " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
    string longest(int n, vector<string> &names) {
        int length[n];
        for(int i=0; i<n; i++){
            // length[i] = strlen(names[i]); // error because in C++ we have no 'strlen' function. 
            length[i] = names[i].size(); // Use 'size()' to get the length of
                                         //  the string.
        }

        int max = 0; int Max_Index;
        for(int i=0; i<n; i++){
            if(length[i] > max){
                max = length[i];
                Max_Index = i;
            }
        }
        return names[Max_Index];
        // code here
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int n;
        scanf("%d",&n);
        
        
        vector<string> names(n);
        Array::input(names,n);
        
        Solution obj;
        string res = obj.longest(n, names);
        
        cout<<res<<"\n";
        
    }
}

// } Driver Code Ends