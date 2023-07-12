class Solution {
public:
    int alternateDigitSum(int n) {
        int ret = 0;
        int sign = 1;
        while(n > 0)
        {
            res += n % 10 * sign;
            sign = -sign;
            n /= 10;
        }
        return -sign * res;
    }
};