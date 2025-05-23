// Correct.
// I Solved it with the Help of Hints.

// Maximum XOR subarray
// https://www.geeksforgeeks.org/problems/maximum-xor-subarray--141631/1



































#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    
    return 0;
}



long long power(long long base, long long exp){
    long long result = 1;

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

string Decimal_to_Binary(int num, int no_of_Digits){
    string ans = "";
    for(long long i = (no_of_Digits-1); i >= 0; i--){
        long long val = (num & power(2, i));
        if(val == 0){ ans += '0';}
        else{ ans += '1';}
    }
    return ans;
}

class TrieNode {
public:
    bool isSpecial;
    TrieNode *children[2];
    int Ending_Value = 0;
    TrieNode(){
        isSpecial = false;
        for(int i=0; i < 2; i++){
            children[i] = NULL;
        }
    }
};

class Trie {
public:
    TrieNode* root;
    Trie(){
        root = new TrieNode();
    }

    void insert(string word, int num){
        TrieNode *curr = root;
        for(auto ch : word){
            if(curr->children[ch-'0'] == NULL){
                curr->children[ch-'0'] = new TrieNode();
            }
            curr = curr->children[ch-'0'];
        }
        if(curr->isSpecial == false){
            curr->Ending_Value = num;
            curr->isSpecial = true;
        }
    }

    int Max_Binary_XOR(string word){
        TrieNode *curr = root;
        int i = 0;
        for(i=0; i < word.size(); i++){ // O(s)
            char ch = word[i];
            if(ch == '0'){ ch = '1';}
            else{ ch = '0';}
            if(curr->children[ch-'0'] == NULL){
                if(ch == '0'){ ch = '1';}
                else{ ch = '0';}
            }
            curr = curr->children[ch-'0'];
        }
        int ans = curr->Ending_Value;
        
        return ans;
    }
};

class Solution {
public:
    int maxSubarrayXOR(int N, int arr[]) {
        Trie *t = new Trie();
        
        int Prefix_XOR[N] = {0};
        for(int i=0; i < N; i++){
            if(i == 0){
                Prefix_XOR[0] = arr[0];
            }
            else{
                Prefix_XOR[i] = (Prefix_XOR[i-1] ^ arr[i]);
            }
        }

        int ans = Prefix_XOR[0];
        for(int i=0; i < N; i++){
            string temp = Decimal_to_Binary(Prefix_XOR[i], 21);
            t->insert(temp, Prefix_XOR[i]);

            if(i != 0){
                int val = t->Max_Binary_XOR(temp);
                int Number = max(val ^ Prefix_XOR[i], Prefix_XOR[i]);
                ans = max(ans, Number);
            }
        }

        return ans;
    }
};