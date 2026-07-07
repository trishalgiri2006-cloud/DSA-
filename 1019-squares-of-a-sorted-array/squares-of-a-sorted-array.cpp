class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;
        int n = nums.size() - 1;
        vector<int> v(nums.size());
        while (left <= right) {
            if (abs(nums[left]) > abs(nums[right])) {
                v[n] = nums[left] * nums[left];
                left++;
            } else {
                v[n] = nums[right] * nums[right];
                right--;
            }
            n--;
        }
        return v;
        /*the given array is sorted so the max square will be at ethier left end or right end 
        ex:[-100,0,10] -100 square is greater 10 square so compare both absolute values and the put them at the end of the result array since the one element square is entered move to next(if left) prev(if right) and repeat same process till end
        tc & sc : O(n)*/
    }
};