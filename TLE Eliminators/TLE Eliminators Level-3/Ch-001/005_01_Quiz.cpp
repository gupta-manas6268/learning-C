// This is Part-03 of the Lecture.






// Correct.

// B. Ropes
// https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/B
































#include<bits/stdc++.h>
using namespace std;

#define endl '\n' 
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

bool checker(double rope_Size, vector<int> &ropes, int total_Ropes){
    long long pieces = 0;
    for(auto i : ropes){
        pieces += (i / rope_Size);

        if(pieces >= total_Ropes){
            return true;
        }
    }

    return false;
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    int n, k; cin >> n >> k;
    vector<int> a;
    for(int i=0; i<n; i++){
        int temp; cin >> temp;
        a.push_back(temp);
    }

    double error = 1e-7;
    double left = error;
    double right = 1e7;
    double ans;

    int count = 0;
    while((right - left) > error){
        double mid = (left + right) / 2;

        if(checker(mid, a, k)){
            ans = mid;
            left = mid + error;
        }
        else{
            right = mid - error;
        }

        count++;
        if(count > 100){ break;}
    }

    cout << setprecision(7) << fixed << ans << endl;
}