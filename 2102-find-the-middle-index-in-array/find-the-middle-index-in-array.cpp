class Solution {
public:

    int findMiddleIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int> pre(n);
        pre[0]=nums[0];
        for(int i=1;i<n;i++){
            pre[i]=pre[i-1]+nums[i];
        }
        for(int j=0;j<n;j++){
            int leftsum=0;
            int rightsum=0;
            if(j==0){
               rightsum=pre[n-1]-pre[0];
            }
            else if(j==n-1){
                leftsum=pre[j-1];
            }
            else{
                leftsum=pre[j]-nums[j];
                rightsum=pre[n-1]-pre[j];
            }
            if(leftsum==rightsum){
                return j;
            }
        }
        return -1;

    }
};