class Solution {
    int sum(vector<int> &nums){
        int s = 0;
        for(auto x : nums) s += x ;
        return s;
    }

    int maximum(vector<int> &nums){
        int s = INT_MIN;
        for(auto x : nums) s = max(s , x);
        return s;
    }

    bool feasible(int limit , vector<int> &nums , int k){
        int cnt = 1;
        int total = 0;

        for(int i=0 ; i<nums.size() ; i++){
            total += nums[i];

            if(total > limit){
                cnt++ ;
                total = nums[i];
            }
        }

        if(cnt<=k){
            return true;
        }

        return false ;
    }
public:
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();

        int mx = maximum(nums);
        int total = sum(nums);

        int left = mx , right = total ;
        while(left < right){
            int mid = (left + right)>>1 ;

            if(feasible(mid , nums , k)){
                right = mid ;
            }else{
                left = mid + 1 ;
            }
        }   

        return left ;
    }
};