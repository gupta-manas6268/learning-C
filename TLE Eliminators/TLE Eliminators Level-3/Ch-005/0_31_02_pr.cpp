// Correct.
// (This is My 2nd time code.)

// B. Colliders
// https://codeforces.com/problemset/problem/154/B



































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

// Prime Factors Sieve
const int num = 1e5+5;  // You put 'num' according to Problem.
int SPF[num];
void Prime_Factors_Sieve(){ // O(n * log(log(n)))
    for(int i=0; i < num; i++){
        SPF[i] = i;
    }
    for(int i=2; i < num; i++){
        if(SPF[i] == i){
            for(int j = i*i; j < num; j += i){
                if(SPF[j] == j){
                    SPF[j] = i;
                }
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
    int n, m; cin >> n >> m;
    string sign[m];
    vector<int> requests(m);
    for(int i=0; i < m; i++){ cin >> sign[i] >> requests[i];}

    // Solution
    Prime_Factors_Sieve();
    vector<pair<int,int>> factor_freq(1e5+5, {0,-1});
    vector<int> On_Off(1e5+5, 0);

    for(int i=0; i < m; i++){
        if(sign[i] == "+"){ // On
            if(On_Off[requests[i]] == 1){
                cout << "Already on" << endl;
            }
            else{
                int num = requests[i];
                int temp = requests[i];
                vector<int> prime_factors;
                while(temp > 1){
                    prime_factors.push_back(SPF[temp]);
                    temp /= SPF[temp];
                }

                bool Fill = true;
                int conflict = -1;
                for(int j=0; j < prime_factors.size(); j++){
                    if(factor_freq[prime_factors[j]].first != 0){
                        Fill = false;
                        conflict = factor_freq[prime_factors[j]].second;
                        break;
                    }
                }
                if(Fill == true){
                    for(int j=0; j < prime_factors.size(); j++){
                        factor_freq[prime_factors[j]] = {1, num};
                    }
                    On_Off[num] = 1;
                }

                if(Fill == true){
                    cout << "Success" << endl;
                }
                else{
                    cout << "Conflict with " << conflict << endl;
                }
            }
        }
        else{ // Off
            if(On_Off[requests[i]] == 1){
                int temp = requests[i];
                vector<int> prime_factors;
                while(temp > 1){
                    prime_factors.push_back(SPF[temp]);
                    temp /= SPF[temp];
                }
                for(int j=0; j < prime_factors.size(); j++){
                    factor_freq[prime_factors[j]] = {0,-1};
                }

                On_Off[requests[i]] = 0;
                cout << "Success" << endl;
            }
            else{ cout << "Already off" << endl;}
        }
    }
}