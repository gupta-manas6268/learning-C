#include <iostream>
#include <vector>

using namespace std;

vector<int> solve(int n) {
    vector<int> permutation;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            permutation.push_back(i);
        }
    }
    for (int i = n; i >= 1; i--) {
        if (i % 2 == 0) {
            permutation.push_back(i);
        }
    }
    return permutation;
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        vector<int> permutation = solve(n);
        for (int j = 0; j < n; j++) {
            cout << permutation[j] << " ";
        }
        cout << endl;
    }

    return 0;
}
