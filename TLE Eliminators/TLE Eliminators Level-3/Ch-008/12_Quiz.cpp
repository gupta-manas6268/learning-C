// Correct.
// (This is My code don't Write it in Note-book.)

// C. Polycarp at the Radio
// https://codeforces.com/problemset/problem/723/C



































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
    int n, m; cin >> n >> m;
    int Min_of_Max = (n/m), Min_Changes = 0;

    int freq[m+1] = {0};
    vector<int> Extra_Index;
    vector<int> ans;
    for(int i=0; i<n; i++){ 
        int temp; cin >> temp;
        ans.push_back(temp);
        
        if(temp <= m){
            freq[temp]++;
            
            if(freq[temp] > Min_of_Max){
                Extra_Index.push_back(i);
            }
        }
        else{ 
            Extra_Index.push_back(i);
        }
    }

    // Solution
    for(int i=1; i <= m; i++){
        if(freq[i] < Min_of_Max){
            int temp_Changes = (Min_of_Max - freq[i]);
            Min_Changes += temp_Changes;

            while(temp_Changes > 0){                
                int Size = Extra_Index.size();

                ans[Extra_Index[Size-1]] = i;
                Extra_Index.pop_back();
                temp_Changes--;
            }
        }
    }

    // O/P
    cout << Min_of_Max << " " << Min_Changes << endl;
    for(int i=0; i<n; i++){
        cout << ans[i] << " ";
    }
    cout << endl;
    // TC = O(n + m).
}