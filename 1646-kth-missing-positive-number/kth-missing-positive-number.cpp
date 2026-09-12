class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        unordered_set<int> st;

        for (int num : arr) {
            st.insert(num);
        }

        int count = 0;
        int num = 1;

        while (count < k) {
            if (st.find(num) == st.end()) {
                count++;
            }

            if (count == k)
                return num;

            num++;
        }

        return -1;
    }
};