#include<iostream>
using namespace std;

int main(){
    int x;
    cin>>x;
    for(int i=0; i<=x-1; i++){
    long long int a, b;
    cin>>a>>b;

    if(a>=b){
        long long int sum = (a*(a+1))/2 - (b*(b-1))/2;
        cout<<sum<<endl;
    }
    else{
        long long int sum = (b*(b+1))/2 - (a*(a-1))/2;
        cout<<sum<<endl;
    }
    }

    return 0;
}