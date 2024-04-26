// 

// B. Make Them Odd
// https://codeforces.com/contest/1277/problem/B


#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    // ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        int n; cin >> n;

        vector<int> arr;
        for(int i=0; i<n; i++){
            int a; cin >> a;
            
            if(a % 2 == 0){
                arr.push_back(a);
            }
        }
        sort(arr.begin(), arr.end());

        map<int, int> m;
        int count = 1;
        for(int i=0; i < arr.size(); i++){
            if(arr[i] == arr[i+1]){
                count++;
            }
            else{
                m[arr[i]] = count;
                count = 1;
            }
        }

        int moves = 0;

        auto it_1 = m.end();
        while(it_1->first % 2 == 0){
            auto it = m.end();
            --it;
            if((m.size() > 1) && (prev(it)->first == it->first)){
                prev(it)->second += it->second;
                m.erase(it);
            }

            int halved_key = it_1->first / 2;
            int second_key = it_1->second;
            m.erase(it_1);
            m[halved_key] = second_key;

            moves++;
        }

        cout << moves << endl;
    }
}