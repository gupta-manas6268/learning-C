#include<iostream>
using namespace std;

int main(){
    // This code will not work.
    
    int n;
    cin>>n;

    for(int i=2; i<=n; i++){
        for(int j=2; j<i; j++){
            if(i==2){
            cout<<i<<" ";
            break;
            }
            if(i%j == 0){
                break;
            }
            else if(j == i-1 && i%j != 0){
                cout<<i<<" ";
            }
        }
    }
    return 0;
}