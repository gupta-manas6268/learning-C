// 

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
    int Ending_val;
    TrieNode *children[26];
    int indexes = 0;
    TrieNode(){
        isSpecial = false;
        for(int i=0; i < 26; i++){
            children[i] = NULL;
        }
    }
};

class MapSum {
public:
    TrieNode* root;    
    MapSum() {
        root = new TrieNode();
    }
    
    void insert(string key, int val) {
        TrieNode *curr_1 = root;
        for(auto ch : key){
            if(curr_1->children[ch-'a'] == NULL){
                curr_1->children[ch-'a'] = new TrieNode();
            }
            curr_1 = curr_1->children[ch-'a'];
        }
        if(curr_1->isSpecial == true){
            val -= curr_1->Ending_val;
        }

        TrieNode *curr_2 = root;
        for(auto ch : key){
            if(curr_2->children[ch-'a'] == NULL){
                curr_2->children[ch-'a'] = new TrieNode();
            }
            curr_2 = curr_2->children[ch-'a'];
            curr_2->indexes += val;
        }
        curr_2->Ending_val = val;
        curr_2->isSpecial = true;
    }

    int sum(string prefix){
        TrieNode *curr = root;
        int i = 0;
        int ans = 0;
        bool Break = false;
        for(i=0; i < prefix.size(); i++){ // O(s)
            char ch = prefix[i];
            if(curr->children[ch-'a'] == NULL){
                Break = true; break;
            }
            curr = curr->children[ch-'a'];
        }
        if(Break == false){
            ans += curr->indexes;
        }
        return ans;
    }
};
    
/**
 * Your MapSum object will be instantiated and called as such:
 * MapSum* obj = new MapSum();
 * obj->insert(key,val);
 * int param_2 = obj->sum(prefix);
 */