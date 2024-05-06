// Wrong.

// String Reversal
// https://www.geeksforgeeks.org/problems/string-reversalunpublished-for-now5324/1?page=1&category=Map&difficulty=Basic&status=unsolved&sortBy=submissions













//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
string reverseString(string s);
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	    {
	        string s;
	        getline(cin,s);
	        cout<<reverseString(s)<<endl;
	    }
}

// } Driver Code Ends


string reverseString(string s)
{
    //code here.
    vector <char> t;
    for(int i=s.size()-1; i>=0; i--){
        if(s[i] != ' '){
            t.push_back(s[i]);
        }
    }

    unordered_map <char, int> m;
    for(int i=0; i<t.size(); i++){
        m[t[i]] = 1;
    }

    vector <char> ans;
    for(auto &Pair: m){
        ans.push_back(Pair.first);
    }

    string a;
    a.resize(ans.size());
    for(int i=0; i < ans.size(); i++){
        a[i] = ans[i];
    }
    
    return a;
}