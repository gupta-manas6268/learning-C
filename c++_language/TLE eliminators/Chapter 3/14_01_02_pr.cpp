#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    if(n == 0){
        cout<<"0 0 0\n";
    }
    else if(n==1){
        cout<<"0 0 1\n";
    }
    else{
        vector<int> fibonacci(46,0);
        fibonacci[0] = 0;
        fibonacci[1] = 1;

        int i=2;
        for( ; i<46; i++){
            fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
            if(fibonacci[i] == n){
                break;
            }
        }
        cout<<fibonacci[i-2]<<" "<<fibonacci[i-2]<<" "fibonacci[]
    }
    return 0;
}