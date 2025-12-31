// See '101_Quiz.cpp', As, it's Question is half-
//  missing. So, Watch that part of Lecture.




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
    int n; cin >> n;
    vector<int> a(n);
    for(int i=0; i < n; i++){ cin >> a[i];}
    int X, Y; cin >> X >> Y;
    int k1, k2; cin >> k1 >> k2;

    // Solution
    int temp1 = 0, temp2 = 0, m=0;
    for(int i=0; i < n; i++){
        if(a[i] == 3){ temp1++;}
        else if(a[i] == 5){ temp2++;}
        else{ m++;}
    }

    k1 -= temp1, k2 -= temp2;
    vector<int> dp(m+1, 0);
    int Current = 0, Previous = 0;
    for(int i=1; i <= m; i++){
        Previous = Current;
        Current = 0;

        int pick_1 = 0, pick_2 = 0;
        if(k1 > 0){ pick_1 += X;}
        if(k2 > 0){ pick_2 += Y;}

        if(pick_1 >= pick_2){
            Current = (Previous + pick_1);
            k1--;
        }
        else{
            Current = (Previous + pick_2);
            k2--;
        }
    }

    // O/P
    cout << Current << endl;
    // TC = O(n+m)
    // SC = O(n+m)
}