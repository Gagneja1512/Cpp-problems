typedef pair<int , int> pd;

class Solution {

    bool isvalid(vector<vector<int>>& grid , set<pd> s , int x , int y){
        int n = grid.size() ;
        int m = grid[0].size() ;

        if(x>=0 && x<=n-1){
            if(y>=0 && y<=m-1){
                if(grid[x][y] != -1){
                    if(s.find({x,y}) == s.end()){
                        //cout<<x<<' '<<y<<endl;
                        return true ;
                    }
                }
            }
        }

        return false ;
    }

    void solve(vector<vector<int>>& grid , set<pd> s , int &ans , int i , int j){
        if(grid[i][j] == 2){

            // for(auto itr : s){
            //     cout<<itr.first<<' '<<itr.second<<endl ;
            // }

            // cout<<endl;

            //cout<<"Kam se Kam pahuncha :)"<<endl;
            bool res = true ;
            for(int k=0 ; k<grid.size() ; k++){
                for(int l=0 ; l<grid[0].size() ; l++){
                    if(grid[k][l] == 0){
                        if(s.find({k,l}) == s.end()) {
                            return ;
                        }
                    }
                }
            }

            ans++ ;
            return ;
        }

        if(isvalid(grid , s , i-1 , j)){
            s.insert({i-1 , j}) ;
            solve(grid , s , ans , i-1 , j) ;
            s.erase({i-1 , j}) ;
        }

        if(isvalid(grid , s , i+1 , j)){
            s.insert({i+1 , j}) ;
            solve(grid , s , ans , i+1 , j) ;
            s.erase({i+1 , j}) ;
        }

        if(isvalid(grid , s , i , j-1)){
            s.insert({i , j-1}) ;
            solve(grid , s , ans , i , j-1) ;
            s.erase({i , j-1}) ;
        }

        if(isvalid(grid , s , i , j+1)){
            s.insert({i , j+1}) ;
            solve(grid , s , ans , i , j+1) ;
            s.erase({i , j+1}) ;
        }
    }

public:
    int uniquePathsIII(vector<vector<int>>& grid) {
        set<pd> s ;
        int ans = 0;

        int x = -1 , y = -1 ;
        int m = grid.size() , n = grid[0].size() ;
        for(int i=0 ; i<m ; i++){
            for(int j=0 ; j<n ; j++){
                if(grid[i][j] == 1){
                    x = i ;
                    y = j;
                    break;
                }
            }
        }

        //cout<<x<<' '<<y<<endl;
        s.insert({x,y}) ;
        solve(grid , s , ans , x , y) ;

        return ans ;
    }
};