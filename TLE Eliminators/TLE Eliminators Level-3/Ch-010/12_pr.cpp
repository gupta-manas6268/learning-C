// 

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


class Trie {
public:
    const int letters = 26;
    struct Node{
        vector<int> children;
        int string_ending_here = 0;
        int string_going_below = 0;
        Node(){
            children.resize(26);
            fill(begin(children), end(children), -1);
        }
    };

    vector<Node> trie_tree;
    int size_Of_Trie = 0;
    Trie() {
        trie_tree.emplace_back();
        // This creates a new node & pushes at the 
        // back of the current vector.
        size_Of_Trie++;
    }
    
    void insert(string word) {
        int current_node = 0;
        for(char c : word){
            int index = c - 'a';
            if(trie_tree[current_node].children[index] == -1){
                trie_tree[current_node].children[index] = size_Of_Trie;
                trie_tree.emplace_back();
                size_Of_Trie++;
            }
            trie_tree[current_node].string_going_below++;
            current_node = trie_tree[current_node].children[index];
        }
        trie_tree[current_node].string_ending_here++; 
    }

    bool search(string word) {
        int current_node = 0;
        for(char c : word){
            int index = c - 'a';
            if(trie_tree[current_node].children[index] == -1){
                return false;
            }
            current_node = trie_tree[current_node].children[index];
        }
        return trie_tree[current_node].string_ending_here > 0;
    }
    
    bool startsWith(string prefix) {
        int current_node = 0;
        for(char c : prefix){
            int index = c - 'a';
            if(trie_tree[current_node].children[index] == -1){
                return false;
            }
            current_node = trie_tree[current_node].children[index];
        }
        return (trie_tree[current_node].string_going_below > 0) || (trie_tree[current_node].string_ending_here > 0);
    }

    int noOfPrefix(string prefix) {
        int current_node = 0;
        for(char c : prefix){
            int index = c - 'a';
            if(trie_tree[current_node].children[index] == -1){
                return false;
            }
            current_node = trie_tree[current_node].children[index];
        }
        return trie_tree[current_node].string_going_below > 0;
    }

    vector<string> Prefixes_String(string prefix) {        
        int current_node = 0;
        vector<string> ans;
        for(char c : prefix){
            int index = c - 'a';
            if(trie_tree[current_node].children[index] == -1){
                ans.push_back("0"); break;
            }
            current_node = trie_tree[current_node].children[index];
        }

        if(trie_tree[current_node].string_going_below > 0){
            for(char c = 'a'; c <= 'z'; c++){
                int index = c - 'a';

                if(trie_tree[current_node].string_ending_here > 0){
                    int val = trie_tree[current_node].string_ending_here;
                    for(int i=0; i < val; i++){
                        ans.push_back(current_node);
                    }

                }

                if(trie_tree[current_node].children[index] == -1){
                    ans.push_back("0"); break;
                }
                current_node = trie_tree[current_node].children[index];
            }
        }

        return ans;
        return (trie_tree[current_node].string_going_below > 0) || (trie_tree[current_node].string_ending_here > 0);
    }
};


class Solution {
public:
    vector<vector<string>> displayContacts(int n, string contact[], string s){
        Trie T = Trie();
        for(int i=0; i<n; i++){
            T.insert(contact[i]);
        }

        int size = s.length();
        vector<vector<string>> ans;
        string Temporary = "";
        for(int i=0; i < size; i++){
            vector<int> temp;
            Temporary += s[i];
            bool Prefix = T.startsWith(Temporary);
            if(Prefix == true){
                int val = T.noOfPrefix(Temporary);

                if(val == 0){

                }
                else{

                }
            }
            else{

            }
        }
    }
}