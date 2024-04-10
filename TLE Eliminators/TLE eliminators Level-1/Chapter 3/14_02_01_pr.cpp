#include<iostream>
using namespace std;

bool is_prime(int num){
    if(num<=1){
        return false;
    }
    for(int i=2; i<num; i++){
        if(num%i==0){
            return false;
        }
        break;
    }
    return true;
}
int main(){
    int n;
    cin>>n;

    for(int i=4; i<=1000000000-n; i++){
        if(!is_prime(i) && !is_prime(i + n)){
            cout<<i<<" "<<i + n<<endl;
        }
    }

    return 0;
}