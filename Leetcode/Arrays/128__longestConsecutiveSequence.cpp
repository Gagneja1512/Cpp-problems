class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
        int n = arr.size() ;
        unordered_set<int> s;

        for(int i=0 ; i<n ; i++) s.insert(arr[i]);
        
        int ans = 0;
        for(int i=0 ; i<n ; i++){
            int cnt = 1 ;
            if(s.find(arr[i]-1) == s.end()){
                int x = arr[i] ;
                while(s.find(x+1) != s.end()){
                    cnt++ ;
                    x++ ;
                }
            }else{
                continue ; //Thats not the starting point
            }

            ans = max(ans , cnt);
        }   

        return ans ;
    }
};