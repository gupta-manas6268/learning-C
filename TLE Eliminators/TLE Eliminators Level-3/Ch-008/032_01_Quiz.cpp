// 
// This is My code with the Help of Chat-GPT.

// C2. Increasing Subsequence (hard version)
// https://codeforces.com/problemset/problem/1157/C2



#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n; cin >> n;
    deque<int> a;
    for(int i=0; i<n; i++){ 
        int temp; cin >> temp;
        a.push_back(temp);
    }

    // Solution
    int k = 0;
    string ans;

    vector<int> Final_Vec;
    while(k < n){
        int Size = Final_Vec.size();
        if((Size != 0) && (Final_Vec[Size-1] >= a.front()) && (Final_Vec[Size-1] >= a.back())){
            break;
        }
        if(a.front() < a.back()){
            if((Size != 0) && (Final_Vec[Size-1] >= a.front())){
                Final_Vec.push_back(a.back());
                a.pop_back();
                ans += 'R';
            }
            else{
                Final_Vec.push_back(a.front());
                a.pop_front();
                ans += 'L';
            }
        }
        else if(a.back() > a.front()){
            if((Size != 0) && (Final_Vec[Size-1] >= a.back())){
                Final_Vec.push_back(a.front());
                a.pop_front();
                ans += 'L';
            }
            else{
                Final_Vec.push_back(a.back());
                a.pop_back();
                ans += 'R';
            }
        }
        else{
            // if(a.size() <= 3){
            //     Final_Vec.push_back(a.back());
            //     a.pop_back();
            //     ans += 'R';
            // }

            bool Front = false, Back = false;
            int Size_1 = 0, Size_2 = 0;
            for(int i=1; i < a.size(); i++){
                if(a[i] > a[i-1]){ Size_1++;}
                else{ break;}
            }
            for(int i = a.size()-2; i >= 0; i--){
                if(a[i] > a[i+1]){ Size_2++;}
                else{ break;}
            }

            Final_Vec.push_back(a.front());
            if(Size_1 >= Size_2){
                a.pop_front();
                ans += 'L';
            }
            else{
                Final_Vec.push_back(a.back());
                a.pop_back();
                ans += 'R';
            }
        }

        k = Final_Vec.size();
    }

    k = Final_Vec.size();

    // O/P
    cout << k << endl << ans << endl;
}