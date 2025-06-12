// Correct.

// Structs
// https://www.hackerrank.com/challenges/c-tutorial-struct/problem?isFullScreen=true



















#include<bits/stdc++.h>
using namespace std;

struct Student{
    int age, standard;
    string first_name, last_name;
}Student;

int main(){
    struct Student st;
    cin >> st.age >> st.first_name >> st.last_name >> st.standard;

    cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard << endl;

    return 0;
}