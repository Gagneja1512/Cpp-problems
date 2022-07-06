class Solution {
public:
    int removeElement(vector<int>& arr, int val) {
        sort(arr.begin() , arr.end());
        int n = arr.size();
        int index = 0;
        for(int i=0 ; i<n ; i++)
        {
            if(arr[i] != val)
            {
                swap(arr[i] , arr[index]);
                index++ ;
            }
        }
        
        return index ;
    }
};