// Wrong.

// Maximum Occuring Character
// https://www.geeksforgeeks.org/problems/maximum-occuring-character-1587115620/1?page=2&difficulty=Basic&sortBy=submissions





//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // int arr[26]; // This line will not work.
        int arr[26] = {0};
        int i=0;
        while(str[i] != '\n'){
            int index = (int)(str[i] - 97);
            arr[index]++;
            i++;
        }
        int max = arr[0], maxIndex = 0;
        for(int i=0; i<26; i++){
            if(arr[i] > max){
                max = arr[i];
                maxIndex = i;
            }
        }

        char ans = (char)(maxIndex + 97);
        return ans;
        // Your code here
    }

};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends