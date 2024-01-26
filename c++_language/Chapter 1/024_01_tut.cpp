#include<bits/stdc++.h>
using namespace std;

class Employee{
    int Id;
    // static int count=10; // This line will give error, because we can give it 
                      // in line-25 and line-26 of this code.
    static int count ;


    public:
        void setData(void){
            cout << "Enter the Id: ";
            cin >> Id;
            count++;
        }
        void getData(void){
            cout << "The Id of this employee is: " << Id << 
            " and this is employee number " << count << endl;
        }
};

// Count is the static data member of class Employee.

int Employee :: count; // By default, its value is '0'
// int Employee :: count=10; // Check code with this line also.

int main(){
    Employee manas, rohan, elon;
    // manas.Id = 1;     // I cannot do this as Id and count are
    // manas.count = 1;  // private.

    manas.setData();
    manas.getData();

    rohan.setData();
    rohan.getData();

    elon.setData();
    elon.getData();

    return 0;
}