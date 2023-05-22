class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> ans ;
        vector<int> x ; x.push_back(1);
        ans.push_back(x);
        if(n == 1){
            return ans ;
        }

        vector<int> z ; z.push_back(1); z.push_back(1);
        ans.push_back(z);
        if(n == 2){
            return ans ;
        }

        for(int i=3 ; i<=n ; i++){
            vector<int> last = ans[ans.size()-1] ;
            vector<int> y ; y.push_back(1) ;
            for(int j=0 ; j<last.size()-1 ; j++){
                y.push_back(last[j] + last[j+1]);
            }
            y.push_back(1);
            ans.push_back(y);
        }

        return ans ;
    }
};