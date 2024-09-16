// auto.


#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    vector<pair<int, int>> v_p = {{1, 2}, {2, 3}};
    
    for(auto &value: v_p){
        // 'auto' keyword automatically takes the datatype of the 
        //   variable as required.
        cout << value.first << " " << value.second << endl;
    }
    cout << endl;

    return 0;
}