// Correct.

// A. Bear and Prime 100
// https://codeforces.com/problemset/problem/679/A




































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

vector<int> sieve_Prime(int n){
    bool primes[n+1];
    fill(primes, primes+n+1, true);

    primes[0] = primes[1] = false;
    for(int i=2; i*i <= n; i++){
        if(primes[i] == true){
            for(int j = i*i; j <= n; j += i){
                primes[j] = false;
            }
        }
    }

    vector<int> ans;
    for(int i=0; i<=n; i++){
        if(primes[i] == true){
            ans.push_back(i);
        }
    }

    return ans;
}

// Find Sqrt.
bool func(int mid, int n){
    return mid*mid <= n;
}

int Sqrt(int n){
    int start = 1, end = n, ans = -1;

    while(start <= end){
        int mid = start + (end - start)/2;

        if(func(mid, n) == true){
            ans = mid;
            start = (mid + 1);
        }
        else{
            end = (mid - 1);
        }
    }

    return ans;
}

signed main(){

    vector<int> Primes = sieve_Prime(50);
    int Sqrt_100 = Sqrt(100);

    vector<int> Square;
    for(int i=0; i < Primes.size(); i++){
        if(Primes[i] < Sqrt_100){
            Square.push_back(Primes[i] * Primes[i]);
        }
        else{ break;}
    }
    
    bool ans = false;

    int i = 0;
    while((ans != true) && (i < Square.size())){
        cout << Square[i] << endl;

        string response; cin >> response;
        if(response == "yes"){
            ans = true;
        }
        i++;
    }

    int bool_true = 0;
    int j = 0;
    while((ans != true) && (bool_true < 2) && (j < Primes.size())){
        cout << Primes[j] << endl;
        string response; cin >> response;
        if(response == "yes"){
            bool_true++;
            if(bool_true == 2){
                ans = true;
            }
        }
        j++;
    }

    if(ans == true){
        cout << "composite" << endl;
    }
    else{
        cout << "prime" << endl;
    }
}