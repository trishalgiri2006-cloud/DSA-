class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> ans;
        if (words.empty() || s.empty())
            return ans;
        int n = words[0].size();      
        int m = words.size();         
        int total = n * m;
        if (s.size() < total)
            return ans;
        unordered_map<string, int> target;
        for (string word : words)
            target[word]++;
        for (int start = 0; start < n; start++) {
            if (start + total > s.size())
                continue;
            unordered_map<string, int> window;
            int left = start;
            for (int r = start; r < start + total; r += n) {
                string word = s.substr(r, n);
                window[word]++;
            }
            if (window == target)
                ans.push_back(left);
            for (int r = start + total; r + n <= s.size(); r += n) {
                string addWord = s.substr(r, n);
                window[addWord]++;
                string removeWord = s.substr(left, n);
                window[removeWord]--;
                if (window[removeWord] == 0)
                    window.erase(removeWord);
                left += n;
                if (window == target)
                    ans.push_back(left);
            }
        }
        return ans;
    }
/*Store the frequency of all words in a hash map (target).
For each starting offset (0 to wordLength-1), build the first window of words.
Compare the window map with the target map; if equal, store the starting index.
Slide the window by one word: add the new word and remove the leftmost word.
Repeat until the end of the string and return all valid starting indices.*/    
};