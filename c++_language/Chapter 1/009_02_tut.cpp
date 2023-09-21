#include<iostream>

using namespace std;
int main(){
    // ********Selection control structure: Switch Case statements********

    
    int age;
    cout<<"Tell me your age"<<endl;
    cin>>age;

    switch (age){
    case 18:
        cout<<"You are 18"<<endl;
        break; // Also check when we comment this line.
    case 22:
        cout<<"You are 22"<<endl;
        break; // Also check when we comment this line.
    case 2:
        cout<<"You are 2"<<endl;
        break; // Also check when we comment this line.
    
    default:
        cout<<"No special cases"<<endl;
        break; // Also check when we comment this line.
    }
    cout<<"Done with switch case"<<endl;
    
    return 0;
}