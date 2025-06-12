#include<iostream>

using namespace std;
int main(){
    // ********Selection control structure: If else-if else ladder********

    
    int age;
    cout<<"Tell me your age"<<endl;
    cin>>age;
    if(age<0){
        cout<<"You are not yet born"<<endl;
    }
    else if((age<18) && (age>0)){
        cout<<"You can not come to my party"<<endl;}
    else if(age==18){
        cout<<"You are a kid and you will get a kid pass to the party"<<endl;
    }
    else{
       cout<<"You can come to the party"<<endl;
    }
    
    return 0;
}