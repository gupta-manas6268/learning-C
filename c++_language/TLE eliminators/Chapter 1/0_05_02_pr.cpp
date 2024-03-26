#include<iostream>
using namespace std;

int main(){
    float a;
    cin>>a;

    int x = a;
    float n = x;
    if(n-a==0){
        cout<<"int"<<" "<<n<<endl;
    }
    else{
        cout<<"float"<<" "<<n<<" "<<a-n<<endl;
    }
    return 0;
}