class Solution {
public:

    void solve(int n, int open, int close,
               string& ans, vector<string>& result) {

        if (ans.size() == 2 * n) {
            result.push_back(ans);
            return;
        }
        // Add '('
        if (open < n) {
            ans.push_back('(');
            solve(n, open + 1, close, ans, result);
            ans.pop_back();
        }

        // Add ')'
        if (close < open) {
            ans.push_back(')');
            solve(n, open, close + 1, ans, result);
            ans.pop_back();
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> result;
        string ans;

        solve(n, 0, 0, ans, result);

        return result;
    }
};