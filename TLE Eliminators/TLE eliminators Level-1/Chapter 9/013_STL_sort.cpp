#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    vector<int> vec1 = {1, 2, 4, 5, 3, 12, 4, 2};

    sort(vec1.begin(), vec1.end());

    for(int i=0; i<8; i++){ cout << vec1[i] << " ";}
    cout << endl;

    vector<int> vec2 = {2, 1, 0};

    sort(vec2.begin(), vec2.begin() + 2); // It sort vector upto t[0] to t[2] i.e. It sort only t[0] & t[1] and it does not sort t[2].
    cout << vec2[0] << " " << vec2[1] << " " << vec2[2] << endl;


    vector<int> vec3 = {1, 4, 3, 2, 7, 4, 12};

    sort(vec3.begin(), vec3.end(), greater<>()); // It sort vector in Decreasing Order.

    for(auto i: vec3)
        cout << i << " ";
    cout << endl;

    vector<int> vec4 = {1, 4, 3, 2, 7, 4, 12};

    cout << count(vec4.begin(), vec4.end(), 4) << endl; // OUTPUT: 2. Because '4' occurs '2' times in this Vector.



}