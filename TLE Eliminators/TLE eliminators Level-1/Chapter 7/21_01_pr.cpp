// From (28:12) of DR-1 video.

// Wrong.

// https://leetcode.com/problems/search-insert-position/description/




class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();

        int left = 0, right = n-1;
        int mid;

        while(left < right){
            mid = (left + right)/2;

            if(nums[mid] < target){
                left = mid + 1;
            }
            else if(nums[mid] > target){
                right = mid - 1;
            }
            else if(nums[mid] == target){
                break;
            }
        }

        return mid;
    }
};