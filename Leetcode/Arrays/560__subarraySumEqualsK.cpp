class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        int n = arr.size() ;
        unordered_map<int , int> m;
        m[0] = 1 ;
        int sum = 0 , ans = 0;

        for(int i=0 ; i<n ; i++){
            sum += arr[i] ;
            if(m.find(sum-k) != m.end()) ans += m[sum-k] ;
            
            m[sum]++ ;
        }

        return ans ;
    }
};