// Take Screenshots by fastly seeing the Lecture.






// Longest Successive Elements 
// https://www.naukri.com/code360/problems/longest-successive-elements_6811740







#include<bits/stdc++.h>
using namespace std;

int longest_Successive_Elements(vector<int> &a){
    int n = a.size();
    if(n == 0){ return 0;}

    int longest = 1;
    unordered_set<int> st;
    for(int i = 0; i < n; i++){
        st.insert(a[i]);
    }

    for(auto it: st){
        if(st.find(it - 1) == st.end()){
            int count = 1;
            int x = it;
            while(st.find(x+1) != st.end()){
                x = x + 1;
                count = count + 1;
            }
            longest = max(longest, count);
        }
    }

    return longest;

    // TC = O(n).
    // SC = O(n).
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    
    return 0;
}