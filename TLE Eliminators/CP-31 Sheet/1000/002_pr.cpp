// Correct.

// C. Raspberries
// https://codeforces.com/problemset/problem/1883/C
































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

    int tc; cin >> tc;

    while (tc--){
        int n, k; cin >> n >> k;
        int a[n];
        for(int i=0; i<n; i++){ 
            cin >> a[i];     
        }

        vector<int> divisible;
        bool Divide = false;
        int two = 0;
        if((k == 2) || (k == 3) || (k == 5)){
            for(int i=0; i<n; i++){
                int temp = (a[i] % k);

                if(temp == 0){ Divide = true; break;}
                else{
                    temp = (k - temp);
                    divisible.push_back(temp);
                }
            }
        }
        else{
            for(int i=0; i<n; i++){
                if(a[i]%k == 0){ Divide = true; break;}
                else{
                    if((a[i]%2 == 0) && (two < 2)){ two++;}
                    int temp = (a[i]%k);
                    temp = (k - temp);

                    divisible.push_back(temp);
                }
            }
        }

        int ans = 0;
        if((k == 2) || (k == 3) || (k == 5)){
            if(Divide != true){
                ans = *min_element(divisible.begin(), divisible.end());
            }
        }
        else{
            if(Divide != true){
                if(two == 2){ ans = 0;}
                else if(two == 1){ ans = 1;}
                else{
                    int mini = *min_element(divisible.begin(), divisible.end());

                    if(mini == 1){ ans = 1;}
                    else{ ans = 2;}
                }
            }
        }

        cout << ans << endl;
    }
}