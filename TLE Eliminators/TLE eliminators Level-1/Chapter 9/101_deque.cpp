#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    // Deque -→ It has all function of vectors like 'push_back()', 'pop_back()' , size(), etc.
    // But it also has many more functions than vectors. Ex-→ 'push_front()', 'pop_front()', etc.

    deque<int> d;

    for(int i=0; i<10; i++)
        d.push_back (i);

    for(int i = -1; i >= -5; i--)
        d.push_front (i);

    for(int it : d){
        cout << it << " ";
    } cout << endl;

    d.pop_front(); // It 'pop' or 'erase' the first element of the Deque.

    for(int it : d){
        cout << it << " ";
    } cout << endl;

}