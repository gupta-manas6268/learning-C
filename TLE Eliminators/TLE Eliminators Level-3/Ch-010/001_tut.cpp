#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

const int letters = 26;
struct Node{
    vector<int> children;
    int string_ending_here = 0;
    int string_going_below = 0;
    Node(){
        children.resize(letters);
        fill(begin(children), end(children), -1);
    }
};

struct Trie{
    vector<Node> trie_tree;
    int size_Of_Trie = 0;
    Trie(){
        trie_tree.emplace_back();
        // This creates a new node & pushes at the 
        // back of the current vector.
        size_Of_Trie++;
    }

    void add_String(string &x){
        int current_node = 0;
        for(char c : x){
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

    bool Search_String(string &x){
        int current_node = 0;
        for(char c : x){
            int index = c - 'a';
            if(trie_tree[current_node].children[index] == -1){
                return false;
            }
            current_node = trie_tree[current_node].children[index];
        }
        return trie_tree[current_node].string_ending_here > 0;
    }

    void Delete_Unused_Nodes(vector<pair<int,int>> nodes){
        for(auto node : nodes){
            Node here = trie_tree[node.first];
            Node child = trie_tree[here.children[node.second]];
            if(child.string_going_below == 0){
                // for this code, the child at index node.second has not
                trie_tree[node.first].children[node.second] = -1;
            }
        }
    }

    void Delete_String(string &x){
        if(Search_String(x) != true){ return;}

        int current_node = 0;
        vector<pair<int,int>> Encountered_Nodes;
        for(char c : x){
            int index = c - 'a';
            int parent = current_node;
            
            trie_tree[current_node].string_going_below--;
            current_node = trie_tree[current_node].children[index];
            
            Encountered_Nodes.push_back({parent, index});
        }
        trie_tree[current_node].string_ending_here--;
    }

    bool Search_Prefix(string &x) {
        int current_node = 0;
        for(char c : x){
            int index = c - 'a';
            if(trie_tree[current_node].children[index] == -1){
                return false;
            }
            current_node = trie_tree[current_node].children[index];
        }
        return (trie_tree[current_node].string_going_below > 0) || (trie_tree[current_node].string_ending_here > 0);
    }
};

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    Trie t = Trie();
    string T = "Push";
    t.add_String(T);
    bool ans = t.Search_String(T);
    if(ans == true){cout << "Yes" << endl;}
    else{cout << "No" << endl;}
}