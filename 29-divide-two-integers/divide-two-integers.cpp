class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == divisor) return 1;
        
        bool sign = true;
        if (dividend >= 0 && divisor < 0) sign = false;
        else if (dividend <= 0 && divisor > 0) sign = false;
        
        long n = abs((long long)dividend);
        long d = abs((long long)divisor);
        long ans = 0;
        
        while (n >= d) {
            int cnt = 0;
            while (n >= (d << (cnt + 1))) 
                cnt++;
            ans += (1L << cnt);
            n = n - (d << cnt);
        }
        
        // Handle overflow for 32-bit signed integers
        if (ans > (long)INT_MAX) {
            return sign ? INT_MAX : INT_MIN; // Note: -2147483648 fits in INT_MIN when negative
        }
        
        return sign ? ans : -ans;
    }
};