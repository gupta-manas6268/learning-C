// Vector of Vector.


#include<bits/stdc++.h>
using namespace std;

void display(vector <int> &v){
    cout << "size: " << v.size() << endl;
    for(int i=0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

int main(){
    int n1; cin >> n1;

    vector<vector<int>> v;  // Vector of Vector.
    for(int i=0; i < n1; i++){
        int n2; cin >> n2;

        vector<int> temp;
        for(int j=0; j < n2; j++){
            int x; cin >> x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }

    for(int i=0; i < v.size(); i++){
        display(v[i]);
    }
    cout << endl;
    cout << v[0][1];

    return 0;
}