#include<iostream>
using namespace std;

int func(string &name){ 
// int func(string name){ 
    name = "123";
    cout<<"Function: "<< name <<endl;

    return 10;
}
int main(){
    string outside_name = "Srivaths";
    
    cout << func(outside_name) <<endl; // argument
    cout << outside_name <<endl;

    return 0;
}