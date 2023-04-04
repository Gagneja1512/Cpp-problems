class Solution {
public:
    int numRescueBoats(vector<int>& arr, int limit) {
        sort(arr.begin() , arr.end()) ;

        int n = arr.size() ;
        int cnt = 0;

        int start = 0 , end = n-1 ;
        while(start <= end){
            int first = arr[start] , second = 0 ;
            if(start != end){
                second = arr[end] ;
            }

            if(first + second <= limit){
                start++ ;
                end-- ;
            }else{
                end-- ;
            }

            cnt++ ;
        }

        return cnt ;
    }
};