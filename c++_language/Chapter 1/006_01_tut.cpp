// There are two types of header files:
// 1. System header files: It comes with the compiler.
#include<iostream>
// 2. User defined header files: It is written by the 
//     programmer.

#include "06_this.h" // --→ This will produce an error if 
                  //      "this.h" is not present in 
                  //       the current directory.

using namespace std;

int main(){
    cout<<"This is hello world program";
    return 0;
}