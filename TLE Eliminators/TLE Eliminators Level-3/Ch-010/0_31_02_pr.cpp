// Correct.
// I Solved it with the Help of Claude-AI.

// 720. Longest Word in Dictionary
// https://leetcode.com/problems/longest-word-in-dictionary/description/



































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

    bool insert(string word){
        TrieNode *curr = root;
        int n = word.length();
        if(n == 1){
            curr->children[word[0]-'a'] = new TrieNode();
            curr->isSpecial = true;
            
            return true;
        }
        else{
            for(int i=0; i < (n-1); i++){
                if(curr->children[word[i]-'a'] == NULL){
                    return false;
                }
                curr = curr->children[word[i]-'a'];
            }
            curr->children[word[n-1]-'a'] = new TrieNode();
            curr = curr->children[word[n-1]-'a'];

            curr->isSpecial = true;

            return true;
        }
    }
};

class Solution {
public:
    string longestWord(vector<string>& words) {
        int n = words.size();
        sort(words.begin(), words.end());
        vector<string> New_Words;
        New_Words.push_back(words[0]);
        // Takes unique words.
        for(int i=1; i<n; i++){
            if(words[i-1] != words[i]){
                New_Words.push_back(words[i]);
            }
        }

        vector<pair<int,string>> vec;
        for(int i=0; i < New_Words.size(); i++){
            vec.push_back({New_Words[i].size(), New_Words[i]});
        }
        sort(vec.begin(), vec.end());

        Trie *t = new Trie();
        string ans = "";
        for(int i=0; i < vec.size(); i++){  
            bool add = t->insert(vec[i].second);

            if(add == true){
                if((i == 0) || (vec[i].first > ans.length()) || (vec[i].second < ans)){
                    ans = vec[i].second;
                }
            }
        }

        return ans;
    }
};