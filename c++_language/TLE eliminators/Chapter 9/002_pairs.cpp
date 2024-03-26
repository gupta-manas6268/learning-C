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

    // Dummy g = {1, 2,4 ,5, 5};

    Dummy arr[5] = {
                    {1, 2, 3, 4, 5},
                    {1, 2, 3, 4, 5},
                    {1, 2, 3, 4, 5},
                    {1, 2, 3, 4, 5}
    };

    for(auto &[x1, x2, x3, x4, x5]: arr){
        x1 = 5;
    }

    for(auto [x1, x2, x3, x4, x5]: arr)
    cout << x1 << " " << x2 << " " << x3 << " " << x4 << " " << x5 << endl;

}