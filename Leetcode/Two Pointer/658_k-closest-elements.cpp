class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n = arr.size() ;

        // Define the variables
        int min_diff = INT_MAX , min_index = -1 ;
        for(int i=0 ; i<n ; i++){
            if(abs(x - arr[i]) < min_diff){
                min_index = i;
                min_diff = abs(x - arr[i]);
            }
        } 

        vector<int> ans ;
        ans.push_back(arr[min_index]);

        int start = min_index - 1 ;
        int end = min_index + 1 ;

        for(int i=0 ; i<k-1 ; i++){
            if(start<0){
                ans.push_back(arr[end]);
                end++ ;
            }else if(end >= n){
                ans.push_back(arr[start]);
                start-- ;
            }
            else if(abs(arr[start] - x) <= abs(arr[end] - x)){
                ans.push_back(arr[start]);
                start-- ;
            }else if(abs(arr[start] - x) > abs(arr[end] - x)){
                ans.push_back(arr[end]);
                end++ ;
            }
        }

        sort(ans.begin() , ans.end());
        return ans ;
    }
};