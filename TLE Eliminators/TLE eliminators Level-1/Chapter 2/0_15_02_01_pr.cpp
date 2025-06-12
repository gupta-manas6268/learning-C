#include<iostream>
using namespace std;

void house(int a, int  b, int c, int d, int e){
    if(((a==b==c) && a!=d && d==e) || ((a==b==d) && a!=e && c==e) || ((a==b==e) && a!=c && c==d) || ((a==c==d) && a!=b && b==e) || ((a==c==e) && a!=b && b==d) || ((a==d==e) && a!=b && b==c) || ((b==c==d) && a!=b && a==e) || ((b==c==e) && a!=b && a==d) || ((b==d==e) && a!=b && a==c) || ((c==d==e) && a!=c && a==b)){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}
int main(){
    int A, B, C, D, E;
    cin>>A>>B>>C>>D>>E;

    house(A, B, C, D, E);
    
    // if(house(A, B, C, D, E)==1){
    //     cout<<"Yes"<<endl;
    // }
    // else{
    //     cout<<"No"<<endl;
    // }

    return 0;
}