#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    bitset<100> a(10);
    cout << a << endl;
    cout << endl;

    bitset<10> b("11");
    cout << b << endl;
    cout << b[5] << endl; // access the i'th bit.
    cout << endl;

    bitset<30> c(10);
    cout << c[5] << endl;
    cout << c << endl;
    cout << c.count() << endl;
    // c.count() => gives no. of set-bits in bitset 'c'.
    // (set = 1)
    cout << endl;

    c.flip(); // flip all the bits.
    cout << c.count() << endl;
    cout << c.any() << endl; // return true if you have atlease one set bit.
    cout << c.all() << endl; // return true if all bits are set.
    cout << c.none() << endl; // return true if all bits are unset.
    cout << endl;

    bitset<4> s1(10);
    bitset<4> s2(11);
    cout << (s1|s2) << endl; // '|' => concatenates two bitsets.


    // Disadvantage of Bitset: Size of bitset should be known at compile time.
}