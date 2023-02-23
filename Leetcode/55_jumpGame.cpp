class Solution {
public:
    bool canJump(vector<int>& a) {
        int n = a.size() ;

        int last = n-1 ;
        for(int i=n-2 ; i>=0 ; i--){
            if(i+a[i] >= last){
                last = i;
            }
        }
        return last == 0 ;
    }
};