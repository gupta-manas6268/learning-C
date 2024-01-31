// There is no Screenshot notes in this Lecture.


#include<bits/stdc++.h>
using namespace std;

// Syntax for Initialization list in Constructor:
// Constructor (argument-list) : initialization-section{
//   // assignment + other code;
// }

// class Test{
//     int a;
//     int b;
// public:
//     Test(int i, int j) : a(i), b(j){ costructor-body}
// };

class Test{
    int a;
    int b;
public:
    // Test(int i, int j) : a(i), b(j){
    // Test(int i, int j) : a(i), b(i + j){
    // Test(int i, int j) : a(i), b(2 * j){
    // Test(int i, int j) : a(i), b(a + j){
    // Test(int i, int j) : b(j), a(i + b){  // This line will give garbage value because 'a' 
                                          //  will be initialized first.

    // Test(int i, int j) : a(i){   b = j; // This line will work fine.
    Test(int i, int j){ a = i;   b = j; // This line will work fine.
        
        cout << "Constructor executed" << endl;
        cout << "Value of a is: " << a << endl;
        cout << "Value of b is: " << b << endl;
    }
};


int main(){
    Test t(4, 6);

    return 0;
}