// 

// C. Powers Of Two
// https://codeforces.com/problemset/problem/1095/C



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

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    int n, k; cin >> n >> k;
    int mini = 0, maxi = n;
    multiset<int> Ans;
    while(n > 0){
        int Log = log2(n);
        mini++;
        Ans.insert(power(2, Log));
        n -= power(2, Log);
    }

    bool ans;
    if((k >= mini) && (k <= maxi)){
        ans = true;
    }
    else{ ans = false;}

    if(ans == true){
        int Size = Ans.size();
        while(mini < k){
            auto it = Ans.begin();
        }
    }
}