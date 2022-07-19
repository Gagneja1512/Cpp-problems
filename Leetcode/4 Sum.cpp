class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        
        vector<long long> arr(n);
        for(int i=0 ; i<n ; i++)
            arr[i] = nums[i];
        
        vector<vector<int> > result ;
        set<vector<int>> s;
        sort(arr.begin() , arr.end());
        for(int i=0 ; i<n ; i++)
        {
            for(int j=i+1 ; j<n ; j++)
            {
                int k = j+1 , l = n-1;
                long int tar = target - arr[i] - arr[j];
                while(k < l)
                {
                    if(arr[k] + arr[l] > tar)
                        l--;
                     
                    else if(arr[k] + arr[l] < tar)
                        k++ ;
                    
                    else
                    {
                        vector<int> x;
                        x.push_back(arr[i]);
                        x.push_back(arr[j]);
                        x.push_back(arr[k]);
                        x.push_back(arr[l]);
                        
                        s.insert(x);
                        
                        l-- ;
                    }
                }
            }
        }
        
        for(auto itr = s.begin() ; itr != s.end() ; itr++)
            result.push_back(*itr);
        
        return result;
    }
};