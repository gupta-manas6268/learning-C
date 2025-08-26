#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    // I/P
    int n; cin >> n;
    vector<int> a(n);
    for(int i=0; i < n; i++){ cin >> a[i];}

    // Solution
    int depth = 0, ans_1 = 0, ans_2 = 0;
    int curr_ans1 = 0, curr_ans2 = 0;
    stack<int> st;
    for(int i=0; i < n; i++){
        if((a[i] == 1) || (a[i] == 3)){
            if(a[i] == 1){
                curr_ans1 += 2;
                if(curr_ans2 != 0){
                    curr_ans2 += 2;
                }
            }
            if(a[i] == 3){
                curr_ans2 += 2;
                if(curr_ans1 != 0){
                    curr_ans1 += 2;
                }
            }
        }
        else{
            
        }
    }

    return 0;
}