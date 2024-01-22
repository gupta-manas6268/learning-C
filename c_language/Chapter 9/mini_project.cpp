#include<iostream>
using namespace std;

int len (int password){
    int length = 0;

    while(password > 0){
        length++; 

        password /= 10;
    }

    return length;
}
// This len(password) -→ function will give the length of any integer given to this function.

int main(){

    int n;

    cout << "How many passwords do you want to store in this password manager: ";
    cin >> n;

    cout << endl;

    string website_name[n]; 
    // string website_name[n] -→ This array string will store the website name.
    
    string website_username[n];
    // string website_username[n] -→ This array string will store the username of this website .

    int website_password[n];
    // string website_password[n] -→ This array string will store the password of this website.

    for(int i=0; i<n; i++){    
        cout << "Enter the website name : ";
        cin >> website_name[i];

        cout << "Enter the username of " << website_name[i] << ": ";
        cin >> website_username[i];

        cout << "Enter the password of " << website_name[i] << ": ";
        cin >> website_password[i];

        if(len(website_password[i]) < 14){
            cout << "Your password is weak and it can be easily hack. " << endl;
            cout << "So, change your password before it gets hacked";
        }

        else {
            cout << "Your password is strong.";
        }

        cout << endl;
    }

    for(int i=0; i<n; i++){    

        cout << "Website name: " << website_name[i] << endl;
        cout << "Username of " << website_name[i] << ": " << website_username[i] << endl;
        cout << "Password of " << website_name[i] << ": " << website_password[i] << endl << endl;
        
    }

    return 0;
}