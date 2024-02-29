// Run this code and check the OUTPUT carefully.

#include<bits/stdc++.h>
using namespace std;

int objectCount = 0;

// 1. Destructor never takes an argument nor does it return any value.
// 2. Destructor destroys a constructor by freeing all dynamic memory
//     which a particular constructor uses.

class num{

public:
    num(){
        objectCount++;
        cout << "This is the time when constructor is called for object number " 
                 << objectCount << endl;
    }

    ~num(){  // This is the Destructor of constructor 'num'
        cout << "This is the line when my destructor is called for object number " 
                 << objectCount << endl;
        
        objectCount--;
    }
};

int main(){
    cout << "We are inside our main function." << endl;
    cout << "Creating first object n1" << endl;

    num n1;  // This line makes a block.
             // A Block is a data variable in which after exiting the 
             //  block the variables we made inside the block(which are n2 and n3, here), will destroy
             //   and their memory data also destroys and that memory gets free.
    {
        cout << "Entering this block" << endl;
        cout << "Creating two more objects" << endl;

        num n2, n3;
        cout << "Exiting this block" << endl;
    }

    cout << "Back to main" << endl;

    // When the code gets over, then the n1 constructor which we made 
    //  by opening the block, also destroys by the Destructor.
    // (See the Last line of the OUTPUT of the carefully. You will understand 
    //   above commented lines.)

    return 0;
}