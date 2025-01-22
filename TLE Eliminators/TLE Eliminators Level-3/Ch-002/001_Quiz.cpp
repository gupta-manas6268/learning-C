// 

// E - Average and Median
// https://atcoder.jp/contests/abc236/tasks/abc236_e



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
    vector<int> A(n);
    for(int i=0; i<n; i++){ cin >> A[i];}

    // O/P
    double left = *min(A.begin(), A.end());
    double right = *max(A.begin(), A.end());

    double precision = 1e-4;
    double avg, median;
    // int count = 0;
    // while((right - left) > precision){
    for(int count = 0; count <= 100; count++){
        double mid = (left + right)/2;

        vector<double> B(n);
        for(int i=0; i<n; i++){
            B[i] = ((double)(A[i]) - mid);
        }
        vector<double> C(n);
        for(int i=0; i<n; i++){
            if(i == 0){ C[0] = B[0];}
            else if(i == 1){
                double temp1 = 0;
                C[i] = (B[i] + max(C[i-1], temp1));
            }
            else if(i >= 2){
                C[i] = (B[i] + max(C[i-1], C[i-2]));
            }
        }

        double sum = max(C[n-1], C[n-2]);
        if(sum >= 0){
            avg = mid;
            left = (mid + precision);
        }
        else{
            right = (mid - precision);
        }

        // count++;
        // if(count > 100){ break;}
    }

    cout << avg << endl;
}