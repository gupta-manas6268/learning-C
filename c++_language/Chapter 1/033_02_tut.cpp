#include<bits/stdc++.h>
using namespace std;

class BankDeposit{
    int principal;
    int years;
    float interestRate;
    float returnValue;

public:
    BankDeposit() {       // See these 6-lines of this code carefully and compare
        principal = 0;    // these lines with the previous code.
        years = 0;        // And also compare the output of this code and the 
        interestRate = 0; // previous code.
        returnValue = 0;  //
    }                     //

    BankDeposit(int p, int y, float r);  // 'r' can be a value like 0.04
    BankDeposit(int p, int y, int r);  // 'r' can be a value like 14

    void show();
};

BankDeposit :: BankDeposit(int p, int y, float r){
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;

    for(int i=0; i<y; i++){
        returnValue *= (1 + interestRate);
    }
}

BankDeposit :: BankDeposit(int p, int y, int r){
    principal = p;
    years = y;
    interestRate = float(r)/100;
    returnValue = principal;

    for(int i=0; i<y; i++){
        returnValue *= (1 + interestRate);
    }
}

void BankDeposit :: show(){
    cout << endl << "Principal amount was " << principal << "."
         << endl << "Return value after " << years << " years is " 
         << returnValue << endl;
}

int main(){
    BankDeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;

    bd3.show();

    cout << "Enter the value of p,y and r" << endl;
    cin >> p >> y >> r;

    bd1 = BankDeposit(p, y, r);
    bd1.show();

    cout << "Enter the value of p,y and R" << endl;
    cin >> p >> y >> R;

    bd2 = BankDeposit(p, y, R);
    bd2.show();

    return 0;
}
