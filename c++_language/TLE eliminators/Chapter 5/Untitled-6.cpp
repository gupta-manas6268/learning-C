#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int power(int n, int m){
    int ans;
    while (m--){
        ans *= n;
    }
    return ans;
}
signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int n; cin>>n;
    vector<int> vec;
    
    int place = 0;
    int ans1, ans2;

    while(n > 0){
        int a; a = n % 10;
        vec.push_back(a);

        n /= 10;
        place++;
    }
    // Put all 'm = place', 'pow_mul' in for loop.
        
    int pow_mul = power(9, place);

    ans1 = (vec[place - 1] - 1) * pow_mul;
    ans2 = (vec[place - 1]) * ();

}