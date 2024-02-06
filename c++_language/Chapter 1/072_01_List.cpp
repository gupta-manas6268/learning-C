// There is no screenshot notes in this Lecture.
// Also go to this website: https://en.cppreference.com/w/cpp/container/list

#include<bits/stdc++.h>
using namespace std;

void display(list<int> &list_1){
    list<int> :: iterator it;

    for(it = list_1.begin(); it != list_1.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
}

int main(){
    // 6 8 9....
    list<int> list1; // List of 0 length
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);

    // list<int> :: iterator iter;
    // iter = list1.begin();
    // cout << *iter << " ";
    // iter++;
    // cout << *iter << " ";
    // iter++;
    // cout << *iter << " ";
    // iter++;
    // cout << *iter << " ";
    // iter++;
    // cout << *iter << " ";

    display(list1);

    // Removing elements from the List
    list1.pop_back();
    display(list1);

    list1.pop_front();
    display(list1);

    list1.remove(9); // It removes the particular no. from the list.
    display(list1);
    cout << endl;


    list<int> list2(3); // Empty list of size 3
    list<int> :: iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 6;
    iter++;
    *iter = 9;
    iter++;
    display(list2);

    return 0;
}