// Correct.
// (This is Mentor's code.)

// Problem A1: Weak Typing - Chapter 1
// https://www.facebook.com/codingcompetitions/hacker-cup/2021/round-1/problems/A1



#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define all(x) x.begin(), x.end() 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

// Debugging Checklist:
// 1. Edge cases
// 2. Overflow
// 3. Wrong loops
// 4. Something you normally repeat, etc.

void solve(){
    int n; cin >> n;
    string s; cin >> s;

    int cnt_1 = 0, cnt_2 = 0; // cnt_1 => count_1
    // cnt_1 represents min. no. of switches if you started with your left hand.
    // cnt_2 represents min. no. of switches if you started with your right hand.

    int hand = 0; // hand = 0 -> Timmy is on his left hand,
                  // hand = 1 -> Timmy is on his right hand
    for(int i = 0; i < n; i++){
        if(s[i] == 'O'){
            if(hand == 0){
                hand = 1; 
                cnt_1++;
            }
        }
        else if(s[i] == 'X'){
            if(hand == 1){
                hand = 0;
                cnt_1++;
            }
        }
    }  

    hand = 1;

    for(int i = 0; i < n; i++){
        if(s[i] == 'O'){
            if(hand == 0){
                hand = 1; 
                cnt_2++; // Change 
            }
        }
        else if(s[i] == 'X'){
            if(hand == 1){
                hand = 0;
                cnt_2++; // Change
            }
        }
    }  

    cout << min(cnt_1, cnt_2);
}

void main_() {
    // implement your solution here
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    for(int i = 1; i <= tc; i++){
        cout << "Case #" << i << ": ";
        solve();
    }
}

static void run_main() {
    main_();
    exit(0);
}
int main() {
    size_t stsize = 1024 * 1024 * 1024; // run with a 1 GiB stack
    char *stack, *send;
    stack = (char *)malloc(stsize);
    send = stack + stsize;
    send = (char *)((uintptr_t)send / 16 * 16);
    asm volatile(
        "mov %0, %%rsp\n"
        "call *%1\n"
        :
        : "r"(send), "r"(run_main));
    return 0;
}