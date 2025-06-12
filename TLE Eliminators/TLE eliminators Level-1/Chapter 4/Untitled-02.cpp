#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int strlen(string s){
    int a = 0;
    
    for(int i=0; i; i++){
        if(s[i] == '\0'){break;}
        else{a++;}
    }
    return a;
}

void upperString(string s){
    int l = strlen(s);

    for(int i=0; i<l; i++){
        if(s[i] < 97){ s[i] -= 32;}
    }
}
signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    string s1, s2;
    cin>>s1>>s2;

    int l = strlen(s1);
    int a = -1, b = 1, c = 0;

    for(int i=0; i<l; i++){
        if(s1[i] > s2[i]){ cout<< a <<endl; break;}
        else if(s1[i] < s2[i]){ cout<< b << endl; break;}t
        else if((i == l-1) && (s1[i] == s2[i])){ cout<< c << endl;}
    }
}