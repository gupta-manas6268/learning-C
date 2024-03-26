#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    // Here, it is not full code which teacher make in DR class, so watch it once more.
    
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d){
        int n = arr1.size();
        int m = arr2.size();
        int count=0;

        for(int i=0; i<n; i++){
            bool ok=true;
            for(int j=0; j<m; j++){
                if(abs(arr1[i]-arr2[j])<=d){
                    ok = false;
                    break;
                }
            }
            if(ok==true)
                count++;
        }
    }
    // Here, Time complexity = O(n*m)
}