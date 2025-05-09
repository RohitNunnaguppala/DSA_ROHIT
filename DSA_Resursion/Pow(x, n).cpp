class Solution {
    public:
        double myPow(double x, int n) {
            if (n < 0) {
                x = 1 / x;
                long long N = -(long long)n;
                return powHelper(x, N);
            } else {
                return powHelper(x, n);
            }
        }
    
    private:
        double powHelper(double x, long long n) {
            if (n == 0) return 1;
            if (n == 1) return x;
    
            double half = powHelper(x, n / 2);
            if (n % 2 == 0) {
                return half * half;
            } 
            else {
                return half * half * x;
            }
        }
    };