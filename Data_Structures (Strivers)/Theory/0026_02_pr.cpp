// Take Screenshots by fastly seeing the Lecture.







// Q.: Rearrange Array elements by sign? (2nd Variety Question.)
// https://www.naukri.com/code360/problems/alternate-numbers_6783445


#include<bits/stdc++.h>
using namespace std;

vector<int> alternate_Numbers(vector<int> &a){
    vector<int> positive, negative;
    int n = a.size();
    for(int i=0; i<n; i++){
        if(a[i] > 0){
            positive.push_back(a[i]);
        }
        else{
            negative.push_back(a[i]);
        }
    }

    if(positive.size() > negative.size()){
        for(int i=0; i < negative.size(); i++){
            a[2*i] = positive[i];
            a[2*i + 1] = negative[i];
        }
        int index = negative.size() * 2;
        for(int i = negative.size(); i < positive.size(); i++){
            a[index] = positive[i];
            index++;
        }
    }
    else{
        for(int i=0; i < positive.size(); i++){
            a[2*i] = positive[i];
            a[2*i + 1] = negative[i];
        }
        int index = positive.size() * 2;
        for(int i = positive.size(); i < negative.size(); i++){
            a[index] = negative[i];
            index++;
        }
    }

    return a;

    // TC = O(n + n).
    // TC = O(2*n).
    
    // SC = O(n).
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    
    return 0;
}