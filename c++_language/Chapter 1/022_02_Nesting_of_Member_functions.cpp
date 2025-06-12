#include<bits/stdc++.h>
using namespace std;

// Nesting of member functions
class binary{
    // By default members/variables of 'class' are Private

        string s;

    public: // Because by default members of class are private.
            // So, to give access to public, we initially make it public.
        void read(void);
        void check_binary(void);
        void ones_compliment(void);
        void display(void);
};

void binary :: read(void){
    cout << "Enter a binary number: ";
    cin >> s;
}

void binary :: check_binary(void){
    for(int i=0; i < s.length(); i++){  // s.length = length of string 's'.
        if(s.at(i) != '0' && s.at(i) != '1'){
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}

void binary :: ones_compliment(void){
    check_binary(); // This is Nesting of member functions

    for(int i=0; i < s.length(); i++){  
        if(s.at(i) == '0'){
            s.at(i) = '1';
        }
        else if(s.at(i) == '1'){
            s.at(i) = '0';
        }
    }
}

void binary :: display(void){
    cout << "Displaying your binary number: ";

    for(int i=0; i < s.length(); i++){  
        cout << s.at(i);
    }
    cout << endl;
}

int main(){

    binary b;
    b.read();
    // b.check_binary(); // As, this is already happening by line-33 of code.
    b.display();
    b.ones_compliment();
    b.display();

    return 0;
}