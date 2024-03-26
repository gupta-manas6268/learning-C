// There is no Screenshot notes in this Lecture.


#include<bits/stdc++.h>
using namespace std;

class ShopItem{
    int Id;
    float price;
public:
    void setData(int a, float b){
        Id = a;
        price = b;
    }

    void getData(void){
        cout << "Code of this Item is: " << Id << endl;
        cout << "Price of this Item is: " << price << endl;
    }
};

int main(){
    int size = 3;
    ShopItem *ptr = new ShopItem[size];
    ShopItem *ptrTemp = ptr;

    int p;
    float q;
    for(int i=0; i<size; i++){
        cout << "Enter Id and Price of item " << i+1 << endl;
        cin >> p >> q;

        ptr->setData(p, q);
        ptr++;
    }

    // for(int i=0; i < size; i++){                 // This loop gives me wrong OUTPUT because
    //     cout << "Item Number:" << i+1 << endl;   // in line-31 of code, We have incremented
    //     ptr->getData();                          // ptr upto (ptr+3) and then this same will
    //     ptr++;                                   // give me error.
    // }                                            // So, we use 'ptr' to 'ptrTemp'.

    for(int i=0; i < size; i++){
        cout << "Item Number:" << i+1 << endl;
        ptrTemp->getData();
        ptrTemp++;
    }

    return 0;
}