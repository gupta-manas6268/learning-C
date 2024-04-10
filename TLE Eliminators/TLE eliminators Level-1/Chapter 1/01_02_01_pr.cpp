#include<iostream>
using namespace std;

int main(){
    int a, b, c;
    cin>>a>>b>>c;

    if(a>=b && a>=c){
        if(b>=c){
            cout<<"\n"<<"\n"<<c<<"\n"<<b<<"\n"<<a<<"\n\n"<<a<<"\n"<<b<<"\n"<<c<<"\n";
        }
        else{
            cout<<"\n"<<b<<"\n"<<c<<"\n"<<a<<"\n\n"<<a<<"\n"<<b<<"\n"<<c<<"\n";
        }
    }
    else if(b>=a && b>=c){
        if(a>=c){
            cout<<"\n"<<c<<"\n"<<a<<"\n"<<b<<"\n\n"<<a<<"\n"<<b<<"\n"<<c<<"\n";
        }
        else{
            cout<<"\n"<<a<<"\n"<<c<<"\n"<<b<<"\n\n"<<a<<"\n"<<b<<"\n"<<c<<"\n";
        }
    }
    else{
        if(a>=b){
            cout<<"\n"<<b<<"\n"<<a<<"\n"<<c<<"\n\n"<<a<<"\n"<<b<<"\n"<<c<<"\n";
        }
        else{
            cout<<"\n"<<a<<"\n"<<b<<"\n"<<c<<"\n\n"<<a<<"\n"<<b<<"\n"<<c<<"\n";
        }
    }

   
    return 0;
}