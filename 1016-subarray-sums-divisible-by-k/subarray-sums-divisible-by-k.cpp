class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        mp[0] = 1;

        int prefix = 0;
        int ans = 0;

        for (int num : nums) {
            prefix += num;

            int rem = ((prefix % k) + k) % k;

            ans += mp[rem];

            mp[rem]++;
        }
        /*Compute the prefix sum and its remainder (prefix % k). If the same remainder has appeared before, every previous occurrence forms a subarray whose sum is divisible by k.

Store the frequency of each remainder in a hashmap, add mp[remainder] to the answer, then increment mp[remainder].*/
        return ans;
    }
};