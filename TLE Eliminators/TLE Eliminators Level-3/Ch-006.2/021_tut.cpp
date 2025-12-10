// Write in Register from Page-41 & 42 & 43, Slide-3








// Expectation-Code.

// In Page-28, Slide-3,  Σ => E(Expected Value).

#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int win_Money = 100, lose_Money = 0;
long double avg_Money_After_Playing(int num_People){
    long double sum_Money = 0;
    for(int i=0; i < num_People; i++){
        int random_No = (rand() % 10) + 1;
        // random_No => between 1 to 10.;

        if(random_No <= 4){
            sum_Money += win_Money;
        }
        else{
            sum_Money += lose_Money;
        }
    }

    // Expected Value = (100 * (4/ 10)) + (0 * (6/ 10)).
    // Expected Value = 40.
    long double Expected_Value = (long double)(sum_Money)/ (long double)(num_People);
    return Expected_Value;
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    cout << setprecision(10) << fixed << avg_Money_After_Playing(1e7) << endl;
}