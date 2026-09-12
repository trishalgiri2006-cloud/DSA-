class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int left=*max_element(weights.begin(),weights.end());
        int right=0;
        for(int weight:weights){
            right+=weight;
        }
        while(left<right){
            int mid=left+(right-left)/2;
            int count=1;
            int sum=0;
            for(int weight:weights){
                if(sum+weight<=mid){
                    sum+=weight;
                }
                else{
                    count++;
                    sum=weight;
                }
            }
            if(count<=days){
                right=mid;
            }
            else{
                left=mid+1;
            }
        }
        return left;
    }
};