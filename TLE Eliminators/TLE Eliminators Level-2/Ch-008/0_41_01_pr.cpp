// Wrong.

// Gray Code
// https://cses.fi/problemset/task/2205



















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

    int n; cin >> n;
    
    vector<string> vec;
    bool half = false;
    int change_bit_1 = n-1;
    for(int i=0; i<n; i++){
        if(i == 0){
            string temp;
            for(int j=0; j<n; j++){
                temp[j] = '0';
            }
            temp[n] = '\0';

            vec.push_back(temp);
        }
        else if(half == false){
            string temp = vec[i-1];
            temp[change_bit_1] = '1';
            if(change_bit_1 == 0){ half = true;}
            change_bit_1--;
        }
        else{
            
        }
    }
}