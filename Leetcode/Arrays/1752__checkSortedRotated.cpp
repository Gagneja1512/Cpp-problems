class Solution {
public:
    bool check(vector<int>& arr) {
        int n = arr.size() ;
        int cnt = 0 ; //Counts the change in the sign.

        for(int i=0 ; i<n-1 ; i++){
            if(arr[i] <= arr[i+1]){
                continue ;
            }else{
                cnt++ ;
            }
        }

        if(cnt >= 2){
            return false ; //The sign changes more than 2 times.
        }

        if(cnt){
            if(arr[0] < arr[n-1]){
                return false ; //The last element is smaller than the first.
            }
        }

        return true ; //All the remaining conditions yeilds true
    }
};