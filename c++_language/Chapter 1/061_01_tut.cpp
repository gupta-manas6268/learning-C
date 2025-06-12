// There is screenshot notes in this Lecture.


#include<bits/stdc++.h>
using namespace std;

int main(){
    // Connecting our file with 'hout' stream.
    ofstream hout("061_01_sample.txt");

    // Creating a name string and filling it with string entered
    //  by the user.
    cout << "Enter your name: ";

    string name;
    cin >> name;

    // Writing a string to the file
    hout << "My name is " + name;

    hout.close(); // To close the file

    ifstream hin("061_01_sample.txt");
    string content;
    hin >> content;

    cout << "The content of this file is: " << content; // Only print first word of the file.

    return 0;
}