class Solution {
public:
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' ||
           c == 'o' || c == 'u';
    }
    int maxVowels(string s, int k) {
        int left=0;
        int count=0;
        int ans=0;
        for(int right=0;right<k;right++){
            if(isVowel(s[right])){
                count++;
            }
        }
        ans=count;
        for(int right=k;right<s.size();right++){
            if(isVowel(s[right])){
                count++;
            }
            if(isVowel(s[left])){
                count--;
            }
            left++;    
            ans=max(ans,count);
        }
        return ans; 
    }
};