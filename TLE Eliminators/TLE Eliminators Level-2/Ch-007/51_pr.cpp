// 

// Matched Brackets 2
// https://www.codechef.com/practice/course/zco-inoi-problems/ZCOPRAC/problems/ZCO12003



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

    int n; cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){ cin >> arr[i];}

    vector<int> depth ={0};
    vector<int> max_1 = {0}, max_2 = {0};
    stack<int> st;

    int Depth = 0;
    int Max_1 = 0, Max_2 = 0;
    for(int i=0; i<n; i++){
        if(arr[i]%2 != 0){   // arr[i] => odd.
            Depth++;
            st.push(arr[i]);

            if((arr[i] == 1) && (arr[i+1] == 3)){
                Max_1++;
            }
            else if((arr[i] == 3) && (arr[i+1] == 1)){
                
            }
        }
        else{               // arr[i] => even.
            depth.push_back(Depth);
            Depth--;
            st.pop();
        }
    }
}