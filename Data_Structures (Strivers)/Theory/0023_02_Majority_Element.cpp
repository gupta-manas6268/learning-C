// Take Screenshots by fastly seeing the Lecture.





#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> v){
    int count = 0;
    int element;
    for(int i=0; i < v.size(); i++){
        if(count == 0){
            count = 1;
            element = v[i];
        }
        else if(v[i] == element){
            count++;
        }
        else{
            count--;
        }
    }

    int count_1 = 0;
    for(int i=0; i < v.size(); i++){
        if(v[i] == element){ count_1++;}
    }
    if(count_1 > (v.size()/ 2)){
        return element;
    }
    return -1;


    // TC = O(n).
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    
    return 0;
}