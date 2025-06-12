// Correct.
// I solved this code with the help of 'Chat-GPT' as,
//  'Chat-GPT' checkes my code bugs.

// B. Lost Numbers
// https://codeforces.com/problemset/problem/1167/B


































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    // I/P
    int resp[4];
    cout << "? 1 2" << endl;
    cin >> resp[0];
    
    cout << "? 2 3" << endl;
    cin >> resp[1];
    
    cout << "? 4 5" << endl;
    cin >> resp[2];
    
    cout << "? 5 6" << endl;
    cin >> resp[3];

    // O/P
    vector<int> special_no = {4, 8, 15, 16, 23, 42};
    vector<vector<int>> Response;
    for(int i=0; i<4; i++){
        vector<int> temp_Resp;
        if(resp[i]%16 == 0){
            resp[i] /= 16;
            int index = lower_bound(special_no.begin(), special_no.end(), resp[i]) - special_no.begin();
            if((index == 6) || (special_no[index] != resp[i])){
                resp[i] *= 16;
            }
            else{
                temp_Resp.push_back(16);
                temp_Resp.push_back(resp[i]);

                Response.push_back(temp_Resp);
                continue;
            }
        }
        if(resp[i]%8 == 0){
            resp[i] /= 8;
            int index = lower_bound(special_no.begin(), special_no.end(), resp[i]) - special_no.begin();
            if((index == 6) || (special_no[index] != resp[i])){
                resp[i] *= 8;
            }
            else{
                temp_Resp.push_back(8);
                temp_Resp.push_back(resp[i]);

                Response.push_back(temp_Resp);
                continue;
            }
        }
        if(resp[i]%4 == 0){
            resp[i] /= 4;
            int index = lower_bound(special_no.begin(), special_no.end(), resp[i]) - special_no.begin();
            if((index == 6) || (special_no[index] != resp[i])){
                resp[i] *= 4;
            }
            else{
                temp_Resp.push_back(4);
                temp_Resp.push_back(resp[i]);
                
                Response.push_back(temp_Resp);
                continue;
            }
        }
        if(resp[i]%15 == 0){
            resp[i] /= 15;
            int index = lower_bound(special_no.begin(), special_no.end(), resp[i]) - special_no.begin();
            if((index == 6) || (special_no[index] != resp[i])){
                resp[i] *= 15;
            }
            else{
                temp_Resp.push_back(15);
                temp_Resp.push_back(resp[i]);
                
                Response.push_back(temp_Resp);
                continue;
            }
        }
        if(resp[i]%23 == 0){
            resp[i] /= 23;
            int index = lower_bound(special_no.begin(), special_no.end(), resp[i]) - special_no.begin();
            if((index == 6) || (special_no[index] != resp[i])){
                resp[i] *= 23;
            }
            else{
                temp_Resp.push_back(23);
                temp_Resp.push_back(resp[i]);
                
                Response.push_back(temp_Resp);
                continue;
            }
        }
        if(resp[i]%42 == 0){
            resp[i] /= 42;
            int index = lower_bound(special_no.begin(), special_no.end(), resp[i]) - special_no.begin();
            if((index == 6) || (special_no[index] != resp[i])){
                resp[i] *= 42;
            }
            else{
                temp_Resp.push_back(42);
                temp_Resp.push_back(resp[i]);
                
                Response.push_back(temp_Resp);
                continue;
            }
        }
    }

    int a1, a2, a3, a4, a5, a6;
    if((Response[0][0] == Response[1][0]) || (Response[0][0] == Response[1][1])){
        a2 = Response[0][0];
        a1 = Response[0][1];

        a3 = Response[1][0];
        if(a3 == a2){
            a3 = Response[1][1];
        }
    }
    else{
        a2 = Response[0][1];
        a1 = Response[0][0];

        a3 = Response[1][0];
        if(a3 == a2){
            a3 = Response[1][1];
        }
    }

    if((Response[2][0] == Response[3][0]) || (Response[2][0] == Response[3][1])){
        a5 = Response[2][0];
        a4 = Response[2][1];

        a6 = Response[3][0];
        if(a6 == a5){
            a6 = Response[3][1];
        }
    }
    else{
        a5 = Response[2][1];
        a4 = Response[2][0];

        a6 = Response[3][0];
        if(a6 == a5){
            a6 = Response[3][1];
        }
    }

    vector<int> a = {a1, a2, a3, a4, a5, a6};
    cout << "! " << a1 << " " << a2 << " " << a3 << " " << a4 << " " << a5 << " " << a6 << endl;
}