// Wrong.

// Divisor Game
// https://www.geeksforgeeks.org/problems/divisor-game-1664432414/1?page=1&category=Recursion&difficulty=Easy&sortBy=submissions


//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
public:
    bool divisorGame(int N) {
        int move = 1;
        for(int i=2; i*i<=N; i++){
            if(N%i == 0){
                int x = N/i;
                N -= x;
                i = 2;
                move++;
            }
            else if(((i+1)*(i+1)) > N){
                int x = 1;
                N -= x;
                i = 2;
                move++;
            }
            // Also make when is only divisible by '1' only.
        }
        if(N == 2){
            int x = 1;
            N -= x;
            move++;
        }

        bool ans;
        if(move % 2 != 0){
            ans = false;
            return ans;
        }
        else{
            ans = true;
            return ans;
        }
        // code here
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N; 
        cin >> N;
        
        Solution obj;
        bool ans = obj.divisorGame(N);
        if(ans) cout<<"True"<<endl;
        else cout<<"False"<<endl;
    }
    return 0;
}
// } Driver Code Ends