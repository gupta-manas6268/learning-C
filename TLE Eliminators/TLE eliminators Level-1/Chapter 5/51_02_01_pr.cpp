#include <iostream>
#include <string>

using namespace std;

int main() {
    string n;
    cin >> n;

    int len = n.length();

    // Check all possible combinations of three digits from the input number
    for (int i = 0; i < len; i++) {
        for (int j = i + 1; j < len; j++) {
            for (int k = j + 1; k < len; k++) {
                int num = (n[i] - '0') * 100 + (n[j] - '0') * 10 + (n[k] - '0');
                if (num % 8 == 0) {
                    cout << "YES" << endl;
                    cout << num << endl;
                    return 0;
                }
            }
        }
    }

    // If no divisible number is found, print "NO"
    cout << "NO" << endl;

    return 0;
}
