// 

// E. Segments with Small Set
// https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/E



#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int func(int n){
    int ans = (n * (n+1))/2;
    return ans;
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n, k; cin >> n >> k;
    vector<int> arr;
    for(int i=0; i<n; i++){
        int temp; cin >> temp;
        arr.push_back(temp);
    }

    // O/P
    map<int,int> mp;
    int ans = 0;
    int left_prev = 0, right_prev = 0;
    for(int left = 0, right = 0; right < n; right++){
        mp[arr[right]]++;
        if((mp.size() > k) || (right == (n-1))){
            int length = (right - left);
            if(right == (n-1)){
                length = (right - left + 1);
            }
            
            ans += func(length);
            mp[arr[left]]--;
            if(right_prev == 0){
                left_prev = left;
                right_prev = right;
                left++;
            }
            else{
                if(left <= right_prev){
                    int common_length = (right_prev - left + 1);
                    ans -= func(common_length);
                }
                int temp = right_prev;
                left_prev = left;
                right_prev = right;

                left = temp;
                left++;
            }
        }
    }

    cout << ans << endl;
}