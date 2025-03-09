// Correct.
// This is Mentor's code.

// B. Colliders
// https://codeforces.com/problemset/problem/154/B



































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

const int val = 1e5;
int SPF[val+1];
void spf(){  // O(1e5 * log(log(1e5))).
    for(int i=0; i <= val; i++){
        SPF[i] = i;
    }
    for(int i=2; i <= val; i++){
        if(SPF[i] == i){
            for(int j = i*i; j <= val; j += i){
                if(SPF[j] == j){
                    SPF[j] = i;
                }
            }
        }
    }
}

vector<int> Prime_Factors(int n){ // O(log(n)).
    vector<int> primes;
    while(n > 1){
        int x = SPF[n];
        while(n%x == 0){ 
            n /= x;
        }
        primes.push_back(x);
    }

    return primes;
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n, m; cin >> n >> m;
    vector<pair<char,int>> Request(m);
    for(int i=0; i<m; i++){ 
        char temp; cin >> temp;
        int val; cin >> val;
        Request[i] = {temp, val};
    }

    // Solution
    spf();
    int Occupied[n+1] = {0};
    int is_Active[n+1] = {0};

    for(int i=0; i<m; i++){
        int num = Request[i].second;
        vector<int> primes = Prime_Factors(num);

        if(Request[i].first == '+'){
            if(is_Active[num] != 0){
                cout << "Already on" << endl;
            }
            else{
                int collision = 0;

                for(auto &i : primes){
                    if(Occupied[i] != 0){
                        collision = Occupied[i];
                    }
                }

                if(collision != 0){
                    cout << "Conflict with " << collision << endl;
                }
                else{
                    cout << "Success" << endl;

                    for(auto &i : primes){
                        Occupied[i] = num;
                    }
                    is_Active[num] = 1;
                }
            }
        }
        else{
            if(is_Active[num] == 0){
                cout << "Already off" << endl;
            }
            else{
                cout << "Success" << endl;
                is_Active[num] = 0;

                for(auto &i : primes){
                    Occupied[i] = 0;
                }
            }
        }
    }

    // TC = O(1e5 * log(log(1e5)) + (m * log(n))).
}