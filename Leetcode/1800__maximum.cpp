class Solution {
public:
    int maxAscendingSum(vector<int>& a) {
        int s = a[0];  
        int ans = s ;

        int n = a.size() ;
        for(int i=1 ; i<n ; i++) {
            if(a[i] > a[i-1]){
                s += a[i] ;
            }else{
                s = a[i] ;
            }

            ans = max(ans , s) ;
        }

        return ans ;
    }
};