class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int mx = nums[0];
        int mn = nums[0];
        int ans = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            // If current number is negative,
            // max and min roles will reverse.
            // Example:
            // mx = 6, mn = 2, nums[i] = -2
            // 6 * -2 = -12
            // 2 * -2 = -4
            // So the previous min can become the new max.
            if (nums[i] < 0) {
                swap(mx, mn);
            }
            // Either start a new subarray from nums[i]
            // or continue the previous subarray as same as leetcode 53
            mx = max(nums[i], mx * nums[i]);
            mn = min(nums[i], mn * nums[i]);
            ans = max(ans, mx);
        }

        return ans;
    }
};