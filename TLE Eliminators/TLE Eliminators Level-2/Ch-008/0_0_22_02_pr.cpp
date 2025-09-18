// This is Mentor's code.
// Correct.

// A. Constructive Problem
// https://codeforces.com/contest/1819/problem/A



































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

    int tc; cin >> tc;

    while (tc--){
        int n; cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; i++){ cin >> a[i];}

        map<int, int> mp;
        for(auto it : a){
            mp[it]++;
        }

        int mex = 0;
        for(auto it : mp){
            if(it.first == mex){
                mex++;
            }
            else{
                break;
            }
        }

        int targetMex = mex + 1;
        int left = -1;
        int right = -1;
        for(int i=0; i<n; i++){
            if(a[i] == targetMex){
                if(left == -1){
                    left = i;
                }
                right = i;
            }
        }
        // I find the left end and right end of the mex+1 value

        // if left is not equal to -1
        // means I found a segment left....right, where value at
        // index left and right both is mex+1

        if(left != -1){
            for(int i = left; i <= right; i++){
                a[i] = mex;
            }

            map<int, int> mp;
            for(auto it : a){
                mp[it]++;
            }
            int newMex = 0;
            for(auto it : mp){
                if(it.first == newMex){
                    newMex++;
                }
                else{
                    break;
                }
            }

            if(newMex == targetMex){ cout << "Yes" << endl;}
            else{ cout << "No" << endl;}
        } 
        // if the array has no mex+1 value in it.
        else{
            // I need to find some value less than mex which has freq>1
            //  or I need to find some value greater than mex+1
            int flag = 0;
            for(auto it : mp){
                if((it.first < mex) && (it.second > 1)){
                    flag = 1;
                }
                if(it.first > mex+1){ flag = 1;}
            }

            if(flag == 1){ cout << "Yes" << endl;}
            else{ cout << "No" << endl;}
        }
    }
}