class Solution {
public:
    int partitionString(string s) {
        vector<int> hash(26 , 0) ;
        int n = s.size() ;

        int cnt = 1 ;
        for(int i=0 ; i<n ; i++){
            int index = s[i] - 'a';
            if(hash[index] == 0){
                hash[index]++ ;
            }else{
                vector<int> t(26 , 0) ;
                hash = t ;
                hash[index]++ ;
                cnt++ ;
            }
        }

        return cnt ;
    }
};