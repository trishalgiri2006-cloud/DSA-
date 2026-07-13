class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0;
        int flips = k;
        int ans = 0;

        for (int right = 0; right < nums.size(); right++) {

            if (nums[right] == 0)
                flips--;

            while (flips < 0) {
                if (nums[left] == 0)
                    flips++;
                left++;
            }

            ans = max(ans, right - left + 1);
        }

        return ans;
        /*Expand the window using right.
Treat 0 as flipped if you still have flips (k).
If no flips are left and another 0 appears, shrink the window from the left until you can flip the new 0.*/
    }
};