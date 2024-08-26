// 

// B - Round-Robin Tournament
// https://atcoder.jp/contests/abc323/tasks/abc323_b




#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

vector<pair<int,int>> proper_Sort(vector<pair<int,int>> wins){
    for(int i=0; i < (wins.size()-1); i++){
        if(wins[i].first == wins[i+1].first){
            swap(&wins[i].second, &wins[i+1].second);
        }
    }

    return wins;
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n; cin >> n;
    vector<string> str;
    for(int i=0; i<n; i++){
        string a; cin >> a;
        str.push_back(a);
    }

    vector<pair<int, int>> wins;
    pair <int, int > Ans;
    for(int i=0; i<n; i++){
        int a = 0;
        for(int j=0; j<n; j++){
            if(str[i][j] ==  'o'){
                a++;
            }
        }
        wins.push_back({a, i+1});
    }
    sort(wins.begin(), wins.end(), greater<pair<int,int>>());

    vector<pair<int,int>> Proper_Wins = proper_Sort(wins);

    vector<pair<int,int>> Rank;
    for(int i=0; i<n; i++){
        Rank.push_back({Proper_Wins[i].second, i+1});
    }
    sort(Rank.begin(), Rank.end());

    for(int i=0; i<n; i++){
        cout << Rank[i].second << " ";
    }
    cout << endl;

    // for(int i=0; i<Proper_Wins.size(); i++){
    //     cout << Proper_Wins[i].first << " " << Proper_Wins[i].second << endl;
    // }
}