// Wrong.

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
    int values[500] = {0};
    int i = 0;
    int ans = 0;

    void backtrack(int index, string s){
        if(index == s.length()){
            if((i >= 2)){
                if(values[i] == (values[i-1] + values[i-2])){
                    ans = 1; return;
                }
            }
            else{
                return;
            }
        }

        if(ans == 1){ return;}

        int val = (s[index] - '0');
        if((index == 0) || (s[index] == '0')){
            values[i] = (values[i] * 10 + val);
            backtrack(index + 1, s);
        }

        if(i >= 2){
            if(values[i] == (values[i-1] + values[i-2])){
                i++;
                values[i] = (values[i] * 10 + val);
                backtrack(index + 1, s);
            }
            else if(values[i] > (values[i-1] + values[i-2])){
                return;
            }
            else{
                values[i] = (values[i] * 10 + val);
                backtrack(index + 1, s);
            }
        }
        else{
            // Choose the element in same sub-string.
            values[i] = (values[i] * 10 + val);
            backtrack(index + 1, s);

            // Choose the element in different sub-string.
            values[i] /= 10;
            i++;
            values[i] = (values[i] * 10 + val);
            backtrack(index + 1, s);
        }
    }

    int isSumString(string S){
        // code here
        backtrack(0, S);
        return ans;
    }
};