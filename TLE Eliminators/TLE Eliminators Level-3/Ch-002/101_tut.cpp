// Interactive Problem.



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

    int count = 0;

    int hidden = 46;
    while(true){
        int input; cin >> input;
        if(input == hidden){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }

        count++;
        if(count > 10){ break;}
    }
}