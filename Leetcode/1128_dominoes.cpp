class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& d) {
        for(int i=0 ; i<d.size() ; i++){
            if(d[i][1] < d[i][0]){
                swap(d[i][0] , d[i][1]) ;
            }
        }

        map<vector<int> , int> m;
        for(int i=0 ; i<d.size() ; i++){
            m[d[i]]++ ;
        }

        int ans = 0;
        for(auto itr = m.begin() ; itr != m.end() ; itr++){
            int x = itr->second ;
            ans += x*(x-1)/2 ;
        }

        return ans ;
    }
};