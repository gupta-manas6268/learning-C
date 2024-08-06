// Take Screenshots by fastly seeing the Lecture.





#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> v){
    unordered_map<int,int> mp;
    for(int i=0; i < v.size(); i++){
        mp[v[i]]++;
    }
    for(auto it: mp){
        if(it.second > (v.size()/ 2)){
            return it.first;
        }
    }
    return -1;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    
    return 0;
}