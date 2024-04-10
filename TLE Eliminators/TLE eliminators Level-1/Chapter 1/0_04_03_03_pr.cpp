#include<bits/stdc++.h>
using namespace std;

int main(){
    char c;
    cin>>c;
    int n = c;

    if(n>=90){
        n -= 32;
    }
    else{
        n += 32;
    }
    cout<<char(n)<<endl;

    return 0;
}