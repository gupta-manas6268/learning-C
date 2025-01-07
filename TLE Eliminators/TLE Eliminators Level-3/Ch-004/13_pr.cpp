// 

// B. Total Length
// https://codeforces.com/edu/course/2/lesson/9/3/practice/contest/307094/problem/B



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
    int n, s; cin >> n >> s;
    vector<int> arr;
    for(int i=0; i<n; i++){
        int temp; cin >> temp;
        arr.push_back(temp);
    }

    // O/P
    int left_1 = 0, right_1 = 0;
    int left_2 = 0, right_2 = 0;
    int sum = 0;
    bool First = false;
    int ans = 0;
    for(int x=0; x<n; x++){
        sum += arr[x];
        if(sum > s){
            if(First == false){
                int length = (right_1 - left_1 + 1);
                ans += ((length * (length+1) * (length+2))/ 6);
                First = true;
                left_2 = (left_1 + 1);
                // right_2 = (right_1 + 1);
                right_2 = right_1;

                sum -= arr[left_1];
            }
            else{
                int length = (right_2 - left_2);
                ans += ((length * (length+1) * (length+2))/ 6);
                if(right_1 >= left_2){
                    int common_length = (right_1 - left_2 + 1);
                    ans -= ((common_length * (common_length+1) * (common_length+2))/ 6);
                }
                left_1 = left_2;
                right_1 = right_2;

                sum -= arr[left_2];
                left_2++;
            }
        }

        if(First == false){
            right_1++;
        }
        else{
            right_2++;
        }
    }

    cout << ans << endl;
}