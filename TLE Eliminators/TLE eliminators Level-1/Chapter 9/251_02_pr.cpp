// Correct.

// 295. Find Median from Data Stream
// https://leetcode.com/problems/find-median-from-data-stream/



















#include<bits/stdc++.h>
using namespace std;

int main(){
    
    return 0;
}


class MedianFinder {
public:
    // multiset, multiset
    // [n/2 smallest elements] [n/2 largest elements]

    // Approach :
    //    we will create two multisets.
    //          left -> will have all the n / 2 smallest elements.
    //          right -> will have all the n / 2 largest elements.

    multiset<int> left, right;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        if(left.size() == right.size()){
            left.insert(num);
        }
        else{
            right.insert(num);
        }

        if(right.empty()){ return;}

        while(*left.rbegin() > *right.begin()){
            int leftVal = *left.rbegin();
            int rightVal = *right.begin();

            left.erase(left.find(leftVal));
            right.erase(right.find(rightVal));

            left.insert(rightVal);
            right.insert(leftVal);
        }
    }
    
    double findMedian() {
        if(left.size() > right.size()){
            return *left.rbegin();
        }

        return (*left.rbegin() + *right.begin())/ 2.0;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */