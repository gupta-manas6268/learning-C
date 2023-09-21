#include<iostream>
using namespace std;

int main(){
    //******** Array Example********


    // int marks[4] = {23, 45, 56, 89};
    int marks[] = {23, 45, 56, 89};
    int mathMarks[4];
    mathMarks[0] = 2278;
    mathMarks[1] = 738;
    mathMarks[2] = 378;
    mathMarks[3] = 574;

    cout<<"These are math marks: "<<endl;
    cout<<mathMarks[0]<<endl;
    cout<<mathMarks[1]<<endl;
    cout<<mathMarks[2]<<endl;
    cout<<mathMarks[3]<<endl;
    cout<<endl;

    cout<<"These are total marks: "<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;

    // You can change the value of an 'Array'.
    marks[2] = 455;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    return 0;
}