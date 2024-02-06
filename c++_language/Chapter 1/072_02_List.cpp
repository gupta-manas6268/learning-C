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

    cout << "List 1: ";
    display(list1);

    // Sorting the List
    list1.sort();
    cout << "List 1 after Sorting is: ";
    display(list1);

    // Merging of List
    list<int> list2(3); // Empty list of size 3
    list<int> :: iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 6;
    iter++;
    *iter = 9;
    iter++;

    cout << "List 2: ";
    display(list2);

    list1.merge(list2);
    cout << "List 1 after merging: ";
    display(list1);


    // Reversing the List
    list1.reverse();
    cout << "List 1 after reversing: ";
    display(list1);

    return 0;
}