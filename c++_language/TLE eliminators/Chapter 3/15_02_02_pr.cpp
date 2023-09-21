#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        string s;
        cin >> s;
        bool flag = true;
        int idx = -1;
        for(int i=0; i<s.length() - 1; i++){
            if(s[i] == '1' && s[i+1] == '1'){
                idx = i;
                break;
            }
        }
        if(idx ==-1){
            cout<<"YES\n";
            continue;
        }
        for(int j= idx + 1; j< s.length() - 1; j++){
            if(s[j] == '0' && s[j+1] == '0')
            flag = false;
        }
        if(flag)
        cout << "YES\n";
        else
        cout<<"NO\n";
    }

    return 0;
}