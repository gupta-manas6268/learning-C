// See line-62 of Code carefully.

#include<bits/stdc++.h>
using namespace std;

// Nesting of member functions
class binary{
    // By default members/variables of 'class' are Private.
    private:
        string s;
        void check_binary(void);


    public: // Because by default members of class are private.
            // So, to give access to public, we initially make it public.
        void read(void);
        // void check_binary(void);
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
    // check_binary(); // This is Nesting of member functions

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
    // b.check_binary(); // This line will give error because 
                      // check_binary is private and cannot 
                      // be directly accessed by the user.  
    b.display();
    b.ones_compliment();
    b.display();

    return 0;
}