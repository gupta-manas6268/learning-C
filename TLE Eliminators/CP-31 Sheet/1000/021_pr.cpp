// Wrong (No OUTPUT.)

// C. Double-ended Strings
// https://codeforces.com/problemset/problem/1506/C



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
        string a, b; cin >> a >> b;
        // cout << a << b << endl;
        
        vector<char> A, B;
        int x[27] = {0}, y[27] = {0};
        int Index_1[26][20] = {-1};
        int Index_2[26][20] = {-1};
        for(int i=0; i < a.length(); i++){
            A.push_back(a[i]);

            int index = (((int)a[i]) - 97);
            x[index]++;

            Index_1[index][x[index]-1] = i;
        }
        for(int i=0; i < b.length(); i++){
            B.push_back(b[i]);

            int index = (((int)b[i]) - 97);
            y[index]++;

            Index_2[index][y[index]-1] = i;
        }

        // cout << a << b << endl;

        vector<int> Size;
        for(int i=0; i<a.length(); i++){
            int index = (((int)a[i]) - 97);

            if(y[index] != 0){
                int x = 0;
                int size = 0;
                while(Index_2[index][x] != -1){
                    int j = Index_2[index][x];
                    int first = i;

                    for(j; j < b.length(); j++){
                        if(a[first] == b[j]){ size++;}
                        else{ 
                            Size.push_back(size); 
                            size = 0; break;
                        }
                        first++;
                    }
                    x++;
                }
            }
        }

        int maxi = *max_element(Size.begin(), Size.end());
        int ans = ((a.length() + b.length()) - (2 * maxi));
        cout << ans << endl;
    }
}