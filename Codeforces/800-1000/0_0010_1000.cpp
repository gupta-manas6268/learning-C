// Wrong.

// B. Swap and Delete
// https://codeforces.com/problemset/problem/1913/B


#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        string s; cin >> s;

        int Size = s.size();
        int cost = 0;
        int index;

        if(Size == 1){ 
            cost = 1;
            cout << cost << endl;
        }
        else{
            for(int i=0; i < Size; i++){
                if((i + 1) == Size){
                    cost++;
                }
                else if(s[i] != s[i+1]){
                    swap(s[i], s[i+1]);
                    i++;
                }
                else{
                    index = i;
                    for(int j = index+1; j < Size; j++){
                        if(s[j] != s[j+1]){
                            swap(s[j], s[j+1]);
                            for(int k = j; k >= index; k--){
                                swap(s[k], s[k-1]);
                            }
                            break;
                        }
                    }
                    // cost++;
                }
            }
            cout << cost << endl;
        }
    }
}