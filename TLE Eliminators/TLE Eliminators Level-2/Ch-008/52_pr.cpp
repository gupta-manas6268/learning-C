// Correct.

// D. Insert a Progression
// https://codeforces.com/problemset/problem/1671/D




















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
        int n, x; cin >> n >> x;
        vector<int> a;
        for(int i=0; i<n; i++){
            int temp; cin >> temp;
            a.push_back(temp);
        }

        vector<int> b = a;
        sort(b.begin(), b.end());
        int maxi = *max_element(b.begin(), b.end());
        int mini = *min_element(b.begin(), b.end());

        int sum = 0;
        for(int i=0; i<n-1; i++){
            sum += abs(a[i] - a[i+1]);
        }

        vector<int> Mini, Maxi;
        for(int i=0; i<n; i++){
            if(a[i] == mini){
                Mini.push_back(i);
            }
            if(a[i] == maxi){
                Maxi.push_back(i);
            }
        }
        // cout << sum << endl;

        if(a.size() == 1){
            sum += abs(max(x, a[0]) - 1);
        }
        else if((mini == 1) && (maxi >= x)){
            
        }
        else{
            if(mini != 1){
                if((Mini[0] > 0) && (Mini[Mini.size()-1] < n)){
                    int A = (2 * (mini - 1));
                    int B = (a[0] - 1);
                    int C = (a[n-1] - 1);

                    int Final_Mini = min(A, B);
                    Final_Mini = min(Final_Mini, C);
                    sum += Final_Mini;
                }
                else{
                    sum += (mini - 1);
                }
            }

            if(x > maxi){
                if((Maxi[0] > 0) && (Maxi[Maxi.size()-1] < n)){
                    int A = (2 * (x - maxi));
                    int B = (x - a[0]);
                    int C = (x - a[n-1]);

                    int Final_Maxi = min(A, B);
                    Final_Maxi = min(Final_Maxi, C);
                    sum += Final_Maxi;
                }
                else{
                    sum += (x - maxi);
                }
            }
        }

        cout << sum << endl;
    }
}