// Correct.

// Repeated Character
// https://www.geeksforgeeks.org/problems/repeated-character2058/1?page=1&category=Strings&difficulty=Basic&sortBy=submissions


















//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    char firstRep (string s)
    {
        int Times[26] = {0};
        int FirstIndex[26] = {-1};

        int i = 0;
        while(s[i] != '\0'){
            int index = ((int)s[i] - 97);

            if(Times[index] == 0){
                FirstIndex[index] = i;
            }
            Times[index]++;

            i++;
        }

        int ans = -1;
        int ansIndex = -1;
        for(int i=0; i<26; i++){
            if((Times[i] > 1) && (ans == -1)){
                ans = i;
                ansIndex = FirstIndex[i];
            }
            else if((Times[i] > 1) && (FirstIndex[i] < ansIndex)){
                ans = i;
                ansIndex = FirstIndex[i];
            }
        }

        if(ans == -1){
            char FinalAns = '#';
            return FinalAns;
        }
        else{
            char FinalAns = (char)(ans + 97);
            return FinalAns;
        }
        //code here.
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        char res = ob.firstRep (s);
        if (res == '#') cout << -1 << endl;
        else cout << res << endl;
    }
    return 0;
}



// } Driver Code Ends