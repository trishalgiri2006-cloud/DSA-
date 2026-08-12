class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int start = 0;
        int count = 0;
        int maxi = 0;
        for (int x : nums) {
            // Add current element
            mp[x]++;
            count++;
            // If frequency exceeds k,
            // remove elements from the left
            while (mp[x] > k) {
                mp[nums[start]]--;
                start++;
                count--;
            }
            maxi = max(maxi, count);
        }
        return maxi;
    }
};