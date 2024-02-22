// #include<bits/stdc++.h>
#include <iostream>
#include <vector>
#include <climits>

using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void display(vector<int> &v){
    for(int i=0; i < v.size(); i++){ // 'v.size()' return size of the vector.(I see from "cplusplus" vector page in heading 'capacity'-→ size-→(return size).)
         cout<<v[i]<<" ";
         cout<<v.at(i)<<" ";
    }
    cout<<endl;
}
signed main(){
    // ios::sync_with_stdio(false); cin.tie(NULL);

    vector<int> vec1;
    // push-back.

    int element, size;
    cout<<"Enter the size of your vector: ";
    cin>>size;
    for(int i=0; i<size; i++){
        cout<<"Enter an element to add to this vector: ";
        cin>>element;
        vec1.push_back(element);
    }
    // vec1.pop_back(); // 'pop_back()' -→ Deletes the last element of the function.
    display(vec1);
    // vector<int> :: iterator iter = vec1.begin();
    // vec1.insert(iter+1, 5, 566);
    display(vec1);
}