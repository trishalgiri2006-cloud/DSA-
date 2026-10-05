class Solution {
public:
    void solve(vector<int>& num, vector<int>& ans, int i,
               vector<vector<int>>& result) {

        if(i == num.size()) {
            result.push_back(ans);
            return;
        }

        // Include
        ans.push_back(num[i]);
        solve(num, ans, i + 1, result);

        // Backtrack
        ans.pop_back();

        // Skip duplicates
        int ind = i + 1;

        while(ind < num.size() && num[ind] == num[i]) {
            ind++;
        }

        // Exclude
        solve(num, ans, ind, result);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<int> ans;
        vector<vector<int>> result;

        solve(nums, ans, 0, result);

        return result;
    }
};