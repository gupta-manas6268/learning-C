// Wrong.

// Remove Spaces
// https://www.geeksforgeeks.org/problems/remove-spaces0128/1?page=2&difficulty=School&sortBy=submissions





//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string modify (string s)
    {
        string t = s, ans;
        int i=0;
        while(t[i] != '\n'){
            if(t[i] != 32){
                ans[i] = t[i];
            }
            i++;
        }
        ans[i] = '\n';
        return ans;
        //code here.
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    cin.ignore ();
    while (t--)
    {
        string s;
        getline (cin, s);
        Solution ob;
        cout <<ob.modify (s) << endl;
    }
    return 0;
}


// } Driver Code Ends