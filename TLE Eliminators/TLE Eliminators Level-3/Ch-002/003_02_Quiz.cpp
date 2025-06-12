// Gadhe Absolutely write it in Register-Notes, as
//  it is a Very good Question.

// Correct.
// This is Mentor's code.

// This is Home-Work Problem.

// A. Maximum Average Segment
// https://codeforces.com/edu/course/2/lesson/6/4/practice/contest/285069/problem/A

































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

// These 2-functions gives us the Ans. pair. by taking input 'Max. Subarray Sum'.
pair<int,int> any_Subarray_With_Positive_Sum(vector<long double>& arr, int d, int n){
    vector<long double> prefix(n);
    prefix[0] = arr[0];
    for(int i=1; i<n; i++){
        prefix[i] = (arr[i] + prefix[i-1]);
    }

    long double ans = -1e18;
    long double min_So_Far = 0;
    int best_Left_Index_So_Far = -1;

    for(int right = d-1; right < n; right++){
        long double best_Subarray_Ending_Here = (prefix[right] - min_So_Far);
        ans = max(ans, best_Subarray_Ending_Here);
        if(ans >= 0){
            return make_pair(best_Left_Index_So_Far + 1, right);
        }
        if(min_So_Far > prefix[right - d + 1]){
            min_So_Far = prefix[right - d + 1];
            best_Left_Index_So_Far = (right - d + 1);
        }
    }
    
}

pair<int,int> best_Subarray(long double x, vector<long double>& arr,int d, int n){
    vector<long double> transformed_Array(n);
    for(int i=0; i<n; i++){
        transformed_Array[i] = (arr[i] - x);
    }

    // Find out best possible sub-array sum in 'transformed_Array'
    // with sub-array length >= d.
    // if this max. sum >= 0, return true, else( return false).
    return any_Subarray_With_Positive_Sum(transformed_Array, d, n);
}

// These 2-functions gives us the max. Subarray Average.
long double max_Sum(vector<long double>& arr, int d, int n){
    vector<long double> prefix(n);
    prefix[0] = arr[0];
    for(int i=1; i<n; i++){
        prefix[i] = (arr[i] + prefix[i-1]);
    }
    long double ans = -1e18;
    long double min_So_Far = 0;
    for(int right = (d - 1); right < n; right++){
        long double best_Subarray_Ending_Here = (prefix[right] - min_So_Far);
        min_So_Far = min(min_So_Far, prefix[right - d + 1]);
        ans = max(ans, best_Subarray_Ending_Here);
    }

    return ans;
}

bool func(long double x, vector<long double>& arr,int d, int n){
    vector<long double> transformed_Array(n);
    for(int i=0; i<n; i++){
        transformed_Array[i] = (arr[i] - x);
    }

    // Find out best possible sub-array sum in 'transformed_Array'
    // with sub-array length >= d.
    // if this max. sum >= 0, return true, else( return false).
    return max_Sum(transformed_Array, d, n) >= 0; 
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n, d; cin >> n >> d;
    vector<long double> a(n);
    for(int i=0; i<n; i++){ cin >> a[i];}

    // O/P
    long double left = 0, right = 100;
    // 'long double' has better Precision, then simply 'double'.
    for(int i=0; i < 100; i++){
        long double mid = (left + right)/2;
        if(func(mid, a, d, n)){
            left = mid;
        }
        else{
            right = mid;
        }
    }

    // left = max. Subarray average.
    // cout << setprecision(10) << fixed << left << endl;
    // Above line prints the max. subarray avg.
    pair<int,int> ans = best_Subarray(left, a, d, n);
    cout << (ans.first + 1) << " " << (ans.second + 1) << endl;
}


// In this code, we firstly find 'Max. Subarray Avg.'
//  by using Binary-Search, then we find the Subarray
//  by taking that 'Max. Subarray Avg.' as input.