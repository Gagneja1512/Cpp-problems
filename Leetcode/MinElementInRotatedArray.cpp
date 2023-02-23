class Solution {
public:
    int findMin(vector<int>& arr) {
         int n = arr.size();
        
        int start = 1 , end = n-1;
        int index = 0;
        int base = arr[0];
        while(start <= end)
        {
            int mid = (start + end)/2;
            
            if(arr[mid] > base)
            {
                start = mid+1;
            }
            
            else if(arr[mid] < base)
            {   
                base = arr[mid];
                end = mid-1;
            }
        }
        
        
        return base;
    }
};