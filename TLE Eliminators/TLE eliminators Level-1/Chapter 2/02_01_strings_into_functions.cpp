#include<bits/stdc++.h>
using namespace std;

void func(string &name){  // parameter
// Here, we use '&name' because we have two names i.e. name1 & name2.
    cout<<"Hello"<<name << endl;
}
int main(){
    string name1 = "Srivaths";
    string name2 = "Alankar";
    func(name1); // argument
    func(name2); // argument

    return 0;
}