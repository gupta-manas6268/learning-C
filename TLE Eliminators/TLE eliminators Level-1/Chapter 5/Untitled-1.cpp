



#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int prime(int n){
    bool prime = true;

    for(int i=0; i<n; i++){
        if(n%i == 0){ prime = false;}
    }
    if(prime = true){ return 0;}
    else{ return 1;}
}

int LCM(int n, int m){
    vector<int> vec1; int div1 = 0;
    vector<int> vec2; int div2 = 0;

    for(int i=0; i<n; i++){
        if(n % i == 0){
            int a = prime(i);
            if(a == 0){ vec1.push_back(i); div1++;}
        }
    }
    for(int j=0; j<m; j++){
        if(m % j == 0){
            int b = prime(j);
            if(b == 0){ vec2.push_back(j); div2++;}
        }
    }
}
signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        int n; cin>>n;
        int arr[n];

        for(int i=0; i<n; i++){
            cin>>arr[i];
            vector<int> vec;

            for(int j=2; j<arr[i]; j++){
                if(arr[i] % j == 0){
                    vec.push_back(j);
                }
            }
        }

    }
}