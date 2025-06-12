// There is no Screenshot notes in this Lecture.


#include<bits/stdc++.h>
using namespace std;

int main(){
    // Basic Example
    int a = 4;
    int *ptr = &a;

    cout << "The value of a is: " << (*ptr) << endl; 

    // new Operator
    int *p1 = new int(40);
    float *p2 = new float(40.78);
    cout << "The value of address p1 is: " << (*p1) << endl; 
    cout << "The value of address p2 is: " << (*p2) << endl; 
    cout << endl;

    int *arr1 = new int[3];
    arr1[0] = 10;
    arr1[1] = 20;
    arr1[2] = 30;

    cout << "The value of arr1[0] is: " << arr1[0] << endl; 
    cout << "The value of arr1[1] is: " << arr1[1] << endl; 
    cout << "The value of arr1[2] is: " << arr1[2] << endl; 
    cout << endl;

    // delete Operator

    int *arr2 = new int[3];
    arr2[0] = 10;
    arr2[1] = 20;
    arr2[2] = 30;
    delete[] arr2; // This line deletes the value in array 'arr2' and it free's 
                   //  this memory.

    cout << "The value of arr2[0] is: " << arr2[0] << endl; 
    cout << "The value of arr2[1] is: " << arr2[1] << endl; 
    cout << "The value of arr2[2] is: " << arr2[2] << endl; 

    return 0;
}