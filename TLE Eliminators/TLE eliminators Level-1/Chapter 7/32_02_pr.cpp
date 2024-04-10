// Correct.

// https://leetcode.com/problems/peak-index-in-a-mountain-array/description/


class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int left = 0, right = arr.size()-1;

        while(left <= right){
            int mid = (left + right)/ 2;

            if((mid != 0) && (arr[mid] < arr[mid-1])){
                right = mid-1;
            }
            else if((mid != arr.size()-1) && (arr[mid] < arr[mid+1])){
                left = mid+1;
            }
            else{ return mid;}
        }

        return -1;
    }
};