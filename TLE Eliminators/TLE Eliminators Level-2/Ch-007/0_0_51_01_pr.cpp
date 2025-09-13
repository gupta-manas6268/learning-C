// Wrong.
// (I write this Code in 2nd-time, but it
//   failed in Hidden Test-Cases.)

// Matched Brackets 2
// https://www.codechef.com/practice/course/zco-inoi-problems/ZCOPRAC/problems/ZCO12003




































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
    int curr_depth = 0, curr_ans1 = 0, curr_ans2 = 0;
    stack<int> st;
    stack<int> st_1, st_2;
    for(int i=0; i < n; i++){
        if((a[i] == 1) || (a[i] == 3)){
            st.push(a[i]);
            if(a[i] == 1){
                st_1.push(1);
                curr_ans1 += 2;
                if(st_2.empty() != true){
                    curr_ans2 += 2;
                }
            }
            if(a[i] == 3){
                st_2.push(3);
                curr_ans2 += 2;
                if(st_1.empty() != true){
                    curr_ans1 += 2;
                }
            }
        }
        else{
            // Depth
            int A = st.top();
            st.pop();
            if(st.empty() != true){
                int B = st.top();
                if(A != B){
                    curr_depth++;
                }
            }
            else{
                depth = max(depth, curr_depth);
                curr_depth = 0;
            }

            if(a[i] == 2){
                st_1.pop();
                if(st_1.empty() == true){
                    ans_1 = max(ans_1, curr_ans1);
                    curr_ans1 = 0;
                }
            }
            if(a[i] == 4){
                st_2.pop();
                if(st_2.empty() == true){
                    ans_2 = max(ans_2, curr_ans2);
                    curr_ans2 = 0;
                }
            }
        }
    }
    depth++;

    // O/P
    cout << depth << " " << ans_1 << " " << ans_2 << endl;

    return 0;
}