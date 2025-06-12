#include<iostream>
using namespace std;

int main(){
    int x = 5;
    if(x == 5){
        int x = 10;
        cout<<"inside if "<<x<<endl;
    }
    cout<<"outside if "<<x<<endl;
    
    return 0;
}