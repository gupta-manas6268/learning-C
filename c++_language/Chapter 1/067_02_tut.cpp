#include<bits/stdc++.h>
using namespace std;

// By using Template.
template <class T>
void Swap(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}

template <class T1, class T2>
float funcAverage(T1 a, T2 b){
    float avg = (a+b)/2.0;
 
    return avg;
}

int main(){
    float a, b;
    a = funcAverage(5, 2);
    cout << "The average of these numbers is : " << a << endl;
    cout << endl;

    int x = 5, y = 7;
    Swap(x, y);
    cout << x << endl << y << endl;
    
    return 0;
}