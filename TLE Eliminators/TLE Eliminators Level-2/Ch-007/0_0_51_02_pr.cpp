// This is Mentor's code.
// Correct.

// Matched Brackets 2
// https://www.codechef.com/practice/course/zco-inoi-problems/ZCOPRAC/problems/ZCO12003



















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
    long long n; cin >> n;
    vector<long long> v(n);
    for(int i=0; i<n; i++){ cin >> v[i];}
    cout << endl;

    // Solution
    map<long long, char> m;
    m[1] = '(';
    m[2] = ')';
    m[3] = '[';
    m[4] = ']';

    stack<long long> Round_Bracket, Square_Bracket, Alternate_Depth;
    Round_Bracket.push(0);
    Square_Bracket.push(0);
    Alternate_Depth.push(0);

    long long maxDepth = 0;
    long long max_Round = 0;
    long long max_Square = 0;

    for(int i=1; i <= n; i++){
        char ch = m[v[i-1]];

        if(ch == '('){
            // Now I see that before this ( 'round' bracket was there a [ 'square'
            // bracket, if yes then I know my depth has increased else depth 
            // remained same.
            if(Round_Bracket.top() <= Square_Bracket.top()){
                Alternate_Depth.push(Alternate_Depth.top() + 1);
            }
            else{
                Alternate_Depth.push(Alternate_Depth.top());
            }
            Round_Bracket.push(i);
        }
        else if(ch == '['){
            if(Square_Bracket.top() <= Round_Bracket.top()){
                Alternate_Depth.push(Alternate_Depth.top() + 1);
            }
            else{
                Alternate_Depth.push(Alternate_Depth.top());
            }
            Square_Bracket.push(i);
        }

        else if(ch == ')'){
            // if I have a closing round bracket then I can check the length of
            // the segment between this round bracket with its pair of opening 
            // round bracket.
            max_Round = max(max_Round, i-Round_Bracket.top() + 1);
            Round_Bracket.pop();
            Alternate_Depth.pop();
        }
        else{
            max_Square = max(max_Square, i-Square_Bracket.top() + 1);
            Square_Bracket.pop();
            Alternate_Depth.pop();
        }

        maxDepth = max(maxDepth, Alternate_Depth.top());
    }

    // O/P
    cout << maxDepth << " " << max_Round << " " << max_Square << " " << endl;
}