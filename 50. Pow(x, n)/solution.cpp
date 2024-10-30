class Solution {
public:
    double myPow(double x, int n) {
        if (n == 0)
            return 1.0;
        if (x == 0)
            return 0.0;
        if (x == 1)
            return x;
        if (x == -1 && n % 2 == 0)
            return 1.0;
        if (x == -1 && n % 2 != 0)
            return -1.0;

        long binFrom = n;
        double ans = 1;
        if (n < 0) {
            x = 1 / x;
            binFrom = -binFrom;
        }
        while (binFrom > 0) {
            if (binFrom % 2 == 1) {
                ans *= x;
            }
            x *= x;
            binFrom /= 2;
        }
        return ans;
    }
};
