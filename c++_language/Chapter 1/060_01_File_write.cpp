// There is no Screenshot notes in this Lecture.


#include<bits/stdc++.h>
using namespace std;

// The useful 3 classes for working with files in C++ are:
// 1. fstreambase
// 2. ifstream --> derived from fstreambase
// 3. ofstream --> derived from fstreambase

// In order to work with files in C++, you will have to open it.
// Primarily, there are 2 ways to open a file:
// 1. Using the constructor
// 2. Using the member function 'open()' of the class.

int main(){
    string st = "Manas Gupta";

    // Opening files using constructor and writing it.
    ofstream out("060_01_sample.txt"); // Write operation in files.
    out << st;

    return 0;
}