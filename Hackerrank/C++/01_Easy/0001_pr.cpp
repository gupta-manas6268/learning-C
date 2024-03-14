// Correct.

// Class
// https://www.hackerrank.com/challenges/c-tutorial-class/problem?isFullScreen=true




















#include<bits/stdc++.h>
using namespace std;

class Student{
    int age, standard;
    string first_name, last_name;
public:
    void getAge();
    void setAge();

    void get_first_name();
    void get_last_name();

    void set_Name();

    void get_standard();
    void set_standard();

    void set_string();
};

void Student :: getAge(void){
    cin >> age;
}
void Student :: setAge(void){
    cout << age << endl;
}

void Student :: get_first_name(void){
    cin >> first_name;
}
void Student :: get_last_name(void){
    cin >> last_name;
}

void Student :: set_Name(void){
    cout << last_name << ", " << first_name << endl;
}

void Student :: get_standard(void){
    cin >> standard;
}
void Student :: set_standard(void){
    cout << standard << endl;
    cout << endl;
}

void Student :: set_string(void){
    cout << age << "," << first_name << "," << last_name << "," << standard << endl;
}

int main(){
    Student st;

    st.getAge();
    st.get_first_name();
    st.get_last_name();
    st.get_standard();

    st.setAge();
    st.set_Name();
    st.set_standard();
    st.set_string();

    return 0;
}