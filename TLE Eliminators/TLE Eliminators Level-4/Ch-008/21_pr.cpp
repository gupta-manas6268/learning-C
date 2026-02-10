// Correct.

// 1584. Min Cost to Connect All Points
// https://leetcode.com/problems/min-cost-to-connect-all-points/description/




































#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    
    return 0;
}



class UnionFind{
    private: vector<int> parent, rank;
    public:
        UnionFind(int n){
            rank.assign(n+1, 0); parent.assign(n+1, 0);
            iota(parent.begin(), parent.end(), 0);
        }

        int findSet(int i){ return (parent[i] == i) ? i : parent[i] = findSet(parent[i]);} // O(log(n))
        bool isSameSet(int i, int j){ return findSet(i) == findSet(j);} // O(log(n))

        void unionSet(int i, int j){ // O(log(n))
            if(!isSameSet(i, j)){
                int x = findSet(i), y = findSet(j);
                if(rank[x] > rank[y]){ parent[y] = x;}
                else{
                    parent[x] = y;
                    if(rank[x] == rank[y]){ rank[y]++;}
                }
            }
        }
};

class Solution {
public:
    vector<vector<int>> kruskal(int n, vector<vector<int>>& edges){
        vector<vector<int>> MST;
        UnionFind DSU(n);
        // edges[i] = {u, v, weight}; // Node b/w u & v.
        sort(edges.begin(), edges.end(), // Sort be weight
              [](auto &l, auto &r) {return l[2] < r[2];});
        for(auto &edge : edges){
            int u = edge[0], v = edge[1], weight = edge[2];
            if(DSU.isSameSet(u, v) == true){ continue;}
            DSU.unionSet(u, v);
            MST.push_back(edge);
        }

        return MST;
    }

    int minCostConnectPoints(vector<vector<int>>& points) {
        int n = points.size();
        vector<vector<int>> edges;
        for(int i=0; i < n; i++){
            for(int j = i+1; j < n; j++){
                int dist = (abs(points[i][0] - points[j][0]) + abs(points[i][1] - points[j][1]));
                edges.push_back({i, j, dist});
            }
        }

        vector<vector<int>> MST = kruskal(n, edges);
        int ans = 0;
        for(int i=0; i < MST.size(); i++){
            ans += MST[i][2];
        }
        return ans;
    }
};