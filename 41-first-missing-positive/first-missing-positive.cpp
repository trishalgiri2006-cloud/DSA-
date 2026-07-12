class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int> mp(nums.begin(),nums.end());
        int ans=0;
        for(int i=1;i<(pow(2,31)-1);i++){
            if(mp.find(i) == mp.end()){
                ans=i;
                break;
            }
        }
        return ans;
        
    }
};