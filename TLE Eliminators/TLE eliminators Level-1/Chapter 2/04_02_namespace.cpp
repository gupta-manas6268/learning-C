#include<bits/stdc++.h>
using namespace std;

namespace test{
    int i = 1;
    int j = 2;

    void xyz(){
        cout<<"Hello World"<<endl;
    }
} 
namespace dummy{
    int i = 3;
    int j = 4;
}
namespace precise{
    double PI = 3.14123123;
    double SQRT2 = 1.14123123;
}
namespace rounded{
    double PI = 3.14;
    double SQRT2 = 1.14;

    // cin>>PI; // By inputting or outputting inside namespace the code will show error.
    // Show by uncommenting above line the code will show error.
}
using namespace test;
using namespace precise;
// using namespace dummy; // If we uncomment this line this code will show error because of conflicting names of 'i' & 'j'.
int main(){
    cout << i <<endl;
    cout << j <<endl;
    cout << dummy::i <<endl;
    cout << dummy::j <<endl;

    // Functions in "namespace".
    test::xyz();

    // These two lines will give nothing because we did not "cout" these lines.
    PI;
    rounded::PI;

    return 0;
}