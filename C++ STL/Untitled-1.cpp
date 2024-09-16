// Q.: Given 'N' strings, print unique strings in lexicographical
//      order with their frequency
//      N <= 10^5, |S| <= 100.


#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n; cin >> n;
    map<string, int> mp;
    for(int i=0; i<n; i++){
        string temp; cin >> temp;
        auto it = mp.find(temp);
        if(it == mp.end()){
            mp[temp] = 1;
        }
        else{
            mp[temp]++;
        }
    }

    for(auto &it:mp){
        cout << it.first << " " << it.second << endl;
    }

    return 0;
}