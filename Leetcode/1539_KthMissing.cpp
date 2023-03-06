class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int> hash(2000 , 0) ;

        int n = arr.size() ;
        for(int i=0 ; i<n ; i++){
            hash[arr[i] - 1]++ ;
        }

        for(int i=0 ; i<2000 ; i++){
            if(hash[i] == 0){
                if(k == 1){
                    return i+1 ;
                }else{
                    k-- ;
                }
            }
        }

        return 0 ;
    }
};