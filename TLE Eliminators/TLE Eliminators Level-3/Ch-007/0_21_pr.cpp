// 

// Room Allocation
// https://cses.fi/problemset/task/1164



#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

bool sortbysec(pair<pair<int,int>, int> &a, pair<pair<int,int>, int> &b){
    return (a.first.second < b.first.second);
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n; cin >> n;
    vector<pair<pair<int,int>, int>> vec;
    for(int i=0; i<n; i++){
        int a, b; cin >> a >> b;
        vec.push_back({{a, b}, i});
    }

    // Solution
    sort(vec.begin(), vec.end(), sortbysec);

    int ans = 0;
    int Ans[n] = {-1};
    int end;
    int second_N = n;
    while(second_N > 0){
        ans++;
        bool Erase[second_N] = {false};
        
        vector<int> End_Time;
        for(int i=0; i < second_N; i++){
            End_Time.push_back(vec[i].first.second);
        }

        int i = 0;
        while(i < second_N){
            if(i == 0){
                end = vec[i].first.second;

                int index = vec[i].second;
                Ans[index] = ans;

                Erase[i] = true;

                int next_Index = upper_bound(End_Time.begin(), End_Time.end(), end) - End_Time.begin();
                i = (next_Index-1);
            }
            else{
                if(end < vec[i].first.first){
                    end = vec[i].first.second;

                    int index = vec[i].second;
                    Ans[index] = ans;

                    Erase[i] = true;

                    int next_Index = upper_bound(End_Time.begin(), End_Time.end(), end) - End_Time.begin();
                    i = (next_Index-1);
                }
            }

            i++;
        }

        for(int i = (second_N-1); i >= 0; i--){
            if(Erase[i] == true){
                vec.erase(vec.begin() + i);
            }
        }
        second_N = vec.size();
    }

    // O/P
    cout << ans << endl;
    for(int i=0; i<n; i++){
        cout << Ans[i] << " ";
    }
    cout << endl;
}