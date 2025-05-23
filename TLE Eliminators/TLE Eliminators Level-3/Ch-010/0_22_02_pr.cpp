// Correct.
// This is Mentor's code. (See Line-104 to 111.)

// 677. Map Sum Pairs
// https://leetcode.com/problems/map-sum-pairs/description/



































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
    int sum = 0;
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

    void insert(string word, int val){
        TrieNode *curr = root;
        for(auto ch : word){
            if(curr->children[ch-'a'] == NULL){
                curr->children[ch-'a'] = new TrieNode();
            }
            curr = curr->children[ch-'a'];
            curr->sum += val;
        }
        curr->isSpecial = true;
    }

    int find_Sum(string prefix){
        TrieNode* curr = root;
        for(auto ch : prefix){
            if(curr->children[ch-'a'] == NULL){
                return 0;
            }
            curr = curr->children[ch-'a'];
        }
        return curr->sum;
    }
};

class MapSum {
public:
    Trie* t;    
    unordered_map<string, int> m;
    // As, in CP(Competitive-Programming), Leetcode rarely uses
    //   worst case Test-cases, so for Searching where 
    //   'unordered_map' Searching TC = O(n). (for Worst-case)
    //   But it rarely hits worst-case in CP, so we use 'unordered_map'
    //    against 'ordered_map' where Searching TC = O(log(n)), 
    //    because 'unordered_map' best & avg. case Searching TC = O(1),
    //    which is better to use.
    // That's why we use 'unordered_map' here against 'ordered_map'.
    MapSum() {
        t = new Trie();
    }
    
    void insert(string key, int val) {
        t->insert(key, val-m[key]);
        m[key] = val;
        return;
    }

    int sum(string prefix){
        return t->find_Sum(prefix);
    }
    // TC = O(q * w)
    // SC = O(q * w * 26)
};
    
/**
 * Your MapSum object will be instantiated and called as such:
 * MapSum* obj = new MapSum();
 * obj->insert(key,val);
 * int param_2 = obj->sum(prefix);
 */