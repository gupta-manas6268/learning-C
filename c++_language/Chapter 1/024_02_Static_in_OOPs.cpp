#include<bits/stdc++.h>
using namespace std;

class Employee{
    int Id;
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
        static void getCount(void){
            // cout << Id; // Gives an error, because a static member function doesn't
                        // access a non-static member variable like 'Id'.
            cout << "The value of count is: " << count << endl;
        }
};

int Employee :: count;

int main(){
    // See line-20. And also run this code when you 
    // uncomment line-20 of Code.

    Employee manas, rohan, elon;
    
    manas.setData();
    manas.getData();
    Employee::getCount();

    rohan.setData();
    rohan.getData();
    Employee::getCount();

    elon.setData();
    elon.getData();
    Employee::getCount();

    return 0;
}