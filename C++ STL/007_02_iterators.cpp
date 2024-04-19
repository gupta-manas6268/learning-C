// From Lecture-4 time->[10: 18].



// This code is not giving me error because of line-4 & line-5.


#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Iterators point to pairs.
    vector<pair<int, int>> v_p = {{1, 2}, {2, 3}, {3, 4}};
    vector<pair<int, int>>::iterator it;
    for (it = v_p.begin(); it != v_p.end(); ++it) {
        cout << (*it).first << " " << (*it).second << endl;
    }
    cout << endl;

    for (it = v_p.begin(); it != v_p.end(); ++it) {
        cout << (it->first) << " " << (it->second) << endl;
    }

    return 0;
}