// Correct.

// Maximum XOR With an Element From Array
// https://www.geeksforgeeks.org/problems/maximum-xor-with-an-element-from-array/1




































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
    vector<int> maxXor(vector<int> &arr, vector<vector<int>> &queries){
        Trie *t = new Trie();
        int n = arr.size();
        sort(arr.begin(), arr.end());

        int m = queries.size();
        vector<pair<int, pair<int,int>>> Vec;
        for(int index=0; index < m; index++){
            int value = queries[index][0], limit = queries[index][1];
            Vec.push_back({limit, {value, index}});
        }
        sort(Vec.begin(), Vec.end());
        
        vector<pair<int,int>> Temp_Ans;
        int initial_limit_index = 0;
        for(int i=0; i < m; i++){
            int limit = Vec[i].first;
            int value = Vec[i].second.first;
            int index = Vec[i].second.second;
            
            int limit_index = upper_bound(arr.begin(), arr.end(), limit) - arr.begin();
            
            if(limit_index == 0){
                Temp_Ans.push_back({index, -1});
            }
            else{
                for(int j = initial_limit_index; j < limit_index; j++){
                    string temp = Decimal_to_Binary(arr[j], 31);
                    t->insert(temp, arr[j]);
                }
                string temp = Decimal_to_Binary(value, 31);
                int max_value = t->Max_Binary_XOR(temp);

                int Max_XOR = (value ^ max_value);
                Temp_Ans.push_back({index, Max_XOR});

                initial_limit_index = limit_index;
            }
        }
        sort(Temp_Ans.begin(), Temp_Ans.end());
        
        vector<int> ans;
        for(int i=0; i < m; i++){
            ans.push_back(Temp_Ans[i].second);
        }

        return ans;
    }
};