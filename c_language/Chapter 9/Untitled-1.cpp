#include <iostream>
using namespace std;

int len(int password){
    int length = 0;

    while(password > 0){
        length++; 
        password /= 10;
    }

    return length; // Fix: Return the calculated length
}

int main(){
    int n;

    cout << "How many passwords do you want to store in this password manager: ";
    cin >> n;

    cout << endl;

    string website_name[n];
    string website_username[n];
    string website_password[n];

    for(int i = 0; i < n; i++){    
        cout << "Enter the website name : ";
        cin >> website_name[i];

        cout << "Enter the username of " << website_name[i] << ": ";
        cin >> website_username[i];

        cout << "Enter the password of " << website_name[i] << ": ";
        cin >> website_password[i];

        if(len(stoi(website_password[i])) < 14){ // Convert string to integer for length calculation
            cout << "Your password is weak and it can be easily hacked." << endl;
            cout << "So, change your password before it gets hacked." << endl;
        } else {
            cout << "Your password is strong." << endl;
        }

        cout << endl;
    }

    for(int i = 0; i < n; i++){    
        cout << "Website name: " << website_name[i] << endl;
        cout << "Username of " << website_name[i] << ": " << website_username[i] << endl;
        cout << "Password of " << website_name[i] << ": " << website_password[i] << endl << endl;
    }

    return 0;
}
