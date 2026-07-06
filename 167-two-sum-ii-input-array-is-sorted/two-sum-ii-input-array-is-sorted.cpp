class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left=0;
        int right=numbers.size()-1;
        while(left<right){
            int sum=numbers[left]+numbers[right];
            if(sum==target)
                return {left+1,right+1};
            if(sum<target)
                left++;
            else
                right--;
        }
        return {};
    }
      /*NOTES:
      this is a classic two pointer 
      sorted, no duplicates , unique solution 
      so just put left,right pointers 'if sum == target return left ,right 
      if less increase left as we fall short if not decrease right that's it */

    };