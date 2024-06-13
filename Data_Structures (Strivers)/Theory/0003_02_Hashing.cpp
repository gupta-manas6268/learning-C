#include<bits/stdc++.h>
using namespace std;

int Hash[1000000] = {0};  // This line will work fine, as it is a global variable.
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


    int n; cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){ cin >> arr[i];}

    // Precompute
    int Hash[100000] = {0};   // This line works fine.
    // int Hash[1000000] = {0};  // This line will not work as, array size is very big.
                              //  And it is declared in 'main' not a global variable.
    for(int i=0; i<n; i++){
        Hash[arr[i]] += 1;
    }

    int q; cin >> q;
    while(q--){
        int number; cin >> number;
        
        // Fetch
        cout << Hash[number] << endl;
    }

    return 0;
}