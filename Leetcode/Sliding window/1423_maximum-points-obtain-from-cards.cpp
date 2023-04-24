class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        int n = nums.size() ;

        vector<int> arr ;
        for(int i=n-k ; i<n ; i++) arr.push_back(nums[i]);
        for(int i=0 ; i<k ; i++) arr.push_back(nums[i]);

        for(int i=0 ; i<arr.size() ; i++){
            cout<<arr[i]<<' ';
        }
        cout<<endl;

        int ans = 0;
        for(int i=0 ; i<k ; i++){
            ans += arr[i];
        }

        int index = k ;
        int sum = ans ;
        while(index < arr.size()){
            sum = sum + arr[index] - arr[index-k];
            ans = max(ans , sum) ;
            index++ ;   
        }

        return ans;
    }
};