// 

// Alice & Bob play a game.
// They start with a number N and play in turns. In each turn, 
// player can make any one of the following moves.
//   ● Divide N by any of its odd divisor greater than 1
//   ● Subtract 1 from N if N is greater than 1.
// Player who is unable to make a move loses. If Alice starts the game,
// determine who will be the winner.




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

// Power
int power(int base, int exp){
    int result = 1;

    while(exp > 0){
        if((exp % 2) == 1){
            (result *= base) %= MOD;

            (base *= base) %= MOD;
            exp /= 2;
        }
        else{
            (base *= base) %= MOD;
            exp /= 2;
        }
    }

    return result;
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n; cin >> n; // (n >= 0)

    // Solution
    int ans = -1;
    if(n <= 2){ ans = 2;}
    else if((n % 2) == 1){ // Odd
        ans = 1;
    }
    else{ // Even
        int exp = log2(n);
        if(n == power(2, exp)){ ans = 2;}
        else{
            if(((n/2) % 2) == 1){ // (n / 2) => Odd
                int odd = (n / 2);
                bool prime = true;
                for(int i=2; i * i <= odd; i++){
                    if((odd % i) == 0){ prime = false;}
                }

                if(prime == true){ // i.e. int odd => is prime.
                    ans = 2;
                }
                else{ ans = 1;}
            }
            else{ // (n / 2) => Even, i.e. n => divisible by 4 or higher power 
                  //        of 2, but contains odd divisor also. 
                ans = 1;
            }
        }
    }

    // O/P
    if(ans == 1){ cout << "Alice will win" << endl;}
    else if(ans == 2){ cout << "Bob will win" << endl;}
}