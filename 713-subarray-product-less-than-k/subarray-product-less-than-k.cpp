class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if (k <= 1) 
           return 0;
        int left = 0;
        long long product = 1;
        int count = 0;
        for (int right = 0; right < nums.size(); right++) {
            product *= nums[right];
            while (product >= k) {
                product /= nums[left];
                left++;
            }
            count += (right - left + 1);
        }
        return count;
/*1. Expand the window by moving 'right' and multiply the current element.
2. If product >= k, the window becomes INVALID.
3. Shrink the window (move 'left') until product < k again.
4. Once the window is valid, ALL subarrays ending at 'right'
   and starting from 'left' to 'right' are valid.*/
    }
};