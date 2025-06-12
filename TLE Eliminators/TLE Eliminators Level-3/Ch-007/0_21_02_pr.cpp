// Correct.
// This is Mentor's code.

// Room Allocation
// https://cses.fi/problemset/task/1164



































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

struct Person{
    int arrival, departure, index;
};

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n; cin >> n;
    
    vector<Person> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i].arrival >> arr[i].departure;
        arr[i].index = i;
    }
    
    // Solution
    
    // Greedy Strategy => Sort the people in the order
    //                     they come.

    // Here, we keep track of rooms that are empty 
    //  so if a person comes and rooms are full then, 
    //  we need not create another room.
    int Total_Rooms = 0;
    sort(arr.begin(), arr.end(), [&](auto a, auto b){
        return a.arrival < b.arrival;
    });

    set<pair<int,int>> Rooms;
    vector<int> ans(n);
    for(auto Person : arr){
        int Room_No;

        if((Rooms.empty()) || ((*Rooms.begin()).first > Person.arrival)){
            Room_No = ++Total_Rooms;
        }
        else{
            Room_No = (*Rooms.begin()).second;
            Rooms.erase(Rooms.begin());
        }

        ans[Person.index] = Room_No;
        Rooms.insert({Person.departure + 1, Room_No});
    }

    // O/P
    cout << Total_Rooms << endl;
    for(auto &i : ans){
        cout << i << " ";
    }
    cout << endl;
}