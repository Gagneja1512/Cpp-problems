class Solution {
public:
    double myPow(double a, int b) {
        int n = abs(b);
        
        double res = 1.0;
        while (n > 0) {
            if (n & 1)
                res = res * a;
            a = a * a;
            n >>= 1;
        }
        
        if(b < 0)
            res = 1/res ;
        return res;
        }
};