class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int> mp(nums.begin(),nums.end());
        for(int i=1;i<=nums.size();i++){
            if(mp.find(i) == mp.end()){
                return i;
            }
        }
        return nums.size()+1;    
    }
};