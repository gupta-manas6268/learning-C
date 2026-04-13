// min PQ -> min Priority Queue.

#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

class Student{
public:
    int roll;
    string name;

    Student(int roll, string name){
        this->roll = roll;
        this->name = name;
    }
};

class Compare{
public:
    bool operator()(Student &s1, Student & s2){ // Increasing Order.
        if(s1.roll == s2.roll){
            return s1.name < s2.name;
        }
        return s1.roll < s2.roll;
    }
};

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    vector <Student> v;
    Student s1(1, "ved");
    Student s3(1, "manas");
    Student s2(3, "paras");
    v.push_back(s2);
    v.push_back(s1);
    v.push_back(s3);
    sort(v.begin(), v.end(), Compare());
    for(auto &it : v){
        cout << it.roll << " " << it.name << endl;
    }
    cout << endl;

    // Min Priority Queue.
    priority_queue<Student, vector<Student>, Compare> pq;
    // Priority is in increasing order.
    pq.push({1,"manas"});  // Priority - 1
    pq.push({1,"harry"});  // Priority - 2
    pq.push({2,"weasly"});  // Priority - 3
    cout << pq.top().roll << " " << pq.top().name << endl;
    pq.pop();
    cout << pq.top().roll << " " << pq.top().name << endl;
}