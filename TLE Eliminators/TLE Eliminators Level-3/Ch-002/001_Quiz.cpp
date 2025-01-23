// 

// E - Average and Median
// https://atcoder.jp/contests/abc236/tasks/abc236_e



#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

double Average(int n, vector<int> A){
    double left = *min(A.begin(), A.end());
    double right = *max(A.begin(), A.end());
    double precision = 1e-4;
    double avg;

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
        if(sum > 0){
            avg = mid;
            left = (mid + precision);
        }
        else{
            right = (mid - precision);
        }
    }

    return avg;
}

int Median(int n, vector<int> A){
    int left = 0, right = n-1;
    vector<int> sort_A = A;
    sort(sort_A.begin(), sort_A.end());
    int median;

    while(left <= right){
        int mid_Index = (left + right)/2;
        int mid = sort_A[mid_Index];
        vector<int> B(n), C(n);

        for(int i=0; i<n; i++){
            if(A[i] >= mid){
                B[i] = 1;
            }
            else{
                B[i] = -1;
            }
        }
        for(int i=0; i<n; i++){
            if(i == 0){ C[i] = B[i];}
            else if(i == 1){
                int temp1 = 0;
                C[i] = B[i] + max(C[i-1], temp1);
            }
            else{
                C[i] = B[i] + max(C[i-1], C[i-2]);
            }
        }

        int sum = max(C[n-1], C[n-2]);
        if(sum > 0){
            median = mid;
            left = (mid_Index + 1);
        }
        else{
            right = (mid_Index - 1);
        }
    }

    return median;
}

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
    double avg = Average(n, A);
    int median = Median(n, A);

    cout << setprecision(10) << fixed;
    cout << avg << endl;
    cout << median << endl;
}