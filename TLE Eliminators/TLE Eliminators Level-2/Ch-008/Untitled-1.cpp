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

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int q; cin >> q;
    for(int i=0; i < q; i++){
        int k; cin >> k;

        // Solution
        int digit = 0;
        int num;
        for(int j=1; j; j++){
            int d = digit;
            digit += (power(10, j) - power(10, j-1));

            if(digit > k){
                digit = d; 
                num = j;
                break;
            }
        }
        k -= digit;
        
        int ans = (power(10, num-1) - 1);
        int val = (k % num);
        k /= num;
        ans += k;

        char Final_Ans;
        if(val == 0){
            string str = to_string(ans);
            Final_Ans = str[str.length()-1];
        }
        else{
            string str = to_string(ans+1);
            Final_Ans = str[val];
        }

        // O/P
        cout << Final_Ans << endl;
    }
}