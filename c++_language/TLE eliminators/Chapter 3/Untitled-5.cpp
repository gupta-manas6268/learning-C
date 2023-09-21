#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        vector<char> vec1;

        int element;
        for(int i=0; i < vec1.size(); i++){
            cin>>vec1[i];
            vec1.push_back(element);

            if(vec1[i-1] == 'A' && vec1[i] == 'B'){
                vec1.erase(vec1.begin()+i-1, vec1.begin()+i);
            }
        }
        for(int i=0; i < vec1.size(); i++){
            if(vec1[i-1] == 'B' && vec1[i] == 'B'){
                vec1.erase(vec1.begin()+i-1, vec1.begin()+i);
            }
        }
        cout<<vec1.size()<<endl;
    }
}