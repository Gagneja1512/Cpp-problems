class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size() ;
        int start = 0 , end = 0 , ans = INT_MAX , sum = 0;

        while(end < n){
            sum += nums[end] ;
            bool flag = false ;

            while(sum > target){
                flag = true ;
                sum -= nums[start] ;
                start++ ;
            }
            
            if(sum < target && flag){
                start-- ;
                sum += nums[start] ;
            }

            if(sum >= target)    
                ans = min(ans , end - start + 1) ;

            cout<<sum<<endl;
            end++ ;
        }

        if(ans == INT_MAX) return 0 ;

        return ans ;
    }
};