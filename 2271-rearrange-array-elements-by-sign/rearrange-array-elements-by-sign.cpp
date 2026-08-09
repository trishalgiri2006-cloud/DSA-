class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {

        vector<int> ans(nums.size());
         //all positives in pos index negatives in neg index 
        int pos = 0;
        int neg = 1;
        // traverse each ele
        for (int x : nums) {
        //if positive put in pos index 
            if (x > 0) {
                ans[pos] = x;
                pos += 2;
            }
            else {//if negative put in neg index 
                ans[neg] = x;
                neg += 2;
            }
        }

        return ans;
    }
};