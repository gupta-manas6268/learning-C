// Correct.

// Parallel or Perpendicular?
// https://www.geeksforgeeks.org/problems/parallel-or-perpendicular4257/1?page=7&difficulty=School&sortBy=submissions






















//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
int power(int a, int b){
    int ans = 1;
    for(int i=1; i <= b; i++){
        ans *= a;
    }
    return ans;
}

class Solution{
	public:
	int find(vector<int>A, vector<int>B){
        // int dotProduct, crossProduct; // This line gives Wrong OUTPUT.
        int dotProduct = 0, crossProduct = 0;

        for(int i=0; i<3; i++){
            dotProduct += (A.at(i) * B.at(i));
        }

        crossProduct = power((A.at(1)*B.at(2) - A.at(2)*B.at(1)), 2) + power((A.at(0)*B.at(2) - B.at(0)*A.at(2)), 2) + power((A.at(0)*B.at(1) - A.at(1)*B.at(0)), 2);

        if(crossProduct == 0){
            int ans = 1;
            return ans;
        }
        else if(dotProduct == 0){
            int ans = 2;
            return ans;
        }
        else{
            int ans = 0;
            return ans;
        }
	    //  Code here
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		vector<int>A(3), B(3);
		for(int i = 0; i < 3; i++)cin >> A[i];
		for(int i = 0; i < 3; i++)cin >> B[i];
		Solution ob;
		int ans = ob.find(A, B);
		cout << ans <<"\n";
	}  
	return 0;
}
// } Driver Code Ends