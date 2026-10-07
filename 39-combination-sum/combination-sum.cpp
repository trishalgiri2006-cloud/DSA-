class Solution {
public:
    void solve(vector<int>& nums, vector<int>& ans,
               int i, int target, vector<vector<int>>& result) {

        if(target == 0) {
            result.push_back(ans);
            return;
        }

        if(i == nums.size() || target < 0)
            return;

        // Include
        ans.push_back(nums[i]);
        solve(nums, ans, i, target - nums[i], result);

        // Backtrack
        ans.pop_back();

        // Exclude
        solve(nums, ans, i + 1, target, result);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> ans;
        vector<vector<int>> result;

        solve(candidates, ans, 0, target, result);

        return result;
    }
};