// Correct.
// (I Solved it with the help of Hint.)

// 2290. Minimum Obstacle Removal to Reach Corner
// https://leetcode.com/problems/minimum-obstacle-removal-to-reach-corner/description/



































#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    
    return 0;
}



class Solution {
public:
    int dijkstra(vector<vector<int>>& grid){ // O(n + m)
        int n = grid.size(), m = grid[0].size();        
        vector<vector<int>> Distance(n, vector<int> (m, 1e6));
        priority_queue<pair<int, pair<int,int>>, vector<pair<int, pair<int,int>>>, greater<>> pq;

        Distance[0][0] = 0;
        pq.push({0, {0, 0}}); // (distance, node)

        while(!pq.empty()){
            int current_Distance = pq.top().first;
            int u = pq.top().second.first, v = pq.top().second.second;
            pq.pop();

            // Used as Visited array (↓)
            if(current_Distance > Distance[u][v]){ continue;}

            int dx[] = {0, 0, 1, -1}, dy[] = {1, -1, 0, 0};
            for(int i=0; i < 4; i++){
                int new_u = (u + dx[i]), new_v = (v + dy[i]);
                if((new_u >= 0) && (new_u < n) && (new_v >= 0) && (new_v < m)){
                    int temp = 0;
                    if(grid[new_u][new_v] == 1){ temp = 1;}
                    if((Distance[u][v] + temp) < Distance[new_u][new_v]){
                        Distance[new_u][new_v] = (Distance[u][v] + temp);
                        pq.push({Distance[new_u][new_v], {new_u, new_v}});
                    }
                }
            }
        }

        return Distance[n-1][m-1];
        // TC = O((n + m) * log(n))
    }

    int minimumObstacles(vector<vector<int>>& grid) {
        int ans = dijkstra(grid);
        return ans;
    }
};