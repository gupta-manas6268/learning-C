// Correct.

// https://leetcode.com/problems/sum-of-all-odd-length-subarrays/


class Solution {
public:
    // If the subarray size is even -> then ignore it.
    // If the subarray size is odd -> then add its sum to the answer.

    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size();
        int ans = 0;

        for(int start = 0; start < n; start++){
            int sum = 0;

            for(int end = start; end < n; end++){
                sum += arr[end];

                int len = end - start + 1;
                if(len % 2 == 0){ continue;}

                ans += sum;
            }
        }

        return ans;
    }
};