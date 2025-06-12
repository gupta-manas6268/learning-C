#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >>b>>c;

    int mn = min(a, min(b, c));
    int mx = max(a, max(b, c));

    int middle = a + b + c - mn - mx;

    cout<<mn<<endl<<middle<<endl<<mx<<endl;
    cout<<endl;
    cout<<a<<endl<<b<<endl<<c<<endl;
    
    return 0;
}