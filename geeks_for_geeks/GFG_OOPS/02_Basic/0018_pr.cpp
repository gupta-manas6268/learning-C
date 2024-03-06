// Correct.

// Ishaan's Internship
// https://www.geeksforgeeks.org/problems/ishaans-internship4400/1?page=1&category=Searching&difficulty=Basic&sortBy=submissions


















//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int getCandidate(int n, int k);


int main() {

    int t;
    cin >> t;
    while(t--){
    	int n, k;
    	cin >> n >> k;
    	cout << getCandidate(n, k) << endl;
    }
return 0;
}

// } Driver Code Ends


int getCandidate(int n, int k){
    int power = 0;
    while(n >= k){
        n /= k;
        power++;
    }
    int ans = 1;
    for(int i=1; i <= power; i++){
        ans *= k;
    }
    return ans;
    //complte the function here
}