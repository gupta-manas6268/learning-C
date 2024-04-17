// 

// Chef of the Year
// https://www.codechef.com/LRNDSA03/problems/CVOTE?tab=ide










#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int n, m; cin >> n >> m;

    vector <string> s1(n);
    for(int i=0; i<n; i++){
        cin >> s1[i];
    }
    vector <string> s2(m);
    for(int i=0; i<m; i++){
        cin >> s2[i];
    }

    vector <string> s11(n);
    vector <string> s12(n);
    for(int i=0; i<n; i++){
        int j = 0;
        while(s1[i][j] != ' '){
            s1[i][j] = s11[i][j];
            j++;
        }
        int k = j;
        while(s1[i][j] != '\n'){
            s1[i][j] = s12[i][j-k];
            j++;
        }
    }
    sort(s11.begin(), s11.end()); // is this line lexicographically sort strings.
    sort(s12.begin(), s12.end());

    int name[n];
    int country[n];
    for(int i=0; i<m; i++){
        int left = 0, right = n-1;
        string target = s2[i];

        while(left < right){
            int mid = (left + right)/ 2;

            if(s11[mid] < target){
                left = mid + 1;
            }
            else{
                right = mid - 1;
            }
        }
    }
}