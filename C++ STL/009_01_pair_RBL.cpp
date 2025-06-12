// Pair RBL.


#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    vector<pair<int, int>> v_p = {{1, 2}, {2, 3}};
    for(pair<int, int> &value: v_p){
        cout << value.first << " " << value.second << endl;
    }
    cout << endl;
    
    return 0;
}