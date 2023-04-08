class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        set<pair<int , int>> store ;
        map<int , int> diff ;
        store.insert({0 , 0}) ;

        int n = nums.size() ;
        int cz = 0 , co = 0 ;

        for(int i=0 ; i<n ; i++){
            if(nums[i] == 0) cz++ ;
            else co++ ;

            store.insert({cz , co}) ;
            if(diff.find(cz - co) == diff.end())
                diff[cz - co] = i ;
        }   

        int ans = 0 ;
        auto itr = store.end() ;
        itr-- ;

        while(itr != store.begin()){
            pair<int , int> p= *itr;

            int zeroes = p.first ;
            int ones = p.second ;

            if(zeroes > ones){
                int d = zeroes - ones ;
                if(diff.find(d) != diff.end()){
                    
                       
                        ans = max(ans , zeroes + ones - diff[d] - 1) ;
                    
                }
            }else if(ones > zeroes){
                int d = zeroes - ones ;
                if(diff.find(d) != diff.end()){
                    
                        ans = max(ans , zeroes + ones - diff[d] - 1);
                }
            }else{
                ans = max(ans , ones + zeroes) ;
            }

            itr-- ;
        }

        return ans ;
    }
};