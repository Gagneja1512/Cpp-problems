class Solution {
public:
    bool judgeSquareSum(int c) {
        vector<int> squares;
        for(long i=0 ; i<1e5 ; i++){
            if(i*i > INT_MAX){
                break ;
            }else{
                squares.push_back(i*i) ;
            }
        }
  

        int start = 0 , end = squares.size()-1;
        while(start <= end){
            long x = (long)squares[start] + (long)squares[end];
            if((x) > (long)c){
                end-- ;
            }else if(x < c){
                start++ ;
            }else{
                return true ;
            }
        }

        return false ;
    }
};