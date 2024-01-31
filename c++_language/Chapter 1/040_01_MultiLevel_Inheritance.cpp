#include<bits/stdc++.h>
using namespace std;

class Student{

protected:
    int roll_No;
public:
    void set_roll_No(int);
    void get_roll_No(void);
};

void Student :: set_roll_No(int r){
    roll_No = r;
}

void Student :: get_roll_No(){
    cout << "The roll number is: " << roll_No << endl;
}

// It is Single Inheritance of 'Student' class.
class Exam: public Student{

protected:
    float maths;
    float physics;
public:
    void set_marks(float, float);
    void get_marks(void);
};

void Exam :: set_marks(float m1, float m2){
    maths = m1;
    physics = m2;
}

void Exam :: get_marks(){
    cout << "The marks obtained in maths are: " << maths << endl;
    cout << "The marks obtained in physics are: " << physics << endl;
}

// It is Multilevel Inheritance of 'Student' class.
class Result : public Exam{
    float percentage;
public:
    void display(){
        get_roll_No();
        get_marks();
        cout << "Your percentage is: " << (maths + physics)/2 << endl;
    }
};

int main(){

// Notes:
// If we are inheriting B from A and C from B:[ A-->B-->C]
// 
// 1. A is the base class for B and B is the base class for C.
// 2. A-->B-->C is called Inheritance Path.
    Result manas;
    manas.set_roll_No(420);
    manas.set_marks(89, 94);
    manas.display();

    return 0;
}