class Solution {
public:
    int nthUglyNumber(int n, int a, int b, int c) {
        long long ab = 1LL * a/__gcd(a,b) * b ;
        long long bc = 1LL * b/__gcd(b,c) * c;
        long long ac = 1LL * a/__gcd(a,c) * c;

        long long abc = c/(__gcd((long long)c , ab))*ab;
        
        long long left = 1 , right = 2*1e9 ;
        long long ans = -1;
        while(left <= right){
            long long mid = (left + right)>>1 ;

            long long cnt = mid/a + mid/b + mid/c - mid/ab - mid/bc - mid/ac + mid/abc;

            if(cnt > n){
                right = mid - 1;
            }else if(cnt < n){
                left = mid + 1 ;
            }else if(cnt == n){
                ans = mid;
                right = mid - 1;
            }
        }

        return ans;
    }
};