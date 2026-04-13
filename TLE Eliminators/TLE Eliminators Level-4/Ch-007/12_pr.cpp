// Correct.

// CCHESS - COSTLY CHESS
// https://www.spoj.com/problems/CCHESS/




































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

// Solution
int dijkstra(pair<int,int> source, pair<int,int> dest){ 
    vector<vector<int>> Distance(8, vector<int> (8, INF));
    priority_queue<pair<int, pair<int,int>>, vector<pair<int, pair<int,int>>>, greater<>> pq;

    Distance[source.first][source.second] = 0;
    pq.push({0, {source.first, source.second}}); // (distance, node)

    while(!pq.empty()){
        int current_Distance = pq.top().first;
        int u = pq.top().second.first;
        int v = pq.top().second.second;
        pq.pop();
        
        // Used as Visited array (↓)
        if(current_Distance > Distance[u][v]){ continue;}
        
        if((u+1) <= 7){
            if((v + 2) <= 7){
                int temp = (Distance[u][v] + ((u * (u+1)) + (v * (v+2))));
                if(temp < Distance[u+1][v+2]){ pq.push({temp, {u+1, v+2}});}
                Distance[u+1][v+2] = min(Distance[u+1][v+2], temp);
            }
            if((v - 2) >= 0){
                int temp = (Distance[u][v] + ((u * (u+1)) + (v * (v-2))));
                if(temp < Distance[u+1][v-2]){ pq.push({temp, {u+1, v-2}});}
                Distance[u+1][v-2] = min(Distance[u+1][v-2], temp);
            }
            
            if((u+2) <= 7){
                if((v + 1) <= 7){
                    int temp = (Distance[u][v] + ((u * (u+2)) + (v * (v+1))));
                    if(temp < Distance[u+2][v+1]){ pq.push({temp, {u+2, v+1}});}
                    Distance[u+2][v+1] = min(Distance[u+2][v+1], temp);
                }
                if((v - 1) >= 0){
                    int temp = (Distance[u][v] + ((u * (u+2)) + (v * (v-1))));
                    if(temp < Distance[u+2][v-1]){ pq.push({temp, {u+2, v-1}});}
                    Distance[u+2][v-1] = min(Distance[u+2][v-1], temp);
                }
            }
        }
        if((u-1) >= 0){
            if((v + 2) <= 7){
                int temp = (Distance[u][v] + ((u * (u-1)) + (v * (v+2))));
                if(temp < Distance[u-1][v+2]){ pq.push({temp, {u-1, v+2}});}
                Distance[u-1][v+2] = min(Distance[u-1][v+2], temp);
            }
            if((v - 2) >= 0){
                int temp = (Distance[u][v] + ((u * (u-1)) + (v * (v-2))));
                if(temp < Distance[u-1][v-2]){ pq.push({temp, {u-1, v-2}});}
                Distance[u-1][v-2] = min(Distance[u-1][v-2], temp);
            }
            
            if((u-2) >= 0){
                if((v + 1) <= 7){
                    int temp = (Distance[u][v] + ((u * (u-2)) + (v * (v+1))));
                    if(temp < Distance[u-2][v+1]){ pq.push({temp, {u-2, v+1}});}
                    Distance[u-2][v+1] = min(Distance[u-2][v+1], temp);
                }
                if((v - 1) >= 0){
                    int temp = (Distance[u][v] + ((u * (u-2)) + (v * (v-1))));
                    if(temp < Distance[u-2][v-1]){ pq.push({temp, {u-2, v-1}});}
                    Distance[u-2][v-1] = min(Distance[u-2][v-1], temp);
                }
            }
        }
    }

    int ans = Distance[dest.first][dest.second];
    return ans;
    // TC = O((n + m) * log(n))
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc = 200;

    while (tc--){
        int a = -1, b = -1, c = -1, d = -1; cin >> a >> b >> c >> d;
        
        // O/P
        if(a == -1){ break;}
        int ans = dijkstra({a, b}, {c, d});
        cout << ans << endl;
    }
}