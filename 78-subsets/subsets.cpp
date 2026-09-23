class Solution {
public:
    void solve(vector<int>& nums, vector<int>& ans, vector<vector<int>>& result, int i) {
        if (i == nums.size()) {
            result.push_back(ans);
            return;
        }
        ans.push_back(nums[i]);
        solve(nums, ans, result, i + 1);
        ans.pop_back();
        solve(nums, ans, result, i + 1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> ans;
        solve(nums, ans, result, 0);
        return result;
    }
};