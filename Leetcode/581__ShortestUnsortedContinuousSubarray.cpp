class Solution {
public:
    int findUnsortedSubarray(vector<int>& a) {
        int n = a.size() ;
        
        vector<int> b = a ;
        int start = -1 , end = -1 ;

        sort(b.begin() , b.end()) ;

        for(int i=0 ; i<n ; i++){
            if(a[i] != b[i]){
                start = i ;
                break;
            }
        }

        for(int i=n-1 ; i>=0 ; i--){
            if(a[i] != b[i]){
                end = i;
                break;
            }
        }

        if(start == -1){
            return 0 ;
        }

        return end - start + 1;
    }
};