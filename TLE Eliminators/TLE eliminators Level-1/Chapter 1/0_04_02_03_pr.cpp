#include <bits/stdc++.h>
using namespace std;

int main()
{
    // This is exact same code which teacher make in DR session, and it works in codeforces.
    long long a, b, c;
    char s, q;
    cin >> a >> s >> b >> q >> c;
    // now we have to see if lhs == rhs
    long long lhs;
    if (s == '+')
    {
        lhs = a + b;
    }
    else if (s == '-')
    {
        lhs = a - b;
    }
    else if (s == '*')
    {
        lhs = a * b;
    }
    long long rhs = c;
    if (lhs == rhs)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << lhs << endl;
    }
    return 0;
}