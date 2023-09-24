#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    // Brute-Force method:

    int n; cin>>n;


    bool is_prime = true;
        for(int i=2; i<n; i++)
            if(n%i == 0)
                // not a prime number
                is_prime = false;
                
    cout<<(is_prime ? "Prime" : "Not Prime")<<endl;       
        
    // TC = O(n)
}