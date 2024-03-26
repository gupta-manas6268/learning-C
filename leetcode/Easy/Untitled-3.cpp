// Maximum Odd Binary Number
// https://leetcode.com/problems/maximum-odd-binary-number/?envType=daily-question&envId=2024-03-01

#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

string func(string input){
    int a = 0, b = 0;
    int i = 0;
    int len = 0;

    while(input[i] != '\0'){
        if(input[i] == '1'){
            a++;
        }
        else if(input[i] == '0'){
            b++;
        }
        i++;
        len++;
    }

    char ans[len+1];

    if(len == 0){}
    else if(a == 1){
        for(int i=0; i<len; i++){
            if(i == len-1){
                ans[i] = '1';
            }
            else{
                ans[i] = '0';
            }
        }
    }
    else if(a == 0){
        for(int i=0; i<len; i++){
            ans[i] = '0';
        }
    }
    else{
        int count = a-1;
        for(int i=0; i<count; i++){
            ans[i] = '1';
        }
        for(int i=count; i < len-1; i++){
            ans[i] = '0';
        }
        ans[len-1] = '1';
        ans[len] = '\0';
    }

    return ans;
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    string input;
    cin >> input;

    string output = func(input);
    // cout << output << endl;

    int i = 0;
    while(output[i] != '\0'){
        cout << output[i] ;
        i++;
    }
    cout << endl;
}