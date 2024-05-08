#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int x;
    cin >> x;

    // Create a bitset representation of x with size 10
    bitset<10> bs(x);

    // Perform the bitwise AND operation with (1 << 3)
    int result = (bs >> 0).to_ulong() & (1 << 2);

    cout << result << endl;

    return 0;
}
