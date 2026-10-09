class Solution {
public:
    void solve(vector<int>& nums, vector<int>& ans, int i, int target,
               vector<vector<int>>& result) {
        if (target == 0) {
            result.push_back(ans);
            return;
        }

        if (i == nums.size() || target < 0)
            return;

        // Include
        ans.push_back(nums[i]);
        solve(nums, ans, i + 1, target - nums[i], result);

        // Backtrack
        ans.pop_back();

        // Exclude and skip duplicates
        int ind = i + 1;
        while (ind < nums.size() && nums[ind] == nums[i]) {
            ind++;
        }

        solve(nums, ans, ind, target, result);
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());

        vector<int> ans;
        vector<vector<int>> result;

        solve(candidates, ans, 0, target, result);

        return result;
    }
};