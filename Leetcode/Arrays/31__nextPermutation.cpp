class Solution {
    void reverse(vector<int> &arr , int start , int end){
        while(start <= end){
            swap(arr[start] , arr[end]);
            start++ ; end-- ;
        }
    }
public:
    void nextPermutation(vector<int>& arr) {
        int n = arr.size() ;
        int breakPoint = -1 ;

        for(int i=n-2 ; i>=0 ; i--){
            if(arr[i] < arr[i+1]){
                breakPoint = i ;
                break;
            }
        }

        if(breakPoint == -1){
            reverse(arr , 0 , n-1);
            return ;
        }

        for(int i=n-1 ; i>=breakPoint ; i--){
            if(arr[i] > arr[breakPoint]){
                swap(arr[i] , arr[breakPoint]);
                break ;
            }
        }

        reverse(arr , breakPoint + 1 , n-1);
        return  ;
    }
};