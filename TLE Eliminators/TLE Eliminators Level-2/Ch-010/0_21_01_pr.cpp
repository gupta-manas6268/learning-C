// Wrong.

// D - Lazy Faith
// https://atcoder.jp/contests/abc119/tasks/abc119_d
































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

    int A, B, Q; cin >> A >> B >> Q;
    vector<long long> s, t, x;
    for(int i=0; i<A; i++){
        long long temp; cin >> temp;
        s.push_back(temp);
    }
    for(int i=0; i<B; i++){
        long long temp; cin >> temp;
        t.push_back(temp);
    }
    for(int i=0; i<Q; i++){
        long long temp; cin >> temp;
        x.push_back(temp);
    }

    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    long long distance[Q] = {0};
    for(int i=0; i<Q; i++){
        int index_11 = lower_bound(s.begin(), s.end(), x[i]) - s.begin();
        if(index_11 == A){ index_11--;}
        int index_12 = (index_11 - 1);
        if(index_11 == 0){ index_12 = 1;}

        int index_21 = lower_bound(t.begin(), t.end(), x[i]) - t.begin();
        if(index_21 == B){ index_21--;}
        int index_22 = (index_21 - 1);
        if(index_21 == 0){ index_22 = 1;}

        if((s[index_11] == x[i]) || (t[index_21] == x[i])){
            if(s[index_11] == x[i]){
                distance[i] += min(abs(x[i] - t[index_21]), abs(x[i] - t[index_22]));
            }
            else{
                distance[i] += min(abs(x[i] - s[index_11]), abs(x[i] - s[index_12]));
            }
        }
        else{
            long long distance_1 = abs(x[i] - s[index_11]) + min(abs(t[index_21]-s[index_11]), abs(t[index_22]-s[index_11]));
            long long distance_2 = abs(x[i] - s[index_12]) + min(abs(t[index_21]-s[index_12]), abs(t[index_22]-s[index_12]));
            long long distance_3 = abs(x[i] - t[index_21]) + min(abs(s[index_11]-t[index_21]), abs(s[index_12]-t[index_21]));
            long long distance_4 = abs(x[i] - t[index_22]) + min(abs(s[index_11]-t[index_22]), abs(s[index_12]-t[index_22]));

            long long temp1 = min(distance_1, distance_2);
            long long temp2 = min(distance_3, distance_4);

            distance[i] = min(temp1, temp2);
        }
    }

    for(int i=0; i<Q; i++){
        cout << distance[i] << endl;
    }
}