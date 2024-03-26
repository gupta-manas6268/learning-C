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

    int num11, num12, num13, num14, num15, num21, num22, num23, num24, num25;
    int computer_guess;
    srand(time(0));
    computer_guess = rand() % 9 + 1;

    string st;
    cin >> st;

    int place;
    while (place < 5){
        if(place == 1){
            if (st == "a11"){  num11 = 1; place++;}
            else if (st == "a12"){  num11 = 2; place++;}
            else if (st == "a13"){  num11 = 3; place++;}
            else if (st == "a21"){  num11 = 4; place++;}
            else if (st == "a22"){  num11 = 5; place++;}
            else if (st == "a23"){  num11 = 6; place++;}
            else if (st == "a31"){  num11 = 7; place++;}
            else if (st == "a32"){  num11 = 8; place++;}
            else if (st == "a33"){  num11 = 9; place++;}
            else{  cout << "Give a valid position.";}
        }
        if(place == 1){
            if (st == "a11"){  num11 = 1; place++;}
            else if (st == "a12"){  num11 = 2; place++;}
            else if (st == "a13"){  num11 = 3; place++;}
            else if (st == "a21"){  num11 = 4; place++;}
            else if (st == "a22"){  num11 = 5; place++;}
            else if (st == "a23"){  num11 = 6; place++;}
            else if (st == "a31"){  num11 = 7; place++;}
            else if (st == "a32"){  num11 = 8; place++;}
            else if (st == "a33"){  num11 = 9; place++;}
            else{  cout << "Give a valid position.";}
        }
        if(place == 1){
            if (st == "a11"){  num11 = 1; place++;}
            else if (st == "a12"){  num11 = 2; place++;}
            else if (st == "a13"){  num11 = 3; place++;}
            else if (st == "a21"){  num11 = 4; place++;}
            else if (st == "a22"){  num11 = 5; place++;}
            else if (st == "a23"){  num11 = 6; place++;}
            else if (st == "a31"){  num11 = 7; place++;}
            else if (st == "a32"){  num11 = 8; place++;}
            else if (st == "a33"){  num11 = 9; place++;}
            else{  cout << "Give a valid position.";}
        }
    }
}