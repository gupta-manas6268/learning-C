// Wrong.

// Fascinating Number
// https://www.geeksforgeeks.org/problems/fascinating-number3751/1?page=1&category=Arrays&difficulty=School&sortBy=submissions

















//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	
	bool fascinating(int n) {
        vector<int> vec;

        int i = 0;
        int len = 0;
        int garbage1 = n;
        while(garbage1 > 0){
            vec[i] = (garbage1 % 10);
            garbage1 /= 10;
            i++;
            len++;
        }

        int two_n = (n * 2);
        int garbage2 = two_n;
        while(garbage2 > 0){
            vec[i] = (garbage2 % 10);
            garbage2 /= 10;
            i++;
            len++;
        }

        int three_n = (n * 3);
        int garbage3 = three_n;
        while(garbage3 > 0){
            vec[i] = (garbage3 % 10);
            garbage3 /= 10;
            i++;
            len++;
        }

        int index[10] = {0};
        bool ans = true;

        for(int i=0; i<len; i++){
            int a = vec[i];
            index[a]++;

            if(index[a] > 1){ ans = false; break;}
        }

        return ans;
	    // code here
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.fascinating(n); // 'auto' lets the compiler to determine the appropriate
                                      //  data type for 'ans' variable, which is 'bool' here.
        if (ans) {
            cout << "Fascinating\n";
        } else {
            cout << "Not Fascinating\n";
        }
    }
    return 0;
}
// } Driver Code Ends