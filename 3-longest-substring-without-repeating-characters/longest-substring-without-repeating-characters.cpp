class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans=0;
        int left=0;
        unordered_set<char> mp;
        for(int i=0;i<s.size();i++){
            while(mp.count(s[i])){
                //shrink
                mp.erase(s[left]);
                left++;
            }
            mp.insert(s[i]);
            ans=max(ans,i-left+1);
        }
        return ans;
        
    }
};