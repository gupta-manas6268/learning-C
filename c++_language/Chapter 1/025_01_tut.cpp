// There is no Screenshot notes in this Lecture.


#include<bits/stdc++.h>
using namespace std;

class Employee{
    int Id;
    int salary;

    public:
        void setId(void){
            salary = 122;

            cout << "Enter the Id of employee: ";
            cin >> Id;
        }

        void getId(void){
            cout << "The Id of this employee is: " << Id << endl;
        }
};

int main(){
    // Employee manas, harry, rohan, ram;

    // manas.setId();
    // manas.getId();

    Employee tesla[4];

    for(int i=0; i<4; i++){
        tesla[i].setId();
        tesla[i].getId();
    }

    return 0;
}