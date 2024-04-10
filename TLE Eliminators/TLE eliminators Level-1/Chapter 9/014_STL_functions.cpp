#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    // 'min_element' & 'max_element' Functions.

    vector<int> vec1 = {1, 2, 4, 5, 3, 12, 4, 2};

    cout << *min_element(vec1.begin(), vec1.end()) << endl;
    cout << min_element(vec1.begin(), vec1.end()) - vec1.begin() << endl;  // It gives us the index of 'min_element' of the vector.
    cout << endl;

    cout << *max_element(vec1.begin(), vec1.end()) << endl;
    cout << max_element(vec1.begin(), vec1.end()) - vec1.begin() << endl;  // It gives us the index of 'max_element' of the vector.
    cout << endl;


    // 'reverse' functions.

    vector<int> vec2 = {1, 2, 4, 5, 3, 12, 4, 2};
    reverse(vec2.begin(), vec2.end()); // It reverse the element the vector.

    for(int i=0; i<8; i++){
        cout << vec2[i] << " ";
    }
    cout << endl << endl;


    // 'find' functions.
    vector<int> vec3 = {1, 2, 4, 5, 3, 12, 4, 2}; 
    cout << find(vec3.begin(), vec3.end(), 12) - vec3.begin() << endl; // It gives index of a number.

    cout << find(vec3.begin(), vec3.end(), 13) - vec3.begin() << endl; // Here, as '13' is not in this vector. So, It write a garbage value which is '8' as, size of this vector is 8. So, vec3[8] does not exist.
    // find(vec3.begin(), vec3.end(), 13) = vec3.end(). If value doesn't exist

}