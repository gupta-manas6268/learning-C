// From Here












// K'th String in Dictionary.(In Lexico-graphical Order.)

// (See, Slide-1, Page-35 to 37.)
//  Complete Code typing, 
//  And think whether to write this code in Note-book
//  or not.




















#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    
    return 0;
}



class Solution {
public:
    int power(int base, int exp){
        int result = 1;

        while(exp > 0){
            if((exp % 2) == 1){
                result *= base;

                base *= base;
                exp /= 2;
            }
            else{
                base *= base;
                exp /= 2;
            }
        }

        return result;
    }
    string getHappyString(int n, int k) {
        string ans = "";
        int x = k-1;
        if(power(26, n) >= k){
            for(int i=0; i < n; i++){
                int d = x%26;
                x /= 26;
                ans += char(d+97);
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};