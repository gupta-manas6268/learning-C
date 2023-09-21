// Quiz.1: Write mutiplication table of any number which 
//          is input from keyboard?



















#include<iostream>

using namespace std;

int main(){
    int i;
    cout<<"Enter a number: "<<endl;
    cin>>i;

    cout<<"Multiplication table of "<<i;
        cout<<"is: "<<endl;

    for (int j = 1; j <= 10; j++){
        cout<<i<<" x "<<j <<" = "<<i*j<<endl;
    }

    return 0;
}