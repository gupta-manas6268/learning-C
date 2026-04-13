#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n, m, c_l, c_e, v; cin >> n >> m >> c_l >> c_e >> v;
    vector<int> l, e;
    for(int i=0; i < c_l; i++){ cin >> l[i];}
    for(int i=0; i < c_e; i++){ cin >> e[i];}
    int q; cin >> q;
    for(int i=0; i < q; i++){
        int x_1, y_1, x_2, y_2; cin >> x_1 >> y_1 >> x_2 >> y_2;

        // Solution
        int index_11 = lower_bound(l.begin(), l.end(), y_1) - l.begin();
        int index_12 = lower_bound(l.begin(), l.end(), y_2) - l.begin();
        int index_21 = lower_bound(e.begin(), e.end(), y_1) - e.begin();
        int index_22 = lower_bound(e.begin(), e.end(), y_2) - e.begin();

        int mini = min(y_1, y_2), maxi = max(y_1, y_2);
        int time = 1e10;
        // Stairs
        if(c_l > 0){

            // Runtime Error, here if (index_11 = n).







            if((index_11 != c_l) && (index_12 != c_l)){
                if(((l[index_11] >= mini) && (l[index_11] <= maxi)) || ((l[index_12] >= mini) && (l[index_12] <= maxi))){ // Between points.
                    time = min(time, abs(y_1 - y_2) + abs(x_1 - x_2));
                }
            }
            else{
                int temp_1, temp_2;
                // temp_1
                if((index_11 > 0) && (index_11 < c_l)){
                    temp_1 = min(min(abs(l[index_11] - y_1), abs(l[index_11-1] - y_1)), min(abs(l[index_11] - y_2), abs(l[index_11-1] - y_2)));
                }
                else if(index_11 == 0){
                    temp_1 = min(abs(l[index_11] - y_1), abs(l[index_11] - y_2));
                }
                else if(index_11 == c_l){
                    temp_1 = min(abs(l[index_11-1] - y_1), abs(l[index_11-1] - y_2));
                }
                
                // temp_2
                if((index_12 > 0) && (index_12 < c_l)){
                    temp_2 = min(min(abs(l[index_12] - y_1), abs(l[index_12-1] - y_1)), min(abs(l[index_12] - y_2), abs(l[index_12-1] - y_2)));
                }
                else if(index_12 == 0){
                    temp_2 = min(abs(l[index_12] - y_1), abs(l[index_12] - y_2));
                }
                else if(index_12 == c_l){
                    temp_2 = min(abs(l[index_12-1] - y_1), abs(l[index_12-1] - y_2));
                }
                
                int temp = min(temp_1, temp_2);
                time = min(time, abs(y_1 - y_2) + abs(x_1 - x_2) + (2 * temp));
            }
        }
        
        // Elevators
        if(c_l > 0){
            int quotient = (abs(x_1 - x_2) / v);
            if((quotient * v) != abs(x_1 - x_2)){
                quotient++;
            }

            if((index_21 != c_e) && (index_22 != c_e)){
                if(((l[index_21] >= mini) && (l[index_21] <= maxi)) || ((l[index_22] >= mini) && (l[index_22] <= maxi))){ // Between points.
                    time = min(time, abs(y_1 - y_2) + quotient);
                }
            }
            else{
                int temp_1, temp_2;
                // temp_1
                if((index_21 > 0) && (index_21 < c_l)){
                    temp_1 = min(min(abs(l[index_21] - y_1), abs(l[index_21-1] - y_1)), min(abs(l[index_21] - y_2), abs(l[index_21-1] - y_2)));
                }
                else if(index_21 == 0){
                    temp_1 = min(abs(l[index_21] - y_1), abs(l[index_21] - y_2));
                }
                else if(index_21 == c_l){
                    temp_1 = min(abs(l[index_21-1] - y_1), abs(l[index_21-1] - y_2));
                }
                
                // temp_2
                if((index_22 > 0) && (index_22 < c_l)){
                    temp_2 = min(min(abs(l[index_22] - y_1), abs(l[index_22-1] - y_1)), min(abs(l[index_22] - y_2), abs(l[index_22-1] - y_2)));
                }
                else if(index_22 == 0){
                    temp_2 = min(abs(l[index_22] - y_1), abs(l[index_22] - y_2));
                }
                else if(index_22 == c_l){
                    temp_2 = min(abs(l[index_22-1] - y_1), abs(l[index_22-1] - y_2));
                }
                
                int temp = min(temp_1, temp_2);
                time = min(time, abs(y_1 - y_2) + quotient + (2 * temp));
            }
        }

        // O/P
        cout << time << endl;
    }
}