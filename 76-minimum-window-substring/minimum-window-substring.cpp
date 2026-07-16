class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> need, window;
        for (char c : t)
            need[c]++;
        int left = 0;
        int formed = 0;
        int minLen = INT_MAX;
        int start = 0;
        for (int right = 0; right < s.size(); right++) {
            char ch = s[right];
            window[ch]++;
            if (need.count(ch) && window[ch] <= need[ch])
                formed++;
            while (formed == t.size()) {
                if (right - left + 1 < minLen) {
                    minLen = right - left + 1;
                    start = left;
                }
                char leftChar = s[left];
                window[leftChar]--;
                if (need.count(leftChar) &&
                    window[leftChar] < need[leftChar])
                    formed--;
                left++;
            }
        }
        if (minLen == INT_MAX)
            return "";
        return s.substr(start, minLen);
    }
    /*create a hash for t 
    use a variable window and go on expanding till n distinct req t ele are found and update min length
    after that shrink the window till formed < n 
    repeat the expanding and shrinking till end to get the required result*/
 
};