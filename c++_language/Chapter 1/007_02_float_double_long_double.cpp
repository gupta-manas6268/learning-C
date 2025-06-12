#include<iostream>

using namespace std;

int main(){
    // *********float, double and long double Literals********


    float c = 34.4;  // Here by default 'c' is "double" according to compiler.
    float d = 34.4f; // Here by adding 'f' after 34.4 . 'd' is "float" according to compiler.
    long double e = 34.4l; // Here by adding 'l' after 34.4 . 'e' is "long double" according to compiler. 
    cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e<<endl;

    cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
    cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
    cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;

    return 0;
}