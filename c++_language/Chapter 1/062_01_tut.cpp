// There is no screenshot notes in this Lecture.


#include<bits/stdc++.h>
using namespace std;

int main(){
    ofstream out;
    out.open("062_sample.txt");
    out << "This is me\n";
    out << "This is me also";
    out << "This is mine also\n";
    out << "a";
    out.close();

    ifstream in;
    string st1, st2;
    in.open("062_sample.txt");
    // in >> st1 >> st2;
    // cout << st1 << st2;

    while (in.eof() == 0){
        getline(in, st1);
        cout << st1 << endl;
    }
    
    in.close();

    return 0;
}