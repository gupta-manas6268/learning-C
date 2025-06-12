// 

// 486. Predict the Winner
// https://leetcode.com/problems/predict-the-winner/description/



#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    
    return 0;
}



class Solution {
public:
    bool ans = false;
    void solve(int score_1, int score_2, int move, deque<int> current){
        if(ans == true){ return;}
        if(current.size() == 0){
            if(score_1 >= score_2){ ans = true;}
            return;
        }

        if((move % 2) != 0){ // odd
            deque<int> temp = current;
            temp.pop_front();
            solve(score_1 + current.front(), score_2, move + 1, temp);

            temp = current;
            temp.pop_back();
            solve(score_1 + current.back(), score_2, move + 1, temp);
        }
        else{ // even
            deque<int> temp = current;
            if(current.front() >= current.back()){
                temp.pop_front();
                solve(score_1, score_2 + current.front(), move + 1, temp);
            }
            else{
                temp = current;
                temp.pop_back();
                solve(score_1, score_2 + current.back(), move + 1, temp);
            }
        }
    }
    bool predictTheWinner(vector<int>& nums) {
        int n = nums.size();
        deque<int> current;
        for(int i=0; i < n; i++){
            current.push_back(nums[i]);
        }
        solve(0, 0, 1, current);

        return ans;
    }
};