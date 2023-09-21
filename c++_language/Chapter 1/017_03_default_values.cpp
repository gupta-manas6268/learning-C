#include<iostream>
using namespace std;

// float moneyReceived(float factor=1.04, int currentMoney){ // If we uncomment this line then
                                                             // this code will give error.
float moneyReceived(int currentMoney, float factor=1.04){
    return currentMoney * factor;
}
// So, always we have to print default arguments in extreme right .
// & we have to print simple arguments in extreme left .

int main(){
    int money;
    cout<<"What is your money deposit in your bank account in Rs"<<endl;
    cin>>money;
    cout<<"If you have "<<money<<" Rs in your bank accout, you will receive "<<moneyReceived(money)<< " Rs after 1 year"<<endl;
    cout<<"For VIP: If you have "<<money<<" Rs in your bank accout, you will receive "<<moneyReceived(money, 1.10)<< " Rs after 1 year"<<endl;

    return 0;
}