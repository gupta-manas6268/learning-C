#include<iostream>
using namespace std;

// void func(string &name){ // name = outside_name = "Srivaths" = "123"
void func(string name){ // name = outside_name = "Srivaths" = "123"
    name = "123";
    cout<<"Function: "<< name <<endl;
}
int main(){
    string outside_name = "Srivaths";
    // string name2 = "Alankar";
    func(outside_name); // argument
    // func(name2); // argument

    cout << outside_name <<endl;
    // cout << name2 <<endl;

    return 0;
}