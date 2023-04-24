class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int start = 0 , end = 0;
        int ans = 0 , cnt = 0;

        while(end < n){
            if(nums[end] == 0){
                cnt++ ;
            }

            while(cnt > k){
                if(nums[start] == 0){
                    cnt-- ;
                }
                start++ ;
            }

            end++ ;
            ans = max(ans , end - start);
        }

        return ans ;
    }
};