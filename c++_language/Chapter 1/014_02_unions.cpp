#include<iostream>
using namespace std;

union money{
    int rice;  // 'int' takes 4 bytes of memory. 
    char car;  // 'char' takes 1 bytes of memory.
    float pounds;  // 'float' takes 4 bytes of memory.
};
int main(){
    union money m1;
    m1.rice = 34;        
    m1.car = 'c';        // Here, in union we can only take one thing at a time.                

    cout<<m1.rice<<endl; // So, compiler prints garbage value in the place of rice.
    cout<<m1.car<<endl;  

    return 0;
}