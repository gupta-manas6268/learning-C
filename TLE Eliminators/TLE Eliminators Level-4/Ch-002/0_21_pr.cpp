// Correct.
// (I solved it with the help of AI.)

// Increasing Subsequence
// https://cses.fi/problemset/task/1145





























// (As, I used 'set' in this problem. So, I am
//   uncomfortable in using 'set' iterator. So,
//   I used AI, but I get logic of Problem 
//   beforehand.)





#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

struct cmp{
    bool operator()(const pair<int,int> &a, const pair<int, int> &b) const{
        return a.first < b.first;
    }
};

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n; cin >> n;
    vector<int> x(n);
    int maxi = 0;
    for(int i=0; i < n; i++){ 
        cin >> x[i];
        maxi = max(maxi, x[i]);
    }

    // Solution
    set<pair<int,int>, cmp> st;
    int max_Length = 0;
    for(int i=0; i < n; i++){
        int Second = 1;
        if(i == 0){ 
            st.insert({x[i], 1});
            max_Length = max(max_Length, Second);
        }
        else{
            auto it = st.lower_bound({x[i], 0});

            if(it != st.begin()){
                auto prev = it;
                --prev;
                Second = (prev->second + 1);
            }
            st.insert({x[i], Second});
            max_Length = max(max_Length, Second);
            
            auto curr = st.find({x[i], Second});
            auto next = curr;
            ++next;
            while((next != st.end()) && (next->second <= Second)){
                auto to_erase = next;
                ++next;
                st.erase(to_erase);
            }
        }
    }

    // O/P
    cout << max_Length << endl;
    // TC = O(n * log(n))
    // SC = O(n)
}