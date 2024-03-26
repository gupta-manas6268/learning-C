// Correct

// Check for Binary
// https://www.geeksforgeeks.org/problems/check-for-binary/1?page=1&difficulty=School&sortBy=submissions




















//{ Driver Code Starts
// C++ program to Print root to leaf path WITHOUT
// using recursion
#include <bits/stdc++.h>
using namespace std;

bool isBinary(string str);

// Driver program to test above functions
int main()
{
    string str;
    int t;
    scanf("%d\n", &t);
    while (t--)
    {
       cin >> str;
       cout << isBinary(str) << endl;
    }
    return 0;
}

// } Driver Code Ends


// Return true if str is binary, else false
bool isBinary(string str)
{
    // int len = strlen(str);

    int i = 0;
    bool ans = true;

    while(str[i] != '\0'){
        if((str[i] == '0') || (str[i] == '1')){
            ans = true;
        }
        else{
            ans = false;
            break;
        }
        i++;
    }

    return ans;

   // Your code here
}