// Wrong (TLE)
//  I solved it with the help of Hints & Chat-GPT.

// D. Secret Passwords
// https://codeforces.com/problemset/problem/1263/D





#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

vector<int> visited(26, 0);
void DFS(auto node, map<char,set<int>>& adj_List_1, map<int,set<char>>& adj_List_2){ // O(n)
    if(typeid(node).name() == typeid(char).name()){
        visited[node-'a'] = 1;
        for(auto & neighour : adj_List_1[node]){
            DFS(neighour, adj_List_1, adj_List_2);
        }
    }
    else{
        for(auto & neighour : adj_List_2[node]){
            if(visited[neighour-'a'] == 0){ // Not Visited
                DFS(neighour, adj_List_1, adj_List_2);
            }
        }
    }
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n; cin >> n;
    vector<string> s(n+1);
    for(int i=1; i <= n; i++){
        cin >> s[i];
    }

    // Solution
    map<char,set<int>> adj_List_1;
    map<int,set<char>> adj_List_2;

    // Inserting in 'adj_list_1'
    vector<int> Char(26, 0);
    for(int i=1; i <= n; i++){
        int Size = s[i].length();
        for(int j=0; j < Size; j++){
            char temp = s[i][j];
            if(Char[temp-'a'] == 0){
                set<int> v;
                v.insert(i);
                adj_List_1[temp] = v;

                Char[temp-'a'] = 1;
            }
            else{
                set<int> v = adj_List_1[temp];
                v.insert(i);
                adj_List_1[temp] = v;
            }
        }
    }
    
    // Inserting in 'adj_list_2'
    for(int i=1; i <= n; i++){
        int Size = s[i].length();
        for(int j=0; j < Size; j++){
            set<char> v = adj_List_2[i];
            v.insert(s[i][j]);
            adj_List_2[i] = v;
        }
    }

    int ans = 0;
    for(int i=0; i < 26; i++){
        if((Char[i] == 1) && (visited[i] == 0)){
            DFS(char(i+'a'), adj_List_1, adj_List_2);
            ans++;
        }
    }

    // O/P
    cout << ans << endl;
}