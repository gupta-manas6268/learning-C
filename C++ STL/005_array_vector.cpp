// Array of Vectors.


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
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int n1; cin >> n1;
    vector<int> v[n1];  // Array of Vectors.
    for(int i=0; i < n1; i++){
        int n2; cin >> n2;
        for(int j=0; j < n2; j++){
            int x; cin >> x;
            v[i].push_back(x);
        }
    }

    for(int i=0; i < n1; i++){
        display(v[i]);
    }
    cout << endl;
    cout << v[0][1];

    return 0;
}