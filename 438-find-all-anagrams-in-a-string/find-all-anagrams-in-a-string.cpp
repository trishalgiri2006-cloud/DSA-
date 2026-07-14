class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        if (s.size() < p.size())
            return {};

        unordered_map<char, int> mp1, mp2;

        // Frequency map of p
        for (int i = 0; i < p.size(); i++) {
            mp1[p[i]]++;
        }

        int left = 0;
        vector<int> ans;
        for (int right = 0; right < p.size(); right++) 
            mp2[s[right]]++;
        if (mp1 == mp2) 
            ans.push_back(left);
        for (int right = p.size(); right < s.size(); right++) {
            mp2[s[left]]--;
            if (mp2[s[left]] == 0) 
                mp2.erase(s[left]);
            left++;
            mp2[s[right]]++;
            if (mp1 == mp2) 
                ans.push_back(left);
        }
        return ans;
        /*Store the frequency of all characters in p using a hashmap (mp1).
           Maintain another hashmap (mp2) for a fixed-size sliding window of length p.size() in s.
            If mp1 == mp2, the current window is an anagram, so store its starting index.
           Slide the window one character at a time:
             Remove the left character (decrement its count and erase it if the count becomes 0).
                Add the new right character.
             Compare the two hashmaps again.*/
    }
};