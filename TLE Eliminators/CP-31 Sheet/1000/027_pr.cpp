// 

// B. Fair Numbers
// https://codeforces.com/problemset/problem/1411/B



#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

vector<int> digits(int n){
    vector<int> Digits;
    while(n > 0){
        int temp = (n % 10);
        Digits.push_back(temp);
    }
    reverse(Digits.begin(), Digits.end());

    return Digits;
}

int LCM(vector<int> num, int n){
    int Size = num.size();
    int lcm = 1;
    for(int i=0; i<(Size-1); i++){
        if()
        lcm = ((lcm * num[i])/ __gcd(lcm, num[i]));
    }
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        int n; cin >> n;

        bool fair = false;
        int ans;
        int num = n;
        while(fair == false){
            vector<int> Digits = digits(num);

            int Size = Digits.size();
            if(Digits[Size-1] == 0){

            }
        }
    }
}