#include<iostream>
using namespace std;

int main(){
    for(int i = 0; i < 40; i++){
        cout<<i<<endl; 
        if(i==2){
            break;
        }
        // cout<<i<<endl; // Check if we uncomment this line & comment above line .
    }
    return 0;
}