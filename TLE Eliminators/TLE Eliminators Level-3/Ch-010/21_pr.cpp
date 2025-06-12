// Correct.

// Shortest Unique prefix for every word
// https://www.geeksforgeeks.org/problems/shortest-unique-prefix-for-every-word/1




































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

    int noOfPrefixes(string prefix){
        int current_node = 0;
        int ans = 0;
        for(char c : prefix){
            int index = c - 'a';
            if(trie_tree[current_node].children[index] == -1){
                return ans;
            }
            current_node = trie_tree[current_node].children[index];
        }
        ans = trie_tree[current_node].string_going_below;
        return ans;
    }

    int string_Ending(string prefix){
        int current_node = 0;
        int ans = 0;
        for(char c : prefix){
            int index = c - 'a';
            if(trie_tree[current_node].children[index] == -1){
                return ans;
            }
            current_node = trie_tree[current_node].children[index];
        }
        ans = trie_tree[current_node].string_ending_here;
        return ans;
    }
};

class Solution {
public:
    vector<string> findPrefixes(string arr[], int n){
        Trie T = Trie();
        for(int i=0; i<n; i++){
            T.insert(arr[i]);
        }

        vector<string> ans;
        for(int i=0; i<n; i++){
            int size = arr[i].length();
            string temp = "";
            for(int j=0; j < size; j++){
                temp += arr[i][j];
                if((T.noOfPrefixes(temp) <= 1) && (T.string_Ending(temp) == 0) && (j < (size - 1))){
                    ans.push_back(temp); break;
                }
                else if(j == (size - 1)){
                    ans.push_back(temp); break;
                }
            }
        }

        return ans;
    }
};