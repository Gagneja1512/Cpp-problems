class Solution {
public:
    string mergeAlternately(string s1, string s2) {
        int n = s1.size(), m = s2.size() ;

        string ans = "" ;
        int i=0 , j=0 ;
        while(i<n && j<m){
            ans.push_back(s1[i]);
            i++ ;

            ans.push_back(s2[j]);
            j++ ;
        }

        while(i<n){
            ans.push_back(s1[i]);
            i++ ;
        }

        while(j<m){
            ans.push_back(s2[j]);
            j++ ;
        }

        return ans ;
    }
};