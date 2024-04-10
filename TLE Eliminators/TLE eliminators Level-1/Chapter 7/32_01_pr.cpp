// Wrong.

// https://leetcode.com/problems/peak-index-in-a-mountain-array/description/


class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int left = 0, right = n-1;

        int mid = (left + right)/ 2;

        while(left < right){
            mid = (left + right)/ 2;

            if((arr[mid-1] < arr[mid]) && (arr[mid] < arr[mid+1])){
                left = mid + 1;
            }
            else if((arr[mid-1] > arr[mid]) && (arr[mid] > arr[mid+1])){
                right = mid - 1;
            }
            else{
                break;
            }
        }

        int ans = mid + 1;

        return ans;
    }
};