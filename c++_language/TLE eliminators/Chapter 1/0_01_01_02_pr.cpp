#include<iostream>
using namespace std;

int main(){
    // We can't use this % operator.
    
    int a,b;
    cin>>a>>b;

    int x = a - (a/b)*b;
    int y = b - (b/a)*a;

    if(x==0 || y==0){
        cout<<"Multiples"<<endl;
    }
    else{
        cout<<"No Multiples"<<endl;
    }

    return 0;
}