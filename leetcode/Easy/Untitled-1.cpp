#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

string func(string input){
    int a = 0, b = 0;
    int len = input.size(); // Calculate the length of the input string

    // Count the number of 1's and 0's in the input string
    for(int i = 0; i < len; i++){
        if(input[i] == '1'){
            a++;
        }
        else if(input[i] == '0'){
            b++;
        }
    }

    string ans(len, '0'); // Initialize the answer string with all zeros

    // Generate the maximum odd binary number based on the count of 1's
    if(a == 1){
        // If there is only one 1 in the input, the output will be 1 followed by all zeros
        ans[len - 1] = '1';
    }
    else if(a > 1){
        // If there are multiple 1's in the input, the output will be 11...100...0 where the number of zeros is one less than the count of 1's
        ans[a - 1] = '1';
    }

    return ans;
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    string input;
    cin >> input;

    string output = func(input);
    cout << output << endl;
}
