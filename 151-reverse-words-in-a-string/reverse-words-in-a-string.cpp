class Solution {
public:
    string reverseWords(string s) {

        string temp;
        int n = s.size();
        vector<string> sv;
        for (int i = 0; i < n; i++) {
            if (s[i] != ' ') {
                temp += s[i];
            }
            else {
                if (!temp.empty()) {
                    sv.push_back(temp);
                    temp = "";
                }
            }
        }
        if (!temp.empty()) {
            sv.push_back(temp);
        }
        string ans;
        for (auto it = sv.rbegin(); it != sv.rend(); it++) {
            ans += *it;
            if (it + 1 != sv.rend()) {
                ans += " ";
            }
        }
        return ans;
    }
};