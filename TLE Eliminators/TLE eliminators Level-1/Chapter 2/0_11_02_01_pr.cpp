#include<iostream>
using namespace std;

int main(){
    // This code will not work.
    
    int n;
    cin>>n;

    if(n==2){
        cout<<"YES"<<endl;
    }
    for(int i=2; i<n; i++){
        if(n%i == 0){
            cout<<"NO"<<endl;
            break;
        }
        else if(i == n-1 && n%i != 0){
            cout<<"YES"<<endl;
        }
    }
    return 0;
}