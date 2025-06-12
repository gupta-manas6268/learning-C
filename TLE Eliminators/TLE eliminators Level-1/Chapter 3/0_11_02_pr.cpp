#include<iostream>
#include<cmath>
using namespace std;

int squareRoot(int n, int m){
    int x = sqrt(n);
    int y = sqrt(m);

    if(x>=y){
        return x;
    }
    else{
        return y;
    }
}
int main(){
    int n, m;
    cin>>n>>m;

    int a, b;

    int x;
    x = squareRoot(n, m);

    int ans = 0;
    for(int a=0; a<=x; a++){
        for(b=0; b<=x; b++){
            // if((pow(a, 2) + b == n) && (a + pow(b, 2) == m)){  // Do not use "pow", because it can give precision error in some unlucky test cases. Because it is used for double.
            if(((a*a) + b == n) && (a + (b*b) == m)){
                ans++;
                break;
            }
        }
    }

    cout<<ans<<endl;

    return 0;
}