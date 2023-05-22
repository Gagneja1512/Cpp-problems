class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        int sum = 0 ;
        int ans = INT_MIN ;
        int n = arr.size();
        int start = -1 , ansStart = -1 , ansEnd = -1 ;

        for(int i=0 ; i<n ; i++){
            if(sum == 0){
                start = i;
            }

            sum += arr[i];
            if(sum > ans){
                ans = sum ;
                ansStart = start ; ansEnd = i; //From this we can find out the subarray.
            }

            if(sum < 0) sum = 0;
        }

        return ans ;
    }
};