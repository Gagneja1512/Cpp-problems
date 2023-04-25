class Solution {
    int minimum(vector<int> &arr){
        int ans = INT_MAX ;
        for(int i=0 ; i<arr.size() ; i++)
            ans = min(ans , arr[i]);

        return ans ;    
    }

    int maximum(vector<int> &arr){
        int ans = INT_MIN;
        for(int i=0 ; i<arr.size() ; i++)
            ans = max(ans , arr[i]);

        return ans ;    
    }

    bool feasible(vector<int> &arr , int day , int m , int k){
        int n = arr.size();
        int cnt = 0;
        int t = 0 ;
        for(int i=0 ; i<n ; i++){
            if(arr[i] <= day){
                t++ ;
            }else{
                t = 0 ;
            }

            if(t == k){
                cnt++ ;
                t = 0 ;
            }
        }

        if(cnt >= m){
            return true ;
        }

        return false;
    }
public:
    int minDays(vector<int>& arr, int m, int k) {
        int n = arr.size();

        long long x = (long long)m*(long long)k ;
        if(x > n){
            return -1 ; // Can never be more than the capacity....
        }

        int left = minimum(arr) , right = maximum(arr) ;
        while(left < right){
            int mid = (left + right)>>1 ;

            if(feasible(arr , mid , m , k)){
                right = mid ;
            }else{
                left = mid + 1 ;
            }
        }

        return left;
    }
};