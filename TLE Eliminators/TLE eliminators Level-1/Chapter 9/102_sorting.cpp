//                              H.W
// 
// vector<int> -→ you want to sort them such that the odd elements come on left
// even elements come on right
// elements with the same parity have the same order. ( Solve this without using 'sort' function )

// Ex-→    9 8 7 3 4 5 6 2 1 0 -→ 9 7 3 5 1 8 4 6 2 0

// Hint: vector<pair<int, int>> vec; // where vec[i] = {a[i], i}








#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void printVector ( vector<int> &a){
    for (int x : a)
        cout << x << " ";
    cout << endl;
}

int compare (int left, int right){
// int compare (int a, int b){

    // You will return true if the elment on the left is smaller than the element on the right.
    // You will return true for the order in which you want the array to look like.

    if(left < right) return true;
    return false;
    // else return false;
}

int even_odd1(int left, int right){
    // odd numbers on the left and even on the right 
    // all odd and even numbers can be in any order

    if(left % 2 == 1 && right % 2 == 0) return true;
    if(left % 2 == 0 && right % 2 == 1) return false;
    return false;
}


int even_odd2(int left, int right){
    // odd numbers on the left and even on the right 
    // for numbers with name parity, we want the smaller to come first

    if(left % 2 == 1 && right % 2 == 0) return true;
    if(left % 2 == 0 && right % 2 == 1) return false;
    return left < right;
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    vector<int> a = {9, 2, 13, 4, 65, 6, 0, 8, 3};

    printVector(a);

    sort(a.begin(), a.end());

    printVector(a);

    sort(a.begin(), a.end());
    reverse(a.begin(), a.end()); // It reverse the order of the elements of Vector.
    printVector(a);

    sort (a.begin(), a.end(), greater<int>());  // It sort Function in 'Descending Order'.
    printVector(a);

    sort (a.begin(), a.end(), less<int>());  // It sort Function in 'Ascending Order'.
    printVector(a);
    cout << endl;

    cout << "Using Custom Comparator : ";

    sort (a.begin(), a.end(), compare);  // It sort Function in 'Ascending Order'.
    printVector(a);  
    cout << endl;


    cout << "Using 'even_odd1' function : ";

    sort (a.begin(), a.end(), even_odd1);  
    printVector(a); 
    cout << endl;

    cout << "Using 'even_odd2' function : ";

    sort (a.begin(), a.end(), even_odd2);  
    printVector(a); 
    cout << endl;

}
