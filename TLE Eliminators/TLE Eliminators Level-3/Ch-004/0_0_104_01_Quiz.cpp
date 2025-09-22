// Correct. 
// (I write it Myself, So, you can avoid to solve this Question Now.)

// (This is my 2nd time code.)

// G. Not Very Rude Substring
// https://codeforces.com/edu/course/2/lesson/9/3/practice/contest/307094/problem/G




































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
    int n, c; cin >> n >> c;
    string s; cin >> s;

    // Solution
    vector<int> B(n, 0), Prefix_Num_B(n);
    for(int i=0; i < n; i++){
        if(s[i] == 'b'){ B[i] = 1;}
    }
    for(int i=0; i < n; i++){
        if(i == 0){
            Prefix_Num_B[i] = B[i];
        }
        else{
            Prefix_Num_B[i] = (Prefix_Num_B[i-1] + B[i]);
        }
    }
    
    int max_Length = 0;
    int Inversion_B = 0, count_A = 0;
    int i=0, j=0;
    while((i <= j) && (j < n)){
        if(s[j] == 'a'){ count_A++;}
        else if(s[j] == 'b'){
            Inversion_B += count_A;
        }

        while((i <= j) && (Inversion_B > c)){
            if(s[i] == 'a'){ 
                Inversion_B -= (Prefix_Num_B[j] - Prefix_Num_B[i]);
                count_A--;
            }
            i++;
        }
        if(Inversion_B <= c){
            max_Length = max(max_Length, (j-i+1));
        }
        j++;
    }

    // O/P
    cout << max_Length << endl;
}