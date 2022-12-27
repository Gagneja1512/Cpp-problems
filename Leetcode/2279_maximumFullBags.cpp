class Solution {
public:
    int maximumBags(vector<int>& c, vector<int>& r, int left) {
        int n = c.size() ;
        vector<int> space(n , 0) ;
        for(int i=0 ; i<n ; i++){
            space[i] = c[i] - r[i] ;
        }

        sort(space.begin() , space.end()) ;
        int cnt = 0;
        for(int i=0 ; i<n ; i++){
            if(space[i] <= left){
                cnt++ ;
                left = left - space[i] ;
            }else{
                break;
            }
        }

        return cnt ;
    }
};