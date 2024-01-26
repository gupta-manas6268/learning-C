#include<bits/stdc++.h>
using namespace std;

class Shop{
    int itemId[100];    // These three items by default are private.
    int itemPrice[100]; // These three items by default are private.
    int counter;        // These three items by default are private.

public:
    void initCounter(void){ counter = 0;}
    void getPrice(void);
    void setPrice(void);
    void displayPrice(void);
};

void Shop :: setPrice(void){
    cout << "Enter Id of your item no. " << counter+1 << endl;
    cin >> itemId[counter];

    cout << "Enter Price of your item" << endl;
    cin >> itemPrice[counter];

    counter++;
}

void Shop :: displayPrice(void){
    for(int i=0; i < counter; i++){
        cout << "The Price of item with Id " << itemPrice[i] << endl;
    }
}

int main(){

    Shop dukaan;
    dukaan.initCounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayPrice();

    return 0;
}