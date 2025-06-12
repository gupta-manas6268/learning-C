// 

// C. Chocolate Bunny
// https://codeforces.com/problemset/problem/1407/C






#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    // I/P
    int n; cin >> n;

    // Interactive
    int ans[n] = {0};

    vector<int> empty_Index;
    for(int i=0; i<n; i++){
        empty_Index.push_back(i);
    }

    while(empty_Index.empty() != true){
        vector<int> Erase;
        for(int i=0; i < (empty_Index.size()-2); i++){
            cout << "? " << empty_Index[i]+1 << " " << empty_Index[i+1]+1 << endl;
            int temp_1; cin >> temp_1;

            cout << "? " << empty_Index[i+1]+1 << " " << empty_Index[i]+1 << endl;
            int temp_2; cin >> temp_2;
    
            if(temp_1 < temp_2){ 
                ans[empty_Index[i]] = temp_2;
                Erase.push_back(empty_Index[i]);
                if(temp_2 >= (n/2 + n%2)){  // (n/2 + n%2) => (Ceil of 'n/2'.)
                    if(temp_1 == 0){ temp_1 = temp_2;}
                    ans[empty_Index[i+1]] = (temp_2 + temp_1);
                    Erase.push_back(empty_Index[i+1]);
                    i++;
                }
            }
            else{ 
                ans[empty_Index[i+1]] = temp_1;
                Erase.push_back(empty_Index[i+1]);
                if(temp_1 >= (n/2 + n%2)){  // (n/2 + n%2) => (Ceil of 'n/2'.)
                    if(temp_2 == 0){ temp_2 = temp_1;}
                    ans[empty_Index[i]] = (temp_1 + temp_2);
                    Erase.push_back(empty_Index[i]);
                }
                i++;
            }
        }

        for(int i=0; i < Erase.size(); i++){
            empty_Index.erase(empty_Index.begin() + Erase[i]);
        }
        if(empty_Index.size() == 1){
            int sum = 0;
            for(int i=0; i<n; i++){ sum += ans[i];}

            int val = ((n * (n+1))/2) - sum;
            ans[empty_Index[0]] == val;
            empty_Index.clear();
        }
    }

    // O/P
    cout << "! ";
    for(int i=0; i<n; i++){ cout << ans[i] << " ";}
    cout << endl;
}