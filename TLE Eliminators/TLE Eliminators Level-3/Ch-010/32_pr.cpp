// Correct.

// 2416. Sum of Prefix Scores of Strings
// https://leetcode.com/problems/sum-of-prefix-scores-of-strings/description/




































#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    
    return 0;
}

class TrieNode {
public:
    bool isSpecial;
    TrieNode *children[26];
    int indexes = 0;
    TrieNode(){
        isSpecial = false;
        for(int i=0; i < 26; i++){
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

    void insert(string word, int index){
    // index => index of that word in string-array, so that
    //        it will become easier to find full strings by 
    //        prefixes by these indexes.
        TrieNode *curr = root;
        for(auto ch : word){
            if(curr->children[ch-'a'] == NULL){
                curr->children[ch-'a'] = new TrieNode();
            }
            curr = curr->children[ch-'a'];
            curr->indexes++;
        }
        curr->isSpecial = true;
    }

    int Sum_Contacts(string word){
        TrieNode *curr = root;
        int ans = 0;
        int i = 0;
        for(i=0; i < word.size(); i++){ // O(s)
            char ch = word[i];
            curr = curr->children[ch-'a'];
            ans += curr->indexes;
        }
        
        return ans;
    }
};

class Solution {
public:
    vector<int> sumPrefixScores(vector<string>& words) {
        Trie *t = new Trie();
        int n = words.size();
        for(int i=0; i < n; i++){  
                t->insert(words[i], i);
        }
        vector<int> ans;
        for(int i=0; i<n; i++){
            int temp = t->Sum_Contacts(words[i]);
            ans.push_back(temp);
        }
        return ans; 
    }
};