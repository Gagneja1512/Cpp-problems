class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int k) {
        int n = arr.size() ;

        int start = 0 , end = n-1 ;
        while(start < end){
            if(arr[start] + arr[end] > k){
                end-- ;
            }else if(arr[start] + arr[end] < k){
                start++ ;
            }else{
                vector<int> ans ;
                ans.push_back(start + 1);
                ans.push_back(end + 1);

                return ans ;
            }
        }

        vector<int> ans(2 , 0);
        return ans ;
    }
};