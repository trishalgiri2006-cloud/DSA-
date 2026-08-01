class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currsum=nums[0];//started at first element
        int maxsum=nums[0];
        for(int i=1;i<nums.size();i++){
            //start from 2nd element 
            if(nums[i]>currsum+nums[i]){
                // currsum is negative or low than the ele
                currsum=nums[i]; //new subarray from nims[i]
            }
            else{
                currsum+=nums[i];
            }
            maxsum=max(maxsum,currsum);

        }
        return maxsum;
        
        
    }
};