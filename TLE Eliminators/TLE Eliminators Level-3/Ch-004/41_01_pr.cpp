// 

// A. Looped Playlist
// https://codeforces.com/edu/course/2/lesson/9/3/practice/contest/307094/problem/A



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
    int n, p; cin >> n >> p;
    vector<int> arr(2*n);
    int total_Sum = 0;
    for(int i=0; i<n; i++){
        int temp; cin >> temp;
        arr[i] = temp;
        arr[n+i] = temp;
        total_Sum += temp;
    }

    // O/P
    int ans = 0;
    int division = (p/total_Sum);
    ans += (n * division);
    p %= total_Sum;
    
    // Now, Solve it like "Shortest Subarray with sum atleast k."
    // (here, p is 'k' in above line.)
    deque<int> deq;
    vector<long long> prefix_Sum(2*n+1, 0);

    for(int i=0; i < (2*n); i++){
        prefix_Sum[i+1] = (prefix_Sum[i] + arr[i]);
    }

    int left = 0;
    if(p != 0){
        int min_length = ((2*n) + 1);
        for(int i=0; i <= (2*n); i++){
            while((deq.empty() != true) && ((prefix_Sum[i] - prefix_Sum[deq.front()]) >= p)){
                if((i-deq.front()) < min_length){
                    // left = (deq.front()+1);
                    left = ((deq.front() % n) + 1);
                }
                min_length = min(min_length, i-deq.front());
                deq.pop_front();
            }
            while((deq.empty() != true) && (prefix_Sum[i] <= prefix_Sum[deq.back()])){
                deq.pop_back();
            }
            deq.push_back(i);
        }

        ans += min_length;
    }

    cout << left << " " << ans << endl;
}