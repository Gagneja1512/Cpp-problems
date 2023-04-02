class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        int n = spells.size() , m = potions.size();

        vector<int> ans ;

        sort(potions.begin() , potions.end()) ;
        for(int i=0 ; i<n ; i++){
            int start = 0 , end = m-1 ;
            int index = -1 ;
            while(start <= end){
                int mid = (start + end)>>1 ;
                long x = spells[i] ;
                long y = potions[mid] ;
                long z = x*y ;

                if(z < success){
                    start = mid + 1 ;
                }else{
                    index = mid ;
                    end = mid - 1;
                }
            }

            // cout<<index<<endl;

            if(index == -1){
                ans.push_back(0) ;
            }else{
                ans.push_back(m - index) ;
            }
        }

        return ans ;
    }
};