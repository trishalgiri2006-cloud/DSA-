class Solution {
public:
    long long countCommas(long long n) {
        long long ans = 0;

        for (long long p = 1000, k = 1; p <= n; p *= 1000, k++) {
            ans += (n - p + 1) * k;
        }

        return ans;
    }
};