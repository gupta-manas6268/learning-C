#include<iostream>
using namespace std;

int main(){
    int K, S;
    cin>>K>>S;

    int ans=0;
    for(int x=0; x<=K; x++){
        for(int y=0; y<=S-x; y++){
            int z = S-x-y;
            if(z<=K){
                ans++;
            }
        }
    }
    cout<<ans<<endl;

    return 0;
}