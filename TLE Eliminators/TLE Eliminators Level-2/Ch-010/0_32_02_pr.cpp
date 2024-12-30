// Watch this Video-Solution one more time for more Clearity.
// https://www.youtube.com/watch?v=8MG9URYpe44










// This is Mentor's code.
// Wrong (TLE).

// C. Intersections
// https://codeforces.com/gym/101853/problem/C



#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int merge(int left, int mid, int right, vector<int> &v){
    vector<int> temp;
    int i = 1, j = mid+1;
    int ans = 0;

    while((i <= mid) && (j <= right)){
        if(v[i] > v[j]){
            ans += (mid - i + 1);
            temp.push_back(v[j]);
            j++;
        }
        else{
            temp.push_back(v[i]);
            i++;
        }
    }

    while(i <= mid){
        temp.push_back(v[i]);
        i++;
    }

    while(j <= right){
        temp.push_back(v[j]);
        j++;
    }

    j = 0;
    for(int i=1; i <= right; i++){
        v[i] = temp[j];
        j++;
    }

    return ans;
}

int count_Inversions(int left, int right, vector<int> &v){
    if(left >= right){ return 0;}

    int mid = (left + right) / 2;

    int left_ans = count_Inversions(left, mid, v);
    int right_ans = count_Inversions(mid + 1, right, v);
    int merge_ans = merge(left, mid, right, v);

    return (left_ans + right_ans + merge_ans);
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        // No. of inversions = No. of inversions in (left subarray + right subarray)
        //                      + ans_merge.

        // So, we can solve this Question by Merge-Sort.

        int n; cin >> n; 
        vector<int> a(n + 1), b(n + 1);
        for(int i=1; i <= n; i++){ cin >> a[i];}
        for(int i=1; i <= n; i++){ cin >> b[i];}

        map<int, int> index;
        for(int i=1; i <= n; i++){
            index[b[i]] = i;
        }

        vector<int> v(n + 1);
        for(int i=1; i <= n; i++){
            v[i] = index[a[i]];
        }

        cout << count_Inversions(1, n, v) << endl;

        // TC = O(n * log(n)).
        // SC = O(n).
    }
}