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

    cout << "Enter the size of array: ";
    cin >> size;

    for (int i = 0; i < size; i++){
        cin >> element;
        a.push_back(element);
    }

    bool search(vector<int> a, int target){
        int left = 0, right = a.size() - 1;

        while (left <= right){
            int mid = (left + right) / 2;

            if ((a[mid] == target) || ((target > a[mid - 1]) && (target < a[mid + 1]))){
                return mid;
                break;
            }

            if (a[mid] < target)
                left = mid + 1;
            if (a[mid] > target)
                right = mid - 1;
        }
    }
}