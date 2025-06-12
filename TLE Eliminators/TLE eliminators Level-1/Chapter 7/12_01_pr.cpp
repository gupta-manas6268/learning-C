// Wrong.


// https://leetcode.com/problems/find-pivot-index/






#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){ cin >> arr[i];}

    bool Break = false;

    for(int i=0; i<n; i++){
        int left = 0, right = 0;

        if(i == 0){
            left = 0;

            for(int j=i+1; j<n; j++){
                right += arr[j];
            }
            
            if(left == right){
                cout << i << endl;
                
                Break = true;
            }
        }
        
        if(Break == true){ break;}

        else if(i == (n-1)){
            right = 0;

            for(int j=0; j<i; j++){
                left += arr[j];
            }

            if(left == right){
                cout << i << endl;
                Break = true;
            }
        }

        if(Break == true){ break;}

        else{
            for(int j=0; j<i; j++){
                left += arr[j];
            }
            
            for(int k=i+1; k<n; k++){
                right += arr[k];
            }

            if(left == right){
                cout << i << endl;
                Break = true;
            }
        }

        if(Break == true){ break;}

        
    }

    if(Break == false){
        cout << -1 << endl;
    }
    
}