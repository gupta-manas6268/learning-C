// Print this below pattern.

// E 
// D E 
// C D E 
// B C D E 
// A B C D E 















#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n; cin >> n;

    for(int i=1; i<=n; i++){
        for(int j = (n-i+1); j <= n; j++){
            char a = '@';
            cout << (char)(a+j) << " ";
        }
        cout << endl;
    }

    return 0;
}