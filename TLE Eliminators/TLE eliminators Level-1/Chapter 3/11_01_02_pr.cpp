#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    for(int i=1; i<=t; i++){
        int a, b, c, d;
        cin>>a>>b>>c>>d;

        if((min(a, b) > max(c, d)) || (min(c, d) > max(a, b))){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }

    cerr<<" "<<endl;
    
    return 0;
}