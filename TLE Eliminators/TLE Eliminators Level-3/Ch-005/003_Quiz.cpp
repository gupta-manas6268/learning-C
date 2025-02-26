// Now, We have Questions from Lecture-3 of 'Advanced No. Theory'.







// Correct.

// I thought about it's Solution correctly.
//  So, don't write it in Note-book.

// This is Mentor's code.

// C. Reducing Fractions
// https://codeforces.com/contest/222/problem/C





























#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

const int Global_N = 1e7 + 1;
int SPF[Global_N];
void Smallest_Prime_Factor(int n){
    for(int i=1; i < n; i++){
        SPF[i] = i;
    }
    for(int i=2; i < n; i++){
        if(SPF[i] == i){
            for(int j = i*i; j < n; j += i){
                if(SPF[j] == j){
                    SPF[j] = i;
                }
            }
        }
    }
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    Smallest_Prime_Factor(Global_N);

    int n, m; cin >> n >> m;
    map<int, int> p1, p2, p3;
    vector<int> a, b;
    for(int i=0; i<n; i++){
        int temp; cin >> temp;
        a.push_back(temp);
        while(temp > 1){
            int prime = SPF[temp], count = 0;
            while((temp % prime) == 0){
                count++; 
                temp /= prime;
            }
            p1[prime] += count;
        }
    }
    for(int j=0; j<m; j++){
        int temp; cin >> temp;
        b.push_back(temp);
        while(temp > 1){
            int prime = SPF[temp], count = 0;
            while((temp % prime) == 0){
                count++; 
                temp /= prime;
            }
            p2[prime] += count;
        }
    }

    // Solution:
    for(auto &i : p1){
        p3[i.first] = min(p1[i.first], p2[i.first]);
    }

    p1 = p2 = p3;
    for(int i=0; i<n; i++){
        int x = a[i];
        while(x > 1){
            int p = SPF[x], count = 0;
            while(x%p == 0){
                count++;
                x /= p;
            }
            count = min(count, p1[p]);
            p1[p] -= count;
            while(count--){
                a[i] /= p;
            }
        }
    }
    for(int j=0; j<m; j++){
        int x = b[j];
        while(x > 1){
            int p = SPF[x], count = 0;
            while(x%p == 0){
                count++;
                x /= p;
            }
            count = min(count, p2[p]);
            p2[p] -= count;
            while(count--){
                b[j] /= p;
            }
        }
    }

    // O/P
    cout << n << " " << m << endl;
    for(auto &it : a){
        cout << it << " ";
    }
    cout << endl;
    for(auto &it : b){
        cout << it << " ";
    }
    cout << endl;
}