// Correct.
// This is My code with help of Chat-GPT
//  and 5-times failure in Codeforces.

// A. Orac and LCM
// https://codeforces.com/problemset/problem/1349/A




































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int power(int base, int exp){
    int result = 1;

    while(exp > 0){
        if((exp % 2) == 1){
            result *= base;

            base *= base;
            exp /= 2;
        }
        else{
            base *= base;
            exp /= 2;
        }
    }

    return result;
}

vector<int> spf(int n){
    vector<int> SPF(n+1);
    for(int i=0; i <= n; i++){
        SPF[i] = i;
    }
    for(int i=2; i <= n; i++){
        if(SPF[i] == i){
            for(int j = i*i; j <= n; j += i){
                if(SPF[j] == j){
                    SPF[j] = i;
                }
            }
        }
    }

    return SPF;
}

vector<int> sieve(int n){
    vector<bool> primes(n+1);
    for(int i=0; i <= n; i++){
        primes[i] = true;
    }

    primes[0] = primes[1] = false;
    for(int i=2; i*i <= n; i++){
        if(primes[i] == true){
            for(int j = i*i; j <= n; j += i){
                primes[j] = false;
            }
        }
    }

    vector<int> ans;
    for(int i=2; i <= n; i++){
        if(primes[i] == true){
            ans.push_back(i);
        }
    }

    return ans;
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n; cin >> n;
    vector<int> a(n);
    int Maxi = 0;
    for(int i=0; i<n; i++){ 
        cin >> a[i];
        Maxi = max(Maxi, a[i]);
    }

    // Solution
    vector<int> SPF = spf(Maxi);

    vector<int> primes;
    for(int i=2; i < SPF.size(); i++){
        if(SPF[i] == i){
            primes.push_back(i);
        }
    }
    int primes_Size = primes.size();

    vector<vector<pair<int,int>>> Factors;
    for(int i=0; i<n; i++){
        int num = a[i];
        vector<pair<int,int>> temp;

        int Power = 0;
        while(num > 1){
            Power++;
            if(SPF[num] != SPF[num / SPF[num]]){
                temp.push_back({SPF[num], Power});
                Power = 0;
            }
            num /= SPF[num];
        }
        Factors.push_back(temp);
    }

    vector<pair<int,int>> Final_Factors;
    for(int i=0; i < primes_Size; i++){
        int val = primes[i];
        vector<int> temp;
        
        int Not_found = 0;
        bool Continue = false;

        for(int j=0; j<n; j++){
            int index = lower_bound(Factors[j].begin(), Factors[j].end(), make_pair(val, 0LL)) - Factors[j].begin();
            Not_found++;
            if(index != Factors[j].size()){
                int Prime_Val = Factors[j][index].first;
                if(Prime_Val == val){
                    temp.push_back(Factors[j][index].second);
                    Not_found--;
                }
            }

            if(Not_found >= 2){ Continue = true; break;}
        }

        if(Continue == true){ continue;}
        sort(temp.begin(), temp.end());

        if(temp.size() == (n-1)){
            Final_Factors.push_back({val, temp[0]});
        }
        else if(temp.size() == n){
            Final_Factors.push_back({val, temp[1]});
        }
    }

    int ans = 1;
    int Final_Size = Final_Factors.size();
    for(int i=0; i < Final_Size; i++){
        ans *= power(Final_Factors[i].first, Final_Factors[i].second);
    }

    // O/P
    cout << ans << endl;
}