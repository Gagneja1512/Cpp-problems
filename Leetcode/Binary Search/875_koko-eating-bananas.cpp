class Solution {
    int minimum(vector<int> &arr){
        int ans = INT_MAX ;
        for(int i=0 ; i<arr.size() ; i++){
            ans = min(ans , arr[i]);
        }
        return ans ;
    }

    int maximum(vector<int> &arr){
        int ans = INT_MIN;
        for(int i=0 ; i<arr.size() ; i++){
            ans = max(ans , arr[i]);
        }
        return ans ;
    }

    bool feasible(vector<int> &arr , int cap , int hrs){
        int cnt = 0;
        for(int i=0 ; i<arr.size() ; i++){
            cnt += arr[i]/cap ;

            if(arr[i]%cap != 0) cnt++ ;
        }

        if(cnt <= hrs){
            return true ;
        }

        return false;
    }
public:
    int minEatingSpeed(vector<int>& arr, int h) {
        int n = arr.size() ;
        int start = 1 , end = maximum(arr);

        while(start < end){
            int mid = (start + end)>>1 ;
            if(feasible(arr , mid , h)){
                end = mid ;
            }else{
                start = mid + 1;
            }
        }

        return start ;
    }
};