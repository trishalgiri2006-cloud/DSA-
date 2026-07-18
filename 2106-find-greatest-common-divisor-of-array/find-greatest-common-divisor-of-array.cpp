class Solution {
public:
    int gcd(int x,int y){
        if(y==0)
            return x;
        
        return gcd(y,x%y);
           
    }

    int findGCD(vector<int>& nums) {
        int max=0;
        int min=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>nums[max])
                max=i;
            if(nums[i]<nums[min])
                min=i;

        }
        int g=gcd(nums[max],nums[min]);
        return g;

    }
};