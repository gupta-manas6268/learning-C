// There is Screenshot notes in this Lecture.
// There is Screenshot notes in this Lecture.


#include<bits/stdc++.h>
using namespace std;

// All Inheritance are:
// Student --> Test    // Test and sports are derived from
// Student --> sports  // Student class.
// test --> result       // Result class is derived from
// sports --> result     // both 'test' and 'sports' classes.


class Student{

protected:
    int roll_No;
public:
    void set_Number(int a){
        roll_No = a;
    }
    void print_number(void){
        cout << "Your roll no is: " << roll_No << endl;
    }
};

// Here, we declare 'Student' class as Virtual Base Class.
class Test : virtual public Student{

protected:
    float maths, physics;
public:
    void set_marks(float m1, float m2){
        maths = m1;
        physics = m2;
    }

    void print_marks(void){
        cout << "Your result is here: " << endl
             << "Maths: " << maths << endl
             << "Physics: " << physics << endl;
    }
};

class Sports : virtual public Student{

protected:
    float score;
public:
    void set_score(float sc){
        score = sc;
    }

    void print_score(void){
        cout << "Your PT score is: " << score << endl;
    }
};

class Result : public Test, public Sports{

private:
    float total;
public:
    void display(void){
        total = maths + physics + score;

        print_number();
        print_marks();
        print_score();

        cout << "Your total score is: " << total << endl;
    }
};

int main(){
    Result manas;
    manas.set_Number(78);
    manas.set_marks(78.5, 88.9);
    manas.set_score(9);
    manas.display();

    return 0;
}