// From [03:59] of this Lecture.
// https://www.youtube.com/watch?v=RfYf2IMNDo0



#include<bits/stdc++.h>
using namespace std;

// A Tree node
struct Node{
    char ch;
    int freq;
    Node *left, *right;
};

// Function to allocate a new tree node.
Node *getNode(char ch, int freq, Node* left, Node* right){
    Node* node = new Node();

    node->ch = ch;
    node->freq = freq;
    node->left = left;
    node->right = right;

    return node;
}

// Comparison object to be used to order heap
struct comp{
    bool operator()(Node* l, Node* r){
        // highest priority item has lowest frequency
        return l->freq > r->freq;
    }
};

// Builds Huffman Tree & decode given input text.
void build_Huffman_Tree(string text){
    // count frequency of appearance of each character & store
    //  it in a map.
    unordered_map<char, int> freq;
    for(char ch: text){
        freq[ch]++;
    }

    // Create a priority queue to store leaf nodes of Huffman tree
    priority_queue<Node*, vector<Node*>, comp> pq;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    string text = "Huffman coding is a data compression algorithm";
    build_Huffman_Tree(text);

    return 0;
}