class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int start = 0 , end = 0 ;

        int n = nums.size();
        int ans = INT_MIN ;
        int sum = 0 ;
        vector<int> hash(1e4+1 , 0);

        while(end < n){
            sum = sum + nums[end] ;
            hash[nums[end]]++ ;

            while(hash[nums[end]] > 1){
                sum = sum - nums[start];
                hash[nums[start]]-- ;
                start++ ;
            }

            end++ ;
            ans = max(ans , sum);
    
        }   

        return ans ;
    }
};