// Wrong.

// A. Rating Increase
// https://codeforces.com/problemset/problem/1913/A






#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

// vector<int> stringToInt(string s){
//     int i = 0;
//     int len = 0;
//     vector<int> arr = {0};
//     while(s[i] != '\0'){
//         int a = (int)(s[i] - 48);
//         arr.push_back(a);
//         i++;
//     }
//     arr.fron(len);

//     return arr;
// }

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        string ab; cin >> ab;
        // vector<int> AB = stringToInt(ab);

        int i = 0;
        int len = 0;
        int arr[10];
        int a = 0, b = 0;

        while(ab[i] != '\0'){
            arr[i] = (int)(ab[i] - 48);
            i++;
            len++;
        }

        for(int i=0; i<len; i++){
            if(ab[i+1] != 0){
                a *= 10;
                a += arr[i];
                b = arr[i+1];
                
                if(a != b){
                    for(int j=i+1; j<len; j++){
                        b *= 10;
                        b += arr[j];
                        cout << a << " " << b << endl;
                        break;
                    }
                    break;
                }
            }
            else if(ab[i+1] == 0){

            }
        }
        // for()
    }
}