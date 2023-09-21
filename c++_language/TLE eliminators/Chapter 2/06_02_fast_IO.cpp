#include<bits/stdc++.h>
using namespace std;

int main(){
    // Here, we don't use 'endl' because it forces the input buffer to flush.
    // So, we use '\n' rather than 'endl' in fast IO.

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // Here, by synchronizing 'cin' & 'cout' we can save lots of time, because
    // we input first and then code output the Answer.
    cout<<"Hi, enter a number: "<<'\n';

    int n;
    cin>>n;

    cout<<"Wow, your number is nice! Please enter another one: ";
    int m; cin>>m;

    // cout<<n<<endl;
    // cout<<m<<endl;

    cout<<n<<'\n';
    cout<<m<<'\n';
    
    return 0;
}