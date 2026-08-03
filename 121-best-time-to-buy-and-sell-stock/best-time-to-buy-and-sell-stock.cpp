class Solution {
public:
    int maxProfit(vector<int>& arr) {
        // minimum price seen till now
        int mn = arr[0];
        // maximum profit
        int mx = 0;
        for (int i = 1; i < arr.size(); i++) {
            // if we sell today, calculate profit
            mx = max(mx, arr[i] - mn);
            // update minimum buying price
            mn = min(mn, arr[i]);
        }
        return mx;
    }
};