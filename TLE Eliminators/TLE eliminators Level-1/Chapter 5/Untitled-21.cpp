#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int maximum(int a, int b){
    if(a >= b){ return a;}
    else{ return b;}
}

int GCD(int a, int b){
    vector<int> facts1, facts2;
    int length1 = 0, length2 = 0;

    // Take prime-factor of 'a'.
    for(int i=2; i*i <= a; i++){
        while(a%i == 0){
            facts1.push_back(i);
            length1++;
            a /= i;
        }
    }
    if(a > 1){ facts1.push_back(a); length1++;}

    // Take prime-factor of 'b'.
    for(int i=2; i*i <= b; i++){
        while(b%i == 0){
            facts1.push_back(i);
            length2++;
            b /= i;
        }
    }
    if(b > 1){ facts1.push_back(b); length2++;}

    // int max1 = maximum(length1, length2);

    // Make gcd(a, b).
    bool breakLoop = false;
    int minI = 0, minJ = 0;
    int ans = 1;

    for(int i=minI; i<length1; i++){
        if(breakLoop == true){ break;}

        for(int j=minJ; j<length2; j++){
            if(facts1[i] == facts2[j]){
                ans *= facts1[i];
                i++; j++;
                minI = i; minJ = j;
                break;
            }
            else if(facts1[i] < facts2[j]){
                if(i == (length1-1)){
                    breakLoop = true;
                    break;
                }
                minI = i+1; minJ = j;
                i++;
                break;
            }
            else if((facts1[i] > facts2[j]) && (j == (length2-1))){
                breakLoop = true;
                break;
            }
        }
    }

    return ans;
}

int LCM(int a, int b){
    int ans = ((a*b)/ GCD(a, b));
    return ans;
}

signed main(){
    // ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        int n; cin >> n;
        int d[n]; 
        for(int i=0; i<n; i++){ cin >> d[i];}

        int lcm = 1;
        for(int i=0; i<n; i++){
            lcm = LCM(lcm, d[i]);
        }
        cout << lcm << endl;
    }
}