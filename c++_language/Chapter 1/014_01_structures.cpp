#include<iostream>
using namespace std;

typedef struct employee{
    int eId;
    char favChar;
    float salary;
} ep;

int main(){
    ep manas;
    struct employee shubham;
    struct employee rohan;
    manas.eId = 1;
    manas.favChar = 'c';
    manas.salary = 120000;
    cout<<"The value is "<<manas.eId<<endl;
    cout<<"The value is "<<manas.favChar<<endl;
    cout<<"The value is "<<manas.salary<<endl;
    
    return 0;
}