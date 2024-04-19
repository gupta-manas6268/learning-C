#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

template<class T>
void display(vector<T> &v){
    cout<<"Displaying this vector"<<endl;
    for(int i=0; i < v.size(); i++){ // 'v.size()' return size of the vector.(I see from "cplusplus" vector page in heading 'capacity'-→ size-→(return size).)
         cout<<v[i]<<" ";
    }
    cout<<endl;
}
signed main(){
    // ios::sync_with_stdio(false); cin.tie(NULL);

    vector<int> v;
    v.push_back(7);
    v.push_back(6);

    vector<int> v2 = v;  // Copying of 'vector'.
    // TC of Copying of 'vector' = O(n).
    v2.push_back(5);
    display(v);
    display(v2);
}