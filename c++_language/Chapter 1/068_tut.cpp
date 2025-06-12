// There is no screenshot notes in this Lecture.


#include<bits/stdc++.h>
using namespace std;

template <class T>
class Manas{

public:
    T data;
    Manas(T a){
        data = a;
    }
    // void display(){
    //     cout << data << endl;
    // }
    void display();
};

template <class T>
void Manas<T> :: display(){
    cout << data << endl;
}

void func(int a){
    cout << "I am first function() " << a << endl;
}

template <class T>
void func(T a){
    cout << "I am templatised function() " << a << endl;
}

int main(){
    Manas<float> h(5.7);
    cout << h.data << endl;
    h.display();
    cout << endl;

    func(4); // Exact match takes the highest priority
    func('c'); // Exact match takes the highest priority

    return 0;
}