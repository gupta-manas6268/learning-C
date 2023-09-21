#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    for(int i=0; i<t; i++){
        char s[2*100000];
        cin>>s;

        char *ptr = s;
        int length = 0;
        while(s!='\0'){
            length++;
        }
        cout<<length;
        for(int i=0; i<2*100000; i++){
            if(s[i] == 'A' && s[i+1] == 'B'){
                for(int j=i; j<2*100000; j++){
                    cout<<s[i+2];
                }
            }
            else if(s[i] == 'B' && s[i+1] == 'B'){
                for(int j=i; j<2*100000; j++){
                    cout<<s[i+2];
                }
            }
        }
        cout<<s<<endl;
    }

    return 0;
}