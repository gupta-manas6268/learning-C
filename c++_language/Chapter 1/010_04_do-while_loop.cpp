#include<iostream>

using namespace std;

int main(){
    /********do-while loop in C++********/

    // Syntax for 'do-while loop'
    // do{
    //      C++ statements;
    // }while(condition)

    int i = 1;
    do{
        cout<<i<<endl;
        i++;
    }while(i<=40); 
    // }while(false); // Check if we uncomment this line.


    // **Example of infinite while loop**
    // int i=1;
    // do{
    //     cout<<i<<endl;
    //     i++;
    // }while (true);

    return 0;
}