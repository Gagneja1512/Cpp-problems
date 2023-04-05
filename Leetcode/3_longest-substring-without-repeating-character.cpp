class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size() ;

        if(n == 0){
            return 0;
        }
        int ans = INT_MIN ;

        int i = 0 , j = 0 ;
        vector<int> hash(256 , 0) ;

        while(j < n){
            hash[s[j]]++ ;

            if(hash[s[j]] > 1){
                while(hash[s[j]] > 1){
                    hash[s[i]]-- ;
                    i++ ;
                }
            }

            ans = max(ans, j - i + 1) ;
            j++ ;
        }

        return ans ;
    }
};