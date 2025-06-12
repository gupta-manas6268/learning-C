// This is Mentor's code.
// Correct.

// Sum-string
// https://www.geeksforgeeks.org/problems/sum-string3151/1



































#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    
    return 0;
}



class Solution{
public:
    string string_sum(string str1, string str2){
        if(str1.size() < str2.size()){
            swap(str1, str2);
        }

        int m = str1.size();
        int n = str2.size();
        string ans = "";

        // sum the 'str2' with 'str1'
        int carry = 0;
        for(int i=0; i<n; i++){
            int ds = ((str1[m - 1 - i] - '0') + (str2[n - 1 - i] - '0') + carry)% 10;
            carry = ((str1[m - 1 - i] - '0') + (str2[n - 1 - i] - '0') + carry)/ 10;
            ans = char(ds + '0') + ans;
        }

        for(int i = n; i < m; i++){
            int ds = (str1[m - 1 - i] - '0' + carry) % 10;
            carry = (str1[m - 1 - i] - '0' + carry)/ 10;
            ans = char(ds + '0') + ans;
        }

        if(carry){
            ans = char(carry + '0') + ans;
        }

        return ans;
    }

    bool helper(string str, int beg, int len_1, int len_2){
        string s1 = str.substr(beg, len_1); // Sub-string -> a
        string s2 = str.substr(beg + len_1, len_2); // Sub-string -> b
        string s3 = string_sum(s1, s2); // a + b

        int s3_length = s3.size();

        if(s3_length > (str.size() - len_1 - len_2 - beg)){
            return false;
        }
        if(s3 == str.substr(beg + len_1 + len_2, s3_length)){
            if((beg + len_1 + len_2 + s3_length) == str.size()){
                return true;
            }

            return helper(str, beg + len_1, len_2, s3_length);
        }

        return false;
    }

    int isSumString(string S){
        int n = S.size();
        for(int i=1; i<n; i++){
            for(int j=1; i+j < n; j++){
                if(helper(S, 0, i, j)){
                    return true;
                }
            }
        }

        return false;
    }
};