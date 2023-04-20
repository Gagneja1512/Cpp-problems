class Solution {
    void reverse_array(vector<int> &arr , int start , int end){
        while(start <= end){
            swap(arr[start] , arr[end]);
            start++ ;
            end-- ;
        }
    }
public:
    vector<int> pancakeSort(vector<int>& arr) {
        int n = arr.size();

        vector<int> ans ;

        for(int i=0 ; i<n ; i++){
            int mx = INT_MIN , mx_index = -1;
            for(int j=0 ; j<n-i ; j++){
                if(arr[j] > mx){
                    mx = arr[j];
                    mx_index = j;
                }
            }

            reverse_array(arr , 0 , mx_index) ;
            reverse_array(arr , 0 , n-i-1);


            ans.push_back(mx_index+1) ;
            ans.push_back(n-i);
        }

        return ans ;
    }
};