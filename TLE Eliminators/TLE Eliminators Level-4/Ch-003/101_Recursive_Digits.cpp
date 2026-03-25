#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define all(x) x.begin(), x.end() 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

// Count all n-digits no.'s
int func_1(int index, int n){ // O(pow(10, n))
    if(index == n){
        return 1;
    }

    int sum = 0;
    for(int i=0; i <= 9; i++){
        sum += func_1(index+1, n);
    }
    
    return sum;
}

// Print all n-digits no.'s
void func_2(int index, int n, int num_Made){ // O(pow(10, n))
    if(index == n){
        cout << num_Made << endl;
        return;
    }

    for(int i=0; i <= 9; i++){
        func_2(index+1, n, (num_Made * 10) + i);
    }
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    int n = 3;
    cout << func_1(0, n) << endl;
    cout << endl;
    func_2(0, n, 0);
}