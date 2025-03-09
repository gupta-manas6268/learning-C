// Wrong.

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
void spf(){
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
    vector<string> Ans(m);
    spf();
    int on_off[n+1] = {0};
    int Conflict[m] = {0};
    for(int i=0; i<m; i++){
        if(Request[i].first == '+'){
            int num = Request[i].second;
            if(on_off[num] == 1){
                Ans[i] = "Already on";
            }
            else{
                vector<int> prime_factors;
                bool push = true;
                while(num > 1){
                    if(SPF[num] != (SPF[num / SPF[num]])){
                        prime_factors.push_back(SPF[num]);
                    }
                    num /= SPF[num];
                }
                
                for(int it=0; it < prime_factors.size(); it++){
                    if(Conflict[it] != 0){
                        int conflict_num = Conflict[it];
                        push = false;
                        Ans[i] = "Conflict with " + to_string(conflict_num);
                        break;
                    }
                }
                if(push == true){
                    // for(auto it : prime_factors){
                    for(int it = 0; it < prime_factors.size(); it++){
                        Conflict[it] = num;
                    }
                    Ans[i] = "Success";
                    on_off[num] = 1;
                }
            }
        }
        else{
            int num = Request[i].second;
            if(on_off[num] == 0){
                Ans[i] = "Already off";
            }
            else{
                Ans[i] = "Success";
                
                vector<int> prime_factors;
                while(num > 1){
                    if(SPF[num] != (SPF[num / SPF[num]])){
                        prime_factors.push_back(SPF[num]);
                    }
                    num /= SPF[num];
                }
                
                for(auto it : prime_factors){
                    Conflict[it] = 0;
                }
                on_off[num] = 0;
            }
        }
    }

    // O/P
    for(int i=0; i<m; i++){
        cout << Ans[i] << endl;
    }
}