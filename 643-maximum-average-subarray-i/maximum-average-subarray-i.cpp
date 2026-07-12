class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int left=0;
        double ans=0;
        double sum=0;
        for(int right=0;right<k;right++){
            sum+=nums[right];      
        }
        ans=sum/k;
        for(int right=k;right<nums.size();right++){
            sum-=nums[left];
            sum+=nums[right];
            left++;
            double avg=sum/k;
            ans=max(ans,avg);
        }
        return ans;
        
    }
};