// This code is giving me error because of line-4.


#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    vector<int> v = {2, 3, 5, 6, 7};
    for(int i=0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;


    // Simple Iterators.
    vector<int> :: iterator it = v.begin();
    cout << (*(it + 1)) << endl;
    for(it = v.begin(); it != v.end(); it++){  // Valid.
    // for(it = v.begin(); it != v.end(); it += 1){ // Not Valid.
        cout << (*it) << endl;
    }
    cout << endl;


    // Iterators point to pairs.
    vector <pair<int, int>> v_p = {{1, 2}, {2, 3}, {3, 4}};
    vector <pair<int, int>> :: iterator it;
    for(it = v_p.begin(); it != v_p.end(); ++it){
        // cout << (*it).first << " " << (*it).second << endl;
    }

    return 0;
}