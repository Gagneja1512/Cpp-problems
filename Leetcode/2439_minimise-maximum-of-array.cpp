using ll = long long;
class Solution {
public:
    int minimizeArrayValue(vector<int>& b) {
        int n = b.size() ;
        int ans = 0;
        int mx = INT_MIN ;
        for(int i=0 ; i<n ; i++){
            mx = max(mx , b[i]) ;
        }

        int start = 0 , end = mx ;
        while(start <= end){
            vector<ll> nums(b.begin(), b.end());
            int mid = (start + end)>>1 ;
            int rest = 0 ;
            bool change = true ;

            for(int i=n-1 ; i>=1 ; i--){
                if(nums[i] >= mid){
                    nums[i - 1] += (nums[i] - mid);
                    nums[i] = mid;
                }
            }

            bool flag = true;
            for(int i = 0; i < n; ++i) {
                flag &= (nums[i] <= mid);
            }
            if(flag) {
                ans = mid;
                end = mid - 1;
            }
            else start = mid + 1;
        }
        return ans;
    }
};