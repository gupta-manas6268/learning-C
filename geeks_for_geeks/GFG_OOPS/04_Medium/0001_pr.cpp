// From this Question & Solve this strictly.
// From this Question & Solve this strictly.

// Wrong.

// Longest Common Substring
// https://www.geeksforgeeks.org/problems/longest-common-substring1452/1?page=1&category=Strings&difficulty=Medium&sortBy=submissions








//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    
    int longestCommonSubstr (string S1, string S2, int n, int m)
    {
        int len1Break = 0, len2Break = 0;
        int len1 = 0, len2 = 0;

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if((S1[i] == S2[j]) && (len1Break == 0)){
                    len1++;
                    i++;
                }
                else if((S1[i] != S2[j]) && (len1 != 0) && (len1Break == 0)){
                    len1Break++;
                }
                else if((S1[i] == S2[j]) && (len1Break == 1)){
                    len2++;
                    i++;
                }
                
            }
        }
        // your code here
    }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, m; cin >> n >> m;
        string s1, s2;
        cin >> s1 >> s2;
        Solution ob;

        cout << ob.longestCommonSubstr (s1, s2, n, m) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends