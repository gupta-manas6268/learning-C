// These are H.W. Problems.

// 

// 2514. Count Anagrams
// https://leetcode.com/problems/count-anagrams/description/



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
    long long power(long long base, long long exp){
        long long MOD = 1e9 + 7;
        long long result = 1;
        
        while(exp > 0){
            if((exp % 2) == 1){
                (result *= base) %= MOD;
                
                (base *= base) %= MOD;
                exp /= 2;
            }
            else{
                (base *= base) %= MOD;
                exp /= 2;
            }
        }
        
        return result;
    }
    
    vector<long long> PreComputeFact(long long n){
        long long MOD = 1e9 + 7;
        vector<long long> fact(n+1);
        for(long long i=0; i<=n; i++){
            if(i == 0){
                fact[i] = 1;
            }
            else{
                fact[i] = (fact[i-1] * i) % MOD; 
            }
        }
        
        return fact;
    }
    vector<long long> PreComputeInv_Fact(long long n, vector<long long> fact){
        long long MOD = 1e9 + 7;
        vector<long long> inv_fact(n+1);
        inv_fact[n] = power(fact[n], MOD-2) % MOD;
        for(long long i = n-1; i >= 0; i--){
            inv_fact[i] = (inv_fact[i+1] * (i+1)) % MOD;
        }

        return inv_fact;
    }
    
    int countAnagrams(string s) {
        long long MOD = 1e9 + 7;

        long long n = s.length();
        vector<string> Words;

        long long Max_Size = 0;
        long long size = 0;
        for(long long i=0; i<n; i++){
            string temp; 
            if((s[i] == ' ') || (i == n-1)){
                if((i == n-1) || (s[i] != ' ')){ temp += s[i]; size++;}
                Words.push_back(temp);

                Max_Size = max(Max_Size, size);
                size = 0;
            }
            else{
                temp += s[i];
                size++;
            }
        }

        vector<long long> fact = PreComputeFact(Max_Size);
        vector<long long> inv_fact = PreComputeInv_Fact(Max_Size, fact);

        long long ans = 1;
        for(long long i=0; i < Words.size(); i++){
            string temp = Words[i];

            long long character[26] = {0};
            long long temp_n = Words[i].length();
            for(long long j=0; j<temp_n; j++){
                long long val = (int)(Words[i][j] - 'a');
                character[val]++;
            }

            long long temp_ans = fact[temp_n];
            for(long long i=0; i < 26; i++){
                temp_ans *= inv_fact[character[i]];
                temp_ans %= MOD;
            }

            ans *= temp_ans;
            ans %= MOD;
        }
        int Final_Ans = (int)(ans);

        return Final_Ans;
    }
};