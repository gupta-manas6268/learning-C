#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin>>x;
    for(int i=0; i<=x-1; i++){
    int a, b;
    cin>>a>>b;

    if(a>=b){
        long long int sum = 1LL * a*(a+1)/2 - 1LL * b*(b-1) /2;
        cout<<sum<<endl;
    }
    else{
        swap(b, a);
        long long int sum = 1LL * a*(a+1)/2 - 1LL * b*(b-1) /2;
        cout<<sum<<endl;
    }
    }

    return 0;
}