class Solution {
public:
    void sortColors(vector<int>& nums) {

        int low = 0;
        int mid = 0;
        int high = nums.size() - 1;

        while (mid <= high) {

            if (nums[mid] == 0) {
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            }

            else if (nums[mid] == 1) {
                mid++;
            }

            else {
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
    /*use dutch national flag algo 
    ->sice only 3 inputs are given 
    ->categorize the inputs into 3 blocks i.e low,mid,high
    ->low should have 0's high should have 2's mid should have 1's
    ->intialize them
    ->check mid everytime if ==1 increment mid
    ->if ==0 swap mid,low increment both
    ->if ==2 swap and decremrnt high only*/
};