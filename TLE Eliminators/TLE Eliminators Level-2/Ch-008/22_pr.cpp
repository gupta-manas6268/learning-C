// 

// A. Constructive Problem
// https://codeforces.com/contest/1819/problem/A



#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int mex(vector<int> a, int n){
    vector<int> b = a;
    sort(b.begin(), b.end());

    int MEX_1;
    if(b[0] == 1){ MEX_1 = 0;}
    else{
        int temp = 0;
        for(int i=0; i<n; i++){
            if(b[i] == temp){
                if(b[i+1] == b[i]){
                    temp--;
                }
                temp++;
            }
            else{
                MEX_1 = temp; break;
            }
        }
    }

    return MEX_1;
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
        vector<int> a, b;
        for(int i=0; i<n; i++){
            int temp; cin >> temp;
            a.push_back(temp);
        }

        b = a;
        sort(b.begin(), b.end());

        int MEX_1 = mex(a, n);
        int MEX_2 = MEX_1 + 1;

        bool ans = true;
        if(MEX_1 != 0){
            if(a.size() == 1){ ans = false;}
            else{
                if(a.size() == MEX_1){ ans = false;}
                else if(b[n-1] < MEX_1){
                    ans = true;
                }
                else{
                    vector<int> :: iterator it;
                    it = find(b.begin(), b.end(), MEX_2);

                    if(it != b.end()){
                        vector<int> index;
                        for(int i=0; i<n; i++){
                            if(a[i] == MEX_2){
                                index.push_back(i);
                            }
                        }

                        if(index.size() == 1){
                            ans = true;
                        }
                        else{
                            bool doubt = false;

                            int index_1 = index[0];
                            int index_2 = index[index.size()-1];

                            for(int i = index_1; i <= index_2; i++){
                                a[i] = MEX_1;
                                if(a[i] < MEX_1){
                                    doubt = true;
                                }
                            }

                            if(doubt == true){
                                int Final_MEX = mex(a, n);

                                if(Final_MEX != MEX_2){
                                    ans = false;
                                } 
                            }
                        }
                    }
                    else{ ans = true;}
                }
            }
        }


        if(ans == true){ cout << "YES" << endl;}
        else{ cout << "NO" << endl;}
    }
}