// This is Mentor's code.
// Correct.

// A. Qingshan Loves Strings 2
// https://codeforces.com/contest/1889/problem/A


















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

    int tc; cin >> tc;

    while (tc--){
        int n; cin >> n;
        string s; cin >> s;

        int count_0 = 0, count_1 = 0;
        for(int i=0; i < s.length(); i++){
            count_0 += s[i] == '0';
            count_1 += s[i] == '1';
        }

        if(count_0 != count_1){  // not possible
            cout << -1 << endl;
            continue;
        }

        vector<int> answer;
        deque<char> characters;

        for(int i=0; i < s.length(); i++){
            characters.push_back(s[i]);
        }

        int depth = 0;
        while(!characters.empty()){
            if(characters.front() == characters.back()){
                if(characters.front() == '0'){
                    characters.push_back('0');
                    characters.push_back('1');
                    answer.push_back(n - depth);
                }
                else{
                    characters.push_front('1');
                    characters.push_front('0');
                    answer.push_back(0 + depth);
                }

                n += 2;
            }

            while(!characters.empty() && characters.front() != characters.back()){
                characters.pop_back();
                characters.pop_front();
                depth++;
            }
        }

        cout << answer.size() << endl;
        if(answer.size() == 0){
            cout << endl;
            continue;
        }
        for(auto it : answer){
            cout << it << " ";
        }
        cout << endl; 

        // TC = O(n).
    }
}