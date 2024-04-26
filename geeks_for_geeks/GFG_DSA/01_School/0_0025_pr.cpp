// Correct.

// Decimal to any base conversion
// https://www.geeksforgeeks.org/problems/decimal-to-any-base-conversion2440/1?page=7&difficulty=School&sortBy=submissions


















//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    string getNumber(int B, int N)
    {
        string ans;
        if((B == 1) && (N == 0)){
            ans = '0';
        }

        else if(B == 1){
            int length = 0;

            for(int i=0; i<N; i++){
                ans[i] = '1';
                length++;
            }
        }

        else{
            int total_Length = log2(N);
            int i = 0;
            int length = 0;
            ans.resize(total_Length + 1);

            while(N > 0){
                int remainder = (N % B);
                
                if(remainder < 10){
                    ans[i] = (char)(remainder + '0');
                }
                else{
                    ans[i] = (char)(remainder - 10 + 'A');
                }
                i++;
                length++;
                N /= B;
            }
        }

        reverse(ans.begin(), ans.end());
        return ans;
        // Write Your Code here
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int B,N;
        cin>>B>>N;
        Solution ob;
        string ans  = ob.getNumber(B,N);
        cout<<ans<<endl;
    }
    return 0;
}
// } Driver Code Ends