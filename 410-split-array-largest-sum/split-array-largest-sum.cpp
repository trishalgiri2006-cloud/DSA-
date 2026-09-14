class Solution {
public:
    int splitArray(vector<int>& nums, int k) {

        int left = *max_element(nums.begin(), nums.end());

        int right = 0;
        for (int num : nums) {
            right += num;
        }

        while (left < right) {

            int mid = left + (right - left) / 2;

            int count = 1;
            int sum = 0;

            for (int num : nums) {

                if (sum + num <= mid) {
                    sum += num;
                }
                else {
                    count++;
                    sum = num;
                }
            }

            if (count <= k) {
                right = mid;
            }
            else {
                left = mid + 1;
            }
        }

        return left;
    }
};