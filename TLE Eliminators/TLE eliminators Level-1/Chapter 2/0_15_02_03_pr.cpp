#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr(5);
    for(int i=0; i<5; i++)
    cin >> arr[i];

    sort(arr.begin() , arr.end()); // 'sort' function sort all values in increasing order.

    // 2 2 2 3 3  // 2 2 3 3 3
    if(arr[0] == arr[2] && arr[3] == arr[4])
        cout << "Yes\n";
    
    else if (arr[0] == arr[1] && arr[2] == arr[4])
    cout << "Yes\n";
    else
    cout << "No\n";

    return 0;
}