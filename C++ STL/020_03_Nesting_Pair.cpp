#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    map <pair<string, string>, vector<int>> m;

    int n; cin >> n;
    for(int i=0; i<n; i++){
        string first_Name, last_Name;
        int count;
        cin >> first_Name >> last_Name >> count;

        for(int j=0; j < count; j++){
            int x; cin >> x;
            m[{first_Name, last_Name}].push_back(x);
        }
    }
    cout << endl;

    for(auto &Pair: m){
        auto &full_Name = Pair.first;
        auto &list = Pair.second;

        cout << full_Name.first << " " << full_Name.second << endl;
        cout << list.size() << endl;
        for(auto &element : list){
            cout << element << " ";
        }
        cout << endl;
    }


    // I/P:
    // 3
    // a b 4
    // 1 2 3 4
    // c d 2
    // 1 2
    // d f 3
    // 2 3 4

    // O/P:
    // a b
    // 4
    // 1 2 3 4
    // c d
    // 2
    // 1 2 
    // d f
    // 3
    // 2 3 4

    return 0;
}