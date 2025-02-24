// Wrong.

// C1. Guessing the Greatest (easy version)
// https://codeforces.com/problemset/problem/1486/C1




































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    // I/P
    int n; cin >> n;

    // Interactive
    cout << "? " << 1 << " " << n << endl;
    int second; cin >> second;
    
    bool first_case = false, second_case = false;
    int response_1, response_2;
    if(second == 1){
        first_case = true;
    }
    else{
        cout << "? " << 1 << " " << second << endl;
        cin >> response_1;
    }

    if(second == n){
        second_case = true;
    }
    else{
        cout << "? " << second << " " << n << endl;
        cin >> response_2;
    }

    int ans;
    bool Put_Ans = false;
    vector<pair<int,int>> vec;
    if(response_1 == second){
        int left = 1, right = second;

        for(int i=0; i<25; i++){
            int mid = (left + right)/ 2;

            if(mid == second){
                mid--; 
                ans = mid;
                Put_Ans = true;
            }
            vec.push_back({mid, second});
            cout << "? " << mid << " " << second << endl;
            int response; cin >> response;
            
            if(response == second){
                left = mid + 1;
            }
            else{
                left = (left + mid)/ 2;
            }
            
            if((i > 5) && ((vec[i].first == vec[i-1].first) && (vec[i].second == vec[i].second))){
                break;
            }
        }
        if(Put_Ans != true){
            ans = left;
        }
    }
    else{
        int left = second, right = n;
        
        for(int i=0; i<25; i++){
            int mid = (left + right)/ 2;
            
            if(second == mid){
                mid++; 
                ans = mid;
                Put_Ans = true;
            }
            vec.push_back({second, mid});
            cout << "? " << second << " " << mid << endl;
            int response; cin >> response;

            if(response == second){
                right = mid - 1;
            }
            else{
                right = (mid + right)/ 2;
            }

            if((i > 5) && ((vec[i].first == vec[i-1].first) && (vec[i].second == vec[i-1].second))){
                break;
            }
        }
        if(Put_Ans != true){
            ans = right;
        }
    }

    // O/P
    cout << "! " << ans << endl;
}