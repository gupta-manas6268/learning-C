#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

struct Dummy{
    int a, b, c, d, e;
};

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    pair<int, int> p{1, 4},
                   q{5, 9};

    cout << (p < q) << endl;

    Dummy arr[5] = {
                    {1, 2, 3, 4, 5},
                    {1, 2, 3, 4, 5},
                    {1, 2, 3, 4, 5},
                    {1, 2, 3, 4, 5}
    };

    for(auto &[x1, x2, x3, x4, x5]: arr){
        cout << x1 << " " << x2 << " " << x3 << " " << x4 << " " << x5 << endl;

    }

    for(auto i: arr){
        cout << i.a << " " << i.b << " " << i.c << " " << i.d;
    }
    vector<pair<int, int>> v = {q, p};
    ranges::sort(v);

    // structured binding (From C++17)
    for(auto [x, y]: v){
        cout << x << " " << y << endl;
    }
}