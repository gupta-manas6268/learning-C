// There is no screenshot notes in this Lecture.
// Also go to this website: https://en.cppreference.com/w/cpp/utility/functional
// Also go to this website: https://en.cppreference.com/w/cpp/algorithm


#include<bits/stdc++.h>
using namespace std;

int main(){
    // Function Objects(Functor): Function wrapped in a class so 
    //                          that it is available like an object 

    int arr[] = {1, 73, 4, 12, 54, 7};
    // sort(arr, arr+5); // It sort first 5 numbers in increasing order.
    // Also run code when you uncomment above line.

    sort(arr, arr+5, greater<int>()); // It sort first 5 numbers in decreasing order.

    cout << "Starting 5 elements of Array in sorted are: ";
    for(int i=0; i<6; i++){
        cout << arr[i] << " ";
    } 

    return 0;
}