// Pair of Vectors.


#include<bits/stdc++.h>
using namespace std;

void display(vector <pair<int, int>> &v){
    cout << "size: " << v.size() << endl;
    for(int i=0; i < v.size(); i++){
        cout << v[i].first << " " << v[i].second << endl;
    }
    cout << endl;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    vector <pair<int, int>> v = {{1, 2} , {2, 3}, {3, 4}};
    display(v);


    vector <pair<int, int>> v2;
    display(v2);
    int n; cin >> n;
    for(int i=0; i<n; i++){
        int x, y; cin >> x >> y;
        v2.push_back({x, y});
        // v.push_back(make_pair(x, y));
    }
    display(v2);

    return 0;
}