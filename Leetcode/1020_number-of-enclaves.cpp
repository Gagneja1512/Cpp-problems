class Solution {
    bool isValid(int i , int j , vector<vector<int>> &grid){
        int n = grid.size() ;
        int m = grid[0].size() ;

        if(i<0 || i>=n || j<0 || j>=m){
            return false ;
        }

        return true ;
    }

    void dfs(int i , int j , vector<vector<int>> &grid , vector<vector<bool>> &visited , bool &flag , int &cnt){
        int n = grid.size() ;
        int m = grid[0].size() ;
        
        if(i == 0 || i ==n-1 || j == 0 || j == m-1){
            flag = false ;
        }

        visited[i][j] = true ;
        cnt++ ;
        if(isValid(i-1 , j , grid) && grid[i-1][j] == 1){
            if(visited[i-1][j] == false){
                dfs(i-1 , j , grid , visited , flag , cnt) ;
            }
        }

        if(isValid(i+1 , j , grid) && grid[i+1][j] == 1){
            if(visited[i+1][j] == false){
                dfs(i+1 , j , grid , visited , flag , cnt) ;
            }
        }

        if(isValid(i , j+1 , grid) && grid[i][j+1] == 1){
            if(visited[i][j+1] == false){
                dfs(i , j+1 , grid , visited , flag , cnt) ;
            }
        }

        if(isValid(i , j-1 , grid) && grid[i][j-1] == 1){
            if(visited[i][j-1] == false){
                dfs(i , j-1 , grid , visited , flag , cnt) ;
            }
        }
    }

public:
    int numEnclaves(vector<vector<int>>& grid) {
        int n = grid.size() ;
        int m = grid[0].size() ;

        int ans = 0 ;
        vector<vector<bool>> visited(n , vector<bool>(m , false)) ;

        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<m ; j++){
                if(grid[i][j] && visited[i][j]== false){
                    int cnt = 0 ;
                    bool flag = true ;
                    dfs(i , j , grid , visited , flag , cnt) ;
                    if(flag){
                        ans += cnt ;
                    }
                }
            }
        }

        return ans ;
    }
};