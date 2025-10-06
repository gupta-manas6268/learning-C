// '0_12_pr.cpp'



#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n, k, m; cin >> n >> k >> m;
    multiset<int> a;
    cout << n << endl;
    for(int i=0; i < n; i++){
        int temp; cin >> temp;
        cout << temp << " " << i << endl;
        a.insert(temp);
    }
    
    // Solution
    bool ans = false;
    vector<int> Final_Ans;
    while(a.size() > 0){
        cout << "Hi" << endl;
        int index = 0;
        stack<int> st;
        int Size = a.size();
        for(auto it:a){
            if((index == 0) && (st.size() == 0)){
                st.push(it);
                cout << it << endl;
                a.erase(it);
            }
            else{
                if(((st.top() - it) % m) == 0){
                    st.push(it);
                    cout << it << endl;
                    a.erase(it);
                }
            }
            index++;
        }
        if(st.size() >= k){
            for(int i=0; i < k; i++){
                Final_Ans.push_back(st.top());
                st.pop();
            }
            reverse(Final_Ans.begin(), Final_Ans.end());
            ans = true; break;
        }
        if(Size == a.size()){ break;}
    }

    // O/P
    if(ans == true){
        cout << "Yes" << endl;
        for(int i=0; i < Final_Ans.size(); i++){
            cout << Final_Ans[i] << " ";
        }
        cout << endl;
    }
    else{ cout << "No" << endl;}
}