// Wrong.

// 295. Find Median from Data Stream
// https://leetcode.com/problems/find-median-from-data-stream/






#include<bits/stdc++.h>
using namespace std;

int main(){
    
    return 0;
}


class MedianFinder {
public:
    vector<double> vec;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        double a = (double)(num);
        vec.push_back(a);
    }
    
    double findMedian() {
        if((vec.size() % 2) != 0){
            return vec[vec.size()/2];
        }
        else{
            double ans = (vec[vec.size()/2] + vec[(vec.size()/2) - 1])/ 2;
            return ans;
        }
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */