// This is Home-Work Problem.
// 

// A. Maximum Average Segment
// https://codeforces.com/edu/course/2/lesson/6/4/practice/contest/285069/problem/A



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
    int n, d; cin >> n >> d;
    vector<double> a(n);
    for(int i=0; i<n; i++){ cin >> a[i];}

    // O/P
    double left = 0, right = 100;
    double precision = 1e-12;
    vector<pair<int,int>> ans = {{0,0}, {0,0}};

    for(int count = 0; count <= 100; count++){
        double mid = (left + right)/2;
        vector<double> b(n);
        for(int i=0; i<n; i++){
            b[i] = (a[i] - mid);
        }

        double sum = 0;
        int size = 0;
        bool checker = false;
        for(int i=0; i<n; i++){
            // Filling 'ans[0]'.
            if(ans[0].second == 0){
                if((ans[0].first == 0) && (b[i] >= 0)){
                    ans[0].first = (i + 1);
                    sum += b[i];
                    size++;
                }
                else{
                    sum += b[i];
                    if(sum < 0){
                        if(size >= d){
                            ans[0].second = i;
                            checker = true;
                            break;
                        }
                        else{
                            ans[0].first = 0;
                        }
                    }
                    else if(i == (n-1)){
                        size++;
                        if(size >= d){
                            ans[0].second = (i+1);
                            checker = true;
                            break;
                        }
                        else{
                            ans[0].first = 0;
                        }
                    }
                }
            }
            // Filling 'ans[1]'.
            else{
                if((ans[1].first == 0) && (b[i] >= 0)){
                    ans[1].first = (i + 1);
                    sum += b[i];
                    size++;
                }
                else{
                    sum += b[i];
                    if(sum < 0){
                        if(size >= d){
                            ans[0].first = ans[1].first;
                            ans[1].first = 0;
                            ans[0].second = i;
                            checker = true;
                            break;
                        }
                        else{
                            ans[1].first = 0;
                        }
                    }
                    else if(i == (n-1)){
                        size++;
                        if(size >= d){
                            ans[0].first = ans[1].first;
                            ans[1].first = 0;
                            ans[0].second = i;
                            checker = true;
                            break;
                        }
                        else{
                            ans[1].first = 0;
                        }
                    }
                }
            }
        }

        if(checker == true){
            left = (mid + precision);
        }
        else{
            right = (mid - precision);
        }
    }

    cout << ans[0].first << " " << ans[0].second << endl;
}