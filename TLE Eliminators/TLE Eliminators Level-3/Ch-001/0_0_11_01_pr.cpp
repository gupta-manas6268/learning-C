// Correct.
// This is my code with the help of ChatGPT.
// (It is the same code of '002_02_Fair_Workload.cpp')

// Array Division
// https://cses.fi/problemset/task/1085






































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
    int n, k; cin >> n >> k;
    vector<int> a; 
    int sum = 0;
    for(int i=0; i<n; i++){
        int temp; cin >> temp;
        sum += temp;
        a.push_back(temp);
    }

    // Solution
    int left = *max_element(a.begin(), a.end()), right = sum;
    int ans;
    while(left <= right){
        int mid = (left + right)/2;
        int Partitions=0;
        int current_sum = 0;
        for(int i=0; i<n; i++){
            current_sum += a[i];
            if(current_sum > mid){
                Partitions++;
                current_sum = a[i];
            }
            if(i == (n-1)){
                Partitions++;
            }   
        }

        if(Partitions <= k){
            // It means all values of 'a' vector are used,
            //  but 'mid = partition' is more than sufficient.
            ans = mid;
            right = mid-1;
        }
        else if(Partitions > k){
            left = mid+1;
        }
    }

    // O/P
    cout << ans << endl;
}