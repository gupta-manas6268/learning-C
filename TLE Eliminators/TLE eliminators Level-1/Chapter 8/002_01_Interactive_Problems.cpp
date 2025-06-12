// https://codeforces.com/contest/1480/problem/C



#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

map<int, int> mp;

int query(int index){
    if(mp.contains(index)) // This line doesn't show error in mentor's code. So, Check your VScode.
        return mp[index];

    cout << "? " << index;
    int value; cin >> value;

    return mp[index] = value;
}

signed main(){
    // I remove Fast I/O because it will give a wrong answer in "Interactive Problems".
    // We didn't use Fast I/O because after this we have to input first and then it OUTPUT second. But here, we have to output first and then input second.
    
    int n; cin >> n;

    // cout << "? 1" << endl;
    // int index1; cin >> index1;

    int value1 = query(1);
    int value2 = query(2);

    int dupvalue1 = query(1);
    cout << value1 << " " << value2 << " " << dupvalue1 << endl;

    cout << "! ";
}