#include<bits/stdc++.h>
using namespace std;

string read(int n, vector<int> book, int target){
    map<int,int> mp;
    for(int i=0; i<n; i++){
        int a = book[i];
        int more = (target - a);
        if(mp.find(more) != mp.end()){
            return "YES";
        }
        mp[a] = i;
    }
    return "NO";

    // TC = O(n * log(n)).
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n; cin >> n;
    vector<int> Book(n);
    for(int i=0; i<n; i++){
        cin >> Book[i];
    }
    int target; cin >> target;
    cout << read(n, Book, target);
    
    return 0;
}