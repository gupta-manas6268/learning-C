// c:\Users\Manas\Music\OneDrive\Pictures\Screenshots\Screenshot_20231019_041830.png

#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int n, target;
    int a[n];

    int l = 0, r = n-1;

    while(l < r){
        int mid = (l + r) >> 1; // (l + r) >> 1 =→ (l + r)/2
        // int mid = (l + r)/ 2;

        if(a[mid] < target){
        // if(condition){ // condition =→ "It is some condition which we can define to avoid error."
            l = mid + 1;
        }
        else{
            r = mid - 1;
        }
    }
}