// Also go to this website: https://en.cppreference.com/w/cpp/container/map

#include<bits/stdc++.h>
using namespace std;

// Map is an associative array
int main(){
    map<string, int> marksMap;
    marksMap["Rohan"] = 80;
    marksMap["Jack"] = 59;
    marksMap["Rohit"] = 20;

    marksMap.insert({{"Kangaroo", 169}, {"Animal", 187.7}});
    map<string, int> :: iterator iter;
    for(iter = marksMap.begin(); iter != marksMap.end(); iter++){
        cout << (*iter).first << " " << (*iter).second << endl;
    }
    cout << endl;

    cout << "The size is: " << marksMap.size() << endl;
    cout << "The max. size is: " << marksMap.max_size() << endl;
    cout << "The empty's return value is: " << marksMap.empty() << endl;

    return 0;
}