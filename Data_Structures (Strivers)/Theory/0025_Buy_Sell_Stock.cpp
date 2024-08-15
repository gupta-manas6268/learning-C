// Take Screenshots by fastly seeing the Lecture.





#include<bits/stdc++.h>
using namespace std;

int maximum_Profit(vector<int> &prices){
    int mini = prices[0];
    int max_Profit = 0;
    int n = prices.size();
    for(int i=0; i<n; i++){
        int cost = (prices[i] - mini);
        max_Profit = max(max_Profit, cost);
        mini = min(mini, prices[i]);
    }

    return max_Profit;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    
    return 0;
}