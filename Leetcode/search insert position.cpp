class Solution {
public:
    int searchInsert(vector<int>& arr, int target) {
        int n = arr.size();
        
        int low = 0;
        int high = n-1;
        int ans = low ;
        while(low <= high)
        {
            int mid = low + (high - low)/2;
            
            if(arr[mid] > target)
                high = mid - 1; 
            
            else if(arr[mid] < target)
            {
                low = mid + 1;
                ans = low;
            }
            else
            {
                ans = mid ;
                break;
            }
        }
        
        return ans ;
    }
};