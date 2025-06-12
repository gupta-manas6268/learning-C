// Wrong.
// Time-limit exceeded.

// Save Konoha
// https://www.codechef.com/LRNDSA03/problems/SAVKONO





#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        int N, Z; cin >> N >> Z;

        vector<int> vec(N);
        for(int i=0; i<N; i++){
            cin >> vec[i];
        }
        sort(vec.begin(), vec.end());

        int count = 0;
        while(Z > 0){
            if(vec[N-1] == 0){
                cout << "Evacuate" << endl;
                break;
            }
            else if(Z > vec[N-1]){
                Z -= vec[N-1];
                vec[N-1] /= 2;

                count++;
            }
            else{
                count++;
                cout << count << endl;
                break;
            }
            
            sort(vec.begin(), vec.end());
        }
    }
}