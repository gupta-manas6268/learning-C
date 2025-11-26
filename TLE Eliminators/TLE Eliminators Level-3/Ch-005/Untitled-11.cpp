// '003_Quiz.cpp'


#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

// Power
int power(int base, int exp){
    int result = 1;

    while(exp > 0){
        if((exp % 2) == 1){
            (result *= base) %= MOD;

            (base *= base) %= MOD;
            exp /= 2;
        }
        else{
            (base *= base) %= MOD;
            exp /= 2;
        }
    }

    return result;
}

// Prime Factors Sieve
const int num = 1e7+5;  // You put 'num' according to Problem.
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
    vector<int> a(n), b(m);
    for(int i=0; i < n; i++){ cin >> a[i];}
    for(int i=0; i < m; i++){ cin >> b[i];}
    // cout << "a" << endl;
    
    // Solution
    Prime_Factors_Sieve();
    map<int,int> Factors_1, Factors_2;
    for(int i=0; i < n; i++){
        while(a[i] > 1){
            Factors_1[SPF[a[i]]]++;
            a[i] /= SPF[a[i]];
        }
    }
    for(int i=0; i < m; i++){
        while(b[i] > 1){
            Factors_2[SPF[b[i]]]++;
            b[i] /= SPF[b[i]];
        }
    }
    
    for(auto &Pair : Factors_1){
        int mini = min(Factors_1[Pair.first], Factors_2[Pair.first]);
        Factors_1[Pair.first] -= mini;
        Factors_2[Pair.first] -= mini;
        if(Factors_1[Pair.first] == 0){
            auto it = Factors_1.find(Pair.first);
            Factors_1.erase(it);
        }
        if(Factors_2[Pair.first] == 0){
            auto it = Factors_2.find(Pair.first);
            Factors_2.erase(it);
        }
    }

    vector<int> ans_1, ans_2;
    for(auto &Pair : Factors_1){
        int base = Pair.first, exp = Pair.second;
        int num = (log(1e7) / log(Pair.first));
        while(exp > 0){
            int exp_final = (exp % num);
            int Number = power(base, exp_final);
            ans_1.push_back(Number);
            exp -= exp_final;
        }
    }
    for(auto &Pair : Factors_2){
        int base = Pair.first, exp = Pair.second;
        int num = (log(1e7) / log(Pair.first));
        while(exp > 0){
            int exp_final = (exp % num);
            int Number = power(base, exp_final);
            ans_2.push_back(Number);
            exp -= exp_final;
        }
    }

    // O/P
    if(ans_1.size() == 0){ ans_1.push_back(1);}
    if(ans_2.size() == 0){ ans_2.push_back(1);}

    cout << ans_1.size() << " " << ans_2.size() << endl;
    for(int i=0; i < ans_1.size(); i++){
        cout << ans_1[i] << " ";
    } cout << endl;
    for(int i=0; i < ans_2.size(); i++){
        cout << ans_2[i] << " ";
    } cout << endl;
}