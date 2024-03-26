#include<iostream>
using namespace std;

int main(){
    int year=0;
    cin>>year;


    for(int i=year+1; i<=year + 10000; i++){
    int temp = i;
    int count[10] = {0};

    while(temp > 0){
        int digit = temp%10;
        count[digit]++;
        temp/=10;
    }

    bool beautiful = true;
    for(int j=0; j<10; j++){
        if(count[j] > 1){
            beautiful = false;
            break;
        }
    }
    if(beautiful == true){
        cout<<i<<'\n';
        break;
    }
}
    return 0;
}