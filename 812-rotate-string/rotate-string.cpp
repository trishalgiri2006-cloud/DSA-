class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.size();
        if (s.size() != goal.size())
            return false;
        for (int k = 0; k < n; k++) {
            int temp = s[n - 1];
            for (int i = n - 1; i > 0; i--) {
                s[i] = s[i - 1];
            }
            s[0] = temp;
            if (s == goal) {
                return true;
            }
        }
        return false;
    }
};