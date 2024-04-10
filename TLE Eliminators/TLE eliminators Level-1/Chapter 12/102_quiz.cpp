// https://codeforces.com/problemset/problem/1889/A



// It got accepted in mentor codeforces, but give 'compilation error'
//  to me.


#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        int n; cin >> n;
        string s; cin >> s;

        if(count(s.begin(), s.end(), '0') != count(s.begin(), s.end(), '1')){
            cout << "-1" << endl;
            continue;
        }

        int l = 0, r = n;

        vector<int> indices;

        // full-form 'deque =→ double-ended queue

        deque<char> d(s.begin(), s.end()); // deque can be ALWAYS used at vectors but it is a bit slower than vector(1.5x)

        // stack<int> vector<int> // by default it uses deque

        while(!d.empty()){
            if(d.front() != d.back()){
                d.pop_front(); d.pop_back();
                l++; r--;

                continue;
            }

            if(d.front() == '0'){
                d.pop_front();
                d.push_back('0');


            }

            else{
                d.pop_back();
                d.push_front('1');
                indices.push_back(l);
            }

            l++, r++;
        }

        cout indices.size() << endl;

        for(auto i: indices)
            cout << i << " ";
        cout << endl;
    }
}