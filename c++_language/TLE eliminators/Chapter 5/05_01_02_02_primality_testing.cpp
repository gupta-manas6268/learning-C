#include<bits/stdc++.h>
using namespace std;

bool is_prime(int n) {
    for(int i = 2; i*i <= n; i++)
        if(n % i == 0)
            return false;

    return n > 1; // If the loop completes without finding a factor,
                  //  and (n > 1), it returns 'true';
                  //  else(n <= 1), it returns 'false'.
}

int main(){
    int n; cin >> n;

    if(is_prime(n)){
        cout << n << " is a prime number." << endl;
    }
    else{
        cout << n << " is a non-prime number." << endl;
    }

    return 0;
}