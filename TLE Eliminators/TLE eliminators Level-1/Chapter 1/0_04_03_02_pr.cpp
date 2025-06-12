#include<bits/stdc++.h>
using namespace std;

int main(){
    // tolower() will help us convert to lower case.
    // toupper() will help us convert to upper case.
    // islower() this will tell us if its lower or upper.
    // isupper() this will tell us if its upper case.

    char c;
    cin>>c;

    if(islower(c)){
        char ch = toupper(c);
        cout<<ch<<endl;
    }
    else{
        char ch = tolower(c);
        cout<<ch<<endl;
    }

    return 0;
}