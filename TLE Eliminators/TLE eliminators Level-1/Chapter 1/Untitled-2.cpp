#include<bits/stdc++.h>
using namespace std;

int main(){
    char x;
    cin>>x;

    if(x<97){
        char y = x+32;
        cout<<y<<endl;
    }
    else{
        char y = x-32;
        cout<<y<<endl;
    }
    
    return 0;
}