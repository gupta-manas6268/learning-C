// 

// I. Count Vowels
// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/I



#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int vowel(string s, int size, int i){
    if(((s[i] == 'a') || (s[i] == 'e') || (s[i] == 'i') || (s[i] == 'o') || (s[i] == 'u')) && (i < (size-1))){
        return 1 + vowel(s, size, i+1);
    }
    else if(i < (size-1)){
        return 0 + vowel(s, size, i+1);
    }
    else if(i == (size-1)){
        if((s[i] == 'a') || (s[i] == 'e') || (s[i] == 'i') || (s[i] == 'o') || (s[i] == 'u')){
            return 1;
        }
        else{
            return 0;
        }
    }
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    string s; cin >> s;
    int length = s.size();
    cout << vowel(s, length, 0) << endl;
}