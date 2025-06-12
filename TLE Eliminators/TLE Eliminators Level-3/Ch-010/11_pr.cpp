// Correct.

// 208. Implement Trie (Prefix Tree)
// https://leetcode.com/problems/implement-trie-prefix-tree/description/




































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
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */