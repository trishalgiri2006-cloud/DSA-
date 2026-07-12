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
        /*first a subarray of k size and cal its count of vowels
        after that go on adding each ele and deleting left element if ele adding is vowel count++ and ele leaving is vowel count-- 
        by doing this we will get the count og array 
        now find max of prev subarrays and this and return it */ 
    }
};