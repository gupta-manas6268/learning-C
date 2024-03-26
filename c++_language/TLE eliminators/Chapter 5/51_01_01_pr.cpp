#include <iostream>

using namespace std;

int main() {
    long long X;
    cin >> X;

    long long a = 1;
    long long b = X;

    // Find the smallest possible values for a and b such that LCM(a, b) = X
    for (long long i = 2; i * i <= X; i++) {
        if (X % i == 0) {
            a = i;
            b = X / i;
            break;
        }
    }

    cout << a << " " << b << endl;
    
    return 0;
}
