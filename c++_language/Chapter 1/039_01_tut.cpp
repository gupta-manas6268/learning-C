// From [06:44] of this Lecture.


#include<bits/stdc++.h>
using namespace std;

class Base{

protected:
    int a;
private:
    int b;
};

// For a Protected member:
//                         Public derivation   Private derivation   Protected derivation
// 1. Private members
// 2. Protected members
// 3. Public members

class Derived : protected Base{

};

int main(){
    
    return 0;
}