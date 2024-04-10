// Wrong.

// Time limit exceeded. 

// https://codeforces.com/problemset/problem/1675/B

#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void print(int *arr, int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    cout << endl;
}

signed main(){
    // ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        int n; cin >> n;
        int a[n];
        for(int i=0; i<n; i++){ cin >> a[i];}

        int ans = 0;
        bool Break = false;

        for(int i=0; i<n-1; i++){
            if(Break == true){
                break;
            }

            if(a[i] >= a[i+1]){
                while(a[i] >= a[i+1]){
                    if((a[i] == 0) && (i > 0)){
                        cout << -1 << endl;
                        Break = true;

                        break;
                    }

                    a[i] /= 2;
                    ans++;

                    // print(a, n);
                }

                for(int j=i-1; j>=0; j--){
                    if(Break == true){
                        break;
                    }

                    if(a[j] >= a[j+1]){
                        while(a[j] >= a[j+1]){
                            if((a[i] == 0) && (i > 0)){
                                cout << -1 << endl;
                                Break = true;

                                break;
                            }

                            a[j] /= 2;
                            ans++;

                            // print(a, n);
                        }
                    }
                    else{ break;}
                }
            }
        }


        if(Break == false){
            cout << ans << endl;
        }
    }
}