// Wrong.
// C++ Strings
// https://www.geeksforgeeks.org/problems/c-strings4609/1?page=1&category=CPP&difficulty=School&sortBy=submissions



















//{ Driver Code Starts
#include<iostream>
#include<string>
using namespace std;

string conCat(string a , string b);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        cout<<conCat(a,b)<<endl;
    }
    return 0;
}

// } Driver Code Ends


string conCat(string s1 , string s2)
{
    int len1 = 0, len2 = 0;
    int i = 0, j = 0;

    while(s1[i] != '\0'){
        i++;
        len1++;
    }
    while(s2[j] != '\0'){
        j++;
        len2++;
    }
    
    int len3 = len1 + len2;
    string s3[len3];
    for(int i=0; i < len1; i++){
        s3[i] = s1[i];
    }
    for(int i=len1; i < len3; i++){
        s3[i] = s2[i-len1];
    }

    return s3[len3];
    // code here.
}
