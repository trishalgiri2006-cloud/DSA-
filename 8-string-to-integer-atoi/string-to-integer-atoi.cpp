class Solution {
public:
    int myAtoi(string s) {
        long long int res = 0;
        bool isneg = false;
        int i = 0;
        // Skip leading spaces
        while (i < s.length() && s[i] == ' ') {
            i++;
        }
        // Check sign
        if (i < s.length() && s[i] == '-') {
            isneg = true;
            i++;
        }
        else if (i < s.length() && s[i] == '+') {
            i++;
        }
        // Read digits
        while (i < s.length() && isdigit(s[i])) {
            int digit = s[i] - '0';
            res = res * 10 + digit;
            // Overflow check
            if (!isneg && res > INT_MAX) {
                return INT_MAX;
            }
            if (isneg && -res < INT_MIN) {
                return INT_MIN;
            }
            i++;
        }
        if (isneg) {
            return -res;
        }
        return res;
    }
};