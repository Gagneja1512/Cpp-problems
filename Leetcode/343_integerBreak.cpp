class Solution {
public:
    int solve(int n , int res , vector<int> &dp){
        if(n == 0){
            return 1 ;
        }

        if(dp[n] != -1){
            return dp[n] ;
        }

        int ans = 1 ;
        for(int i=1 ; i<=n ; i++){
            if(n - i >= 0){
                ans = max(solve(n - i , res , dp)*i , ans) ;
                dp[n] = ans ;
            }
        }

        int s = max(res , ans) ;
        return s;
    }

    int integerBreak(int n) {
        if(n == 2 || n == 3){
            return n-1 ;
        }

        vector<int> dp(n+1 , -1) ;

        int res = 1;
        int ans = solve(n , res , dp) ;

        return ans ;
    }
};