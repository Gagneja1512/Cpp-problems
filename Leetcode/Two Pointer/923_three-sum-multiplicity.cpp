class Solution {
    int mod = 1e9 + 7;
public:
    int threeSumMulti(vector<int>& arr, int target) {
        int n = arr.size() ;
        long ans = 0;
        sort(arr.begin() , arr.end()) ;

        for(int i=0 ; i<n ; i++){
            int x = target - arr[i] ;

            int start = i+1 , end = n-1 ;
            while(start < end){
                if(arr[start] + arr[end] > x){
                    end-- ;
                }else if(arr[start] + arr[end] < x){
                    start++ ;
                }else{ // Now the only case arr[start] + arr[end] == x
                    if(arr[start] == arr[end]){
                        ans += (end-start+1)*(end-start)/2 ;
                        ans = ans%mod ;
                        
                        break;
                    }else{
                        int start_cnt = 1 , end_cnt = 1;
                        while(start < end && arr[start] == arr[start+1]){
                            start++ ;
                            start_cnt++ ;
                        }
                        start++ ;

                        while(start < end && arr[end] == arr[end-1]){
                            end-- ;
                            end_cnt++ ;
                        }
                        end-- ;
                        
                        ans += (start_cnt*end_cnt);
                        ans = ans%mod ;
                    }
                }
            }
        }


        return ans ;
    }
};