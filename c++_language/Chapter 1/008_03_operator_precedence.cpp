// See important "operator precedence" from, C++ bookmarks, "CPP Operator Precedence", like *, /, %, +, -, etc.(in Video-8)
//  & also see "left to right" or "right to left" order.





#include<iostream>
#include<iomanip>

using namespace std;
int main(){
    // Operator Precedence 

    int a =3, b=4;
    int c = a*5 + b;
    cout<<c<<endl;
    int d = a*5 + b - 45 + 87; // Here d = ((((a*5) + b) - 45) + 87).
    cout<<d<<endl;

    return 0;
}