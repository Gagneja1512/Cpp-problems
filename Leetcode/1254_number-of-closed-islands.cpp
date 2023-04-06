class Solution {
    bool valid(int i , int j , vector<vector<int>> &grid){
        int n = grid.size() ;
        int m = grid[0].size() ;

        if(i<0 || i>=n || j<0 || j>=m){
            return false ;
        }

        return true ;
    }

    void dfs(vector<vector<int>> grid , int i , int j , vector<vector<bool>> &visited, bool &ans) {
        int n = grid.size() ;
        int m = grid[0].size() ;

        visited[i][j] = true ;
        // cout<<i<<' '<<j<<endl;
        if(i == 0 || i == n-1 || j == 0 || j == m-1){
            ans = false ;
        }

        if(valid(i-1 , j , grid) && visited[i-1][j] == false){
            if(grid[i-1][j] == 0){
                // cout<<"FIRST"<<endl;
                dfs(grid , i-1 , j , visited , ans) ;
            }
        }

        if(valid(i+1 , j , grid) && visited[i+1][j] == false){
            if(grid[i+1][j] == 0)
                dfs(grid , i+1 , j , visited , ans) ;
        }

        if(valid(i , j-1 , grid) && visited[i][j-1] == false){
            if(grid[i][j-1] == 0)
                dfs(grid , i , j-1 , visited , ans) ;
        }

        if(valid(i , j+1 , grid) && visited[i][j+1] == false){
            if(grid[i][j+1] == 0)
                dfs(grid , i , j+1 , visited , ans) ;
        }

    }

public:
    int closedIsland(vector<vector<int>>& grid) {
        int n = grid.size() ;
        int m = grid[0].size() ;

        vector<vector<bool>> visited(n , vector<bool>(m , false));

        int cnt = 0 ;
        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<m ; j++){
                if(visited[i][j] == false && grid[i][j] == 0){
                    bool ans = true ;
                    dfs(grid , i , j , visited , ans) ;
                    if(ans){
                        // cout<<i<<' '<<j<<endl;
                        cnt++ ;
                    }
                }
            }
        }

        return cnt ;
    }
};