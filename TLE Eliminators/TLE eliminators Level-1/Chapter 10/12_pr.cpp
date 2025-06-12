// Correct.

// B. Three Threadlets
// https://codeforces.com/contest/1881/problem/B













































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int HCF(vector<int> &facts_1, vector<int> &facts_2, vector<int> &facts_3){

    vector<int> v(max({facts_1.size(), facts_2.size(), facts_3.size()}));   // Ensure enough space.
    vector<int> :: iterator it;
    it = set_intersection(facts_1.begin(), facts_1.end(), facts_2.begin(), facts_2.end(), v.begin());
    v.resize(it - v.begin());  // Resize 'v' to fit the intersection elements.
    // Above line is very Important without which this code gives wrong OUTPUT.

    it = set_intersection(v.begin(), it, facts_3.begin(), facts_3.end(), v.begin());
    v.resize(it - v.begin());

    int ans = 1;
    for(int i=0; i < v.size(); i++){
        ans *= v[i];
    }
    return ans;
}

vector<int> factor(int n){
    vector<int> facts;
    facts.push_back(1);
    for(int i=2; i*i <= n; i++){
        while(n%i == 0){
            facts.push_back(i);
            n /= i;
        }
    }
    if(n > 1){
        facts.push_back(n);
    }

    return facts;
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        int a, b, c; cin >> a >> b >> c;
        vector<int> facts_1 = factor(a);
        vector<int> facts_2 = factor(b);
        vector<int> facts_3 = factor(c);

        int hcf = HCF(facts_1, facts_2, facts_3);

        vector<int> v;
        v.push_back(a); 
        v.push_back(b); 
        v.push_back(c);
        sort(v.begin(), v.end()); 

        if(v[0] != hcf){  // No equal => No number is equal to 'hcf'.
            cout << "NO" << endl;
        }
        else{
            if(v[1] != hcf){  // 1st equal => 1st number is equal to 'hcf'.
                int a = (v[1]/ hcf);
                int b = (v[2]/ hcf);

                if((a == 2) && ((b == 2) || (b == 3))){
                    cout << "YES" << endl;
                }
                else{
                    cout << "NO" << endl;
                }
            }
            else{   // 2nd equal => 2nd number is equal to 'hcf'.
                int a = (v[2]/ hcf);
                if((a == 1) || (a == 2) || (a == 3) || (a == 4)){
                    cout << "YES" << endl;
                }
                else{
                    cout << "NO" << endl;
                }
            }
        }
    }
}