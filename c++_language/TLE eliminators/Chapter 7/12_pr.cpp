#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> a;
    int element, size;
    cin >> size;

    for (int i = 0; i < size; i++){
        cin >> element;
        a.push_back(element);
    }

    bool search(vector<int> a, int target){
        int left = 0, right = a.size() - 1;

        while (left <= right){

            int mid = (left + right) / 2;
            int ans_left, ans_right;

            for (int i = 0; i < mid; i++){
                if (mid == 0){
                    
                    ans_left = 0;
                    break;
                }
                ans_left += a[i];
            }
            for (int i = 0; i < mid; i++){
                if (mid == size - 1){
                    
                    ans_right = 0;
                    break;
                }
                ans_right += a[i];
            }
            if (ans_left == ans_right){
                return mid;
                break;
            }
            else if (ans_left > ans_right){
                left = mid;
            }
            else{
                right = mid;
            }
        }
    }
}