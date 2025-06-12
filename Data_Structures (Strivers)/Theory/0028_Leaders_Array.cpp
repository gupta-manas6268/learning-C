// Take Screenshots by fastly seeing the Lecture.






// Superior Elements 
// https://www.naukri.com/code360/problems/superior-elements_6783446





#include<bits/stdc++.h>
using namespace std;

vector<int> superior_Elements(vector<int> &a){
    vector<int> ans;
    int maxi = INT_MIN;
    int n = a.size();
    for(int i = n-1; i >= 0; i--){
        if(a[i] > maxi){
            ans.push_back(a[i]);
        }
        // Keep track of right max.
        maxi = max(maxi, a[i]);
    }

    // TC = O(n * log(n)).
    sort(ans.begin(), ans.end());
    return ans;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    
    return 0;
}