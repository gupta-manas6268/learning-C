#include<iostream>
using namespace std;

int main(){
    double xyz = 1000000000000000013; 
    //  don’t print big numbers with
    // floating-point datatypes because it ignores the last few digits.

    // floating-point datatypes -→ Ex-→ float/double/long double
    cout<< (long long) xyz <<endl;

    // It gives us in scientific notation.
    cout<< xyz <<endl;

    // It gives us wrong number because 'xyz' is a long number.
    cout<< (int)xyz <<endl;
    

    return 0;
}