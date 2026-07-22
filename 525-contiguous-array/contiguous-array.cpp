class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> mp;
        mp[0] = -1;          // Sum 0 first occurs before the array
        int sum = 0;
        int maxi = 0;
        for (int i = 0; i < nums.size(); i++) {//treat 0's as -1 && 1's as 1's only
            if (nums[i] == 1)
                sum++;
            else
                sum--;
            if (mp.find(sum) != mp.end()) { //if sum exsists 
                maxi = max(maxi, i - mp[sum]);
            } else {
                mp[sum] = i;     // Store first occurrence only
            }
        }
        return maxi;
    }
};