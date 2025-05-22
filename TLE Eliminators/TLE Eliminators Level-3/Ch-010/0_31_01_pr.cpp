// Wrong.

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
    int Ending_Index = -1;
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
        }
        curr->Ending_Index = index;
        curr->isSpecial = true;
    }

    bool Word_Dictionary(string word){
        TrieNode *curr = root;
        int i = 0;
        for(i=0; i < word.size(); i++){ // O(s)
            vector<string> temp;
            char ch = word[i];
            curr = curr->children[ch-'a'];
            if(curr->Ending_Index == -1){
                return false;
            }
        }
        return true;
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

        Trie *t = new Trie();
        for(int i=0; i < New_Words.size(); i++){  
            t->insert(New_Words[i], i);
        }

        vector<pair<int,string>> vec;
        for(int i=0; i < New_Words.size(); i++){
            vec.push_back({New_Words[i].size(), New_Words[i]});
        }
        sort(vec.begin(), vec.end());

        vector<vector<string>> Vector;
        vector<string> temp;
        temp.push_back(vec[0].second);
        for(int i=1; i < vec.size(); i++){
            if((vec[i].first - vec[i-1].first) > 1){
                break;
            }
            else if(vec[i].first > vec[i-1].first){
                Vector.push_back(temp);
                temp.clear();
            }
            temp.push_back(vec[i].second);
        }
        if(temp.empty() != true){
            Vector.push_back(temp);
        }
        for(int i=0; i < Vector.size(); i++){
            sort(Vector[i].begin(), Vector[i].end());
        }
        reverse(Vector.begin(), Vector.end());

        string ans;
        for(int i=0; i < Vector.size(); i++){
            for(int j=0; j < Vector[i].size(); j++){
                if(t->Word_Dictionary(Vector[i][j]) == true){
                    ans = Vector[i][j];
                    break;
                }
            }
        }

        return ans;
    }
};