// Solve from this Question.















// 

// B. Make it Divisible by 25
// https://codeforces.com/problemset/problem/1593/B



#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

vector<int> Digits(int n){
    vector<int> ans;
    while(n > 0){
        ans.push_back(n%10);
        n /= 10;
    }
    // reverse(ans.begin(), ans.end());

    return ans;
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

        vector<int> digits = Digits(n);
        bool one = false;
        bool two = false;

        int ans = 0;
        for(int i=0; i < digits.size(); i++){
            if(digits[i] == 0){
                if(one == true){
                    break;
                }
                one = true;
            }
            else if(digits[i] == 5){
                if(one == true){
                    break;
                }
                two = true;
            }
            else{
                if(two == true){
                    if((digits[i] == 2) || (digits[i] = 7)){
                        break;
                    }
                    else{ ans++;}
                }
                else{ ans++;}
                // cout << ans << endl;
            }
        }

        cout << ans << endl;
        cout << endl;
    }
}