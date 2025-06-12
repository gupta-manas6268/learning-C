// There is no screenshot notes in this Lecture.


#include<bits/stdc++.h>
using namespace std;

template <class T> // This 'T' is a custom data type.
class MyVector{

public:
    T *arr;
    int size;
    MyVector(int m){
        size = m;
        arr = new T[size];
    }

    T dotProduct(MyVector &v){
        T d = 0;

        for(int i=0; i<size; i++){
            d += this->arr[i] * v.arr[i];
        }

        return d;
    }
};

int main(){
    MyVector <int> v1(3);
    v1.arr[0] = 4;
    v1.arr[1] = 3;
    v1.arr[2] = 1;

    MyVector <int> v2(3);
    v2.arr[0] = 1;
    v2.arr[1] = 0;
    v2.arr[2] = 1;

    int a = v1.dotProduct(v2);
    cout << a << endl;

    MyVector <double> v3(3);
    v3.arr[0] = 1.4;
    v3.arr[1] = 3.3;
    v3.arr[2] = 0.1;

    MyVector <double> v4(3);
    v4.arr[0] = 0.1;
    v4.arr[1] = 1.90;
    v4.arr[2] = 4.1;

    double b = v3.dotProduct(v4);
    cout << b << endl;

    return 0;
}