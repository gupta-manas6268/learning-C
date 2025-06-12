// There is no screenshot notes in this Lecture.


#include<bits/stdc++.h>
using namespace std;

// Simple method without Use of Template.
float funcAverage1(int a, int b){
    float avg = (a+b)/2.0;

    return avg;
}

float funcAverage2(int a, float b){
    float avg = (a+b)/2.0;

    return avg;
}

int main(){
    float a, b;
    a = funcAverage1(5, 2);
    cout << "The average of these numbers is : " << a << endl;
    cout << endl;

    b = funcAverage2(5, 2.4);
    cout << "The average of these numbers is : " << b << endl;

    return 0;
}