#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    int a[t], b[t], c[t];

    for(int i=0; i<t; i++){
        cin>>a[i]>>b[i]>>c[i];

        
    }

    for(int i=0; i<t; i++){
        if(a[i]==b[i]){
                if(c[i]%2 != 0){
                    cout<<"First"<<endl;
                }
                else{
                    cout<<"Second"<<endl;
                }
        }
        else if(a[i]>b[i]){
            cout<<"First"<<endl;
        }
        else{
            cout<<"Second"<<endl;
        }
    }
    return 0;
}