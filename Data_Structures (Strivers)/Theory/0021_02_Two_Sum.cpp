// This is better approach than 1.

#include<bits/stdc++.h>
using namespace std;

// Solving by Two Pointer Technique.
string read(int n, vector<int> book, int target){
    int left = 0, right = n-1;
    sort(book.begin(), book.end());
    while(left < right){
        int sum = book[left] + book[right];
        if(sum == target){
            return "YES";
        }
        else if(sum < target){ left++;}
        else{ right--;}
    }
    return "NO";

    // TC = O(n).
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n; cin >> n;
    vector<int> Book(n);
    for(int i=0; i<n; i++){
        cin >> Book[i];
    }
    int target; cin >> target;
    cout << read(n, Book, target);
    
    return 0;
}