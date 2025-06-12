// Wrong.

// A. Qingshan Loves Strings 2
// https://codeforces.com/contest/1889/problem/A























#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int count_1, count_2;
void Count(string s){
    int i=0;
    while(s[i] != '\0'){
        if(s[i] == '0'){ count_1++;}
        else{ count_2++;}
        i++;
    }
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        int n; cin >> n;
        string s; cin >> s;
        Count(s);

        vector<char> temp;
        for(int i=0; i<n; i++){
            temp.push_back(s[i]);
        }

        vector<int> ans;
        if(n%2 != 0){ cout << -1 << endl;}
        else{
            if(count_1 != count_2){
                cout << -1 << endl;
            }
            else{
                int index = 0;
                for(int i=0; i<(temp.size()/2); i++){
                    if(temp[i] != temp[n-i-1]){
                        vector<char> :: iterator it_1;
                        vector<char> :: iterator it_2;
                        it_1 = temp.begin();
                        it_2 = temp.end();

                        temp.erase(it_1);
                        temp.erase(it_2);

                        index++;
                        i--;
                    }
                    else{
                        if(temp[i] == '0'){
                            temp.push_back('0');
                            vector<char> :: iterator it;
                            it = temp.begin();
                            temp.erase(it);

                            ans.push_back(index + temp.size());
                            index++;
                            i--;               
                        }
                        else{
                            temp.insert(temp.begin(), '1');

                            vector<char> :: iterator it;
                            it = temp.end();
                            temp.erase(it);

                            index++;
                            i--;
                        }
                    }
                }
            }
        }

        cout << ans.size() << endl;
        for(int i=0; i < ans.size(); i++){
            cout << ans[i] << " ";
        }
        cout << endl;
    }
}