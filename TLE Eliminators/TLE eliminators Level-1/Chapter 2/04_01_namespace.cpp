#include<bits/stdc++.h>
using namespace std;

namespace test{
    int i = 1;
    int j = 2;
} 
namespace dummy{
    int i = 3;
    int j = 4;
}

int main(){
    cout << test::i <<endl;
    cout << test::j <<endl;
    cout << dummy::i <<endl;
    cout << dummy::j <<endl;

    return 0;
}