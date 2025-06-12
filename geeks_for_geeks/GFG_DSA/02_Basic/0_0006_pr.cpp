// Correct
// Repeated Sum and then Multiply
// https://www.geeksforgeeks.org/problems/repated-sum-and-then-multiply1046/1?page=1&category=Misc&difficulty=Basic&sortBy=submissions


//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution {
  public:
    int repeatedSumMul(int n) 
    {
        int arr1[20];
        int len1 = 0;
        int n2 = n;

        int sum1 = 0;
        int product1 = 1;

        while(n2 > 0){
            arr1[len1] = (n2 % 10);
            n2 /= 10;
            sum1 += arr1[len1];
            product1 *= arr1[len1];

            len1++;
        }

        if(n < 10){
            return n;
        }
        else if((n >= 10) && (n < 100)){
            if(sum1 >= 10){
                int product2 = 1;
                int a = (sum1 % 10);
                sum1 /= 10;
                int b = (sum1 % 10);

                product2 = a * b;
                return product2;
            }
            else{
                int product2 = arr1[0] * arr1[1];
                return product2;
            }
        }
        else{
            if(sum1 < 10){
                return product1;
            }
            else{
                int sum2 = 0;
                int reference = sum1;

                int a = (reference % 10);
                reference /= 10;
                int b = (reference % 10);

                sum2 = (a + b);
                
                if(sum2 < 10){
                    int product2 = a * b;
                    return product2;
                }
                else{
                    int product3 = 1;
                    int a = (sum2 % 10);
                    sum2 /= 10;
                    int b = (sum2 % 10);
                    product3 = (a * b);

                    return product3;
                }
            }
        }

        // code here
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int  n;
        cin >> n ;
        Solution ob;
        cout<<ob.repeatedSumMul(n)<<endl;
    }
    return 0;
}

// } Driver Code Ends