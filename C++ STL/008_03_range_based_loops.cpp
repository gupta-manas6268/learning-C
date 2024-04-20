// Range based loops(RBL).


#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {2, 3, 5, 6, 7};
    for(int &value : v){
        value++;
        // cout << value << " ";
    }
    cout << endl;

    for(int value : v){
        value++;
        cout << value << " ";
    }
    cout << endl;

    return 0;
}