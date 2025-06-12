// Correct.
// This is Mentor's code.

// Phone directory
// https://www.geeksforgeeks.org/problems/phone-directory4628/1



































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
    vector<int> indexes;
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
            curr->indexes.push_back(index);
        }
        curr->isSpecial = true;
    }

    vector<vector<string>> display_Contacts_Helper(string word, string contacts[], int n){
        TrieNode *curr = root;
        vector<vector<string>> ans;
        int i = 0;
        for(i=0; i < word.size(); i++){ // O(s)
            vector<string> temp;
            char ch = word[i];
            if(curr->children[ch-'a'] == NULL){
                break;
            }
            curr = curr->children[ch-'a'];
            for(auto it : curr->indexes){ // O(n)
                temp.push_back(contacts[it]); // O(max|contact[i]|)
            }
            ans.push_back(temp);
        }
        while(i < word.size()){
            ans.push_back({"0"});
            i++;
        }
        return ans;
    }
};


class Solution {
public:
    vector<vector<string>> displayContacts(int n, string contact[], string s){
        Trie *t = new Trie();
        sort(contact, contact+n);  // O(n*log(n) * max|contact[i]|)
        t->insert(contact[0],0);
        for(int i=1; i < n; i++){  // O(n * max|contact[i]|)
            if(contact[i-1] != contact[i]){
                t->insert(contact[i], i);
            }
        }
        return t->display_Contacts_Helper(s, contact, n); // O(|s| * n * max|contact[i]|)

        // SC = (n * max|contact[i]| * 26).
    }
};