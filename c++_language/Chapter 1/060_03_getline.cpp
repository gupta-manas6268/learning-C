#include<bits/stdc++.h>
using namespace std;

int main(){
    string st2;

    // Opening files using constructor and reading it.
    ifstream in("060_02_sample.txt"); // Read operation.
    // in >> st2;

    getline(in, st2);
    getline(in, st2); // Also Run code when you comment this code.

    cout << st2;

    return 0;
}