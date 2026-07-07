class Solution {
public:
    void reverseString(vector<char>& s) {
        int left=0;
        int right=s.size()-1;
        while(left<right && left!=right){
            swap(s[left],s[right]);
            left++;
            right--;
        }
    }
    /*this is a two pointer opposite traversal sum take two pointers and both ends swap them both and move in opposite direction and conuntinue swapping*/
};
