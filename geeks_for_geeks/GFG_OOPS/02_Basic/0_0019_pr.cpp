// Wrong.

// Remove consonants from a string
// https://www.geeksforgeeks.org/problems/c-program-to-remove-consonants-from-a-string1945/1?page=1&category=Searching&difficulty=Basic&sortBy=submissions



//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    string removeConsonants(string s){
        int i = 0;
        vector<string> t;
        int j = 0;
        while(s[i] != '\0'){
            if((s[i] == 'a') || (s[i] == 'e') || (s[i] == 'i') || (s[i] == 'o') || (s[i] == 'u') || (s[i] == 'A') || (s[i] == 'E') || (s[i] == 'I') || (s[i] == 'O') || (s[i] == 'U')){
                // t.push_back(s[i]);
                t[j] = s[i];
                j++;
            }
            i++;
        }
        t[j] = '\0';
        return t;
    //complete the function heredef removeConsonants(s):
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout << ob.removeConsonants(s) << "\n";
    }
return 0;
}
// } Driver Code Ends