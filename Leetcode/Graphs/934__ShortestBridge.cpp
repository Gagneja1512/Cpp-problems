class Solution {
    vector<pair<int , int>> g1 , g2 ;

    bool isValid(int i , int j , int n){
        if(i<0 || j<0 || i>=n || j>=n){
            return false ;
        }

        return true;
    }

    void dfs(int i,int j,vector<vector<int>>& grid,vector<vector<bool>>& vis,int cnt){
        vis[i][j] = true ;

        if(cnt==0) g1.push_back({i,j});
        else g2.push_back({i,j}); 

        //DFS call
        int n = grid.size();

        if(isValid(i+1 , j , n) && grid[i+1][j]==1 && vis[i+1][j] == false)
            dfs(i+1 , j , grid, vis , cnt);

        if(isValid(i , j+1 , n) && grid[i][j+1]==1 && vis[i][j+1] == false)
            dfs(i , j+1 , grid, vis , cnt);

        if(isValid(i-1 , j , n) && grid[i-1][j]==1 && vis[i-1][j] == false)
            dfs(i-1 , j , grid, vis , cnt);

        if(isValid(i , j-1 , n) && grid[i][j-1]==1 && vis[i][j-1] == false)
            dfs(i , j-1 , grid , vis , cnt); 
    }

public:
    int shortestBridge(vector<vector<int>>& grid) {
        
        int n = grid.size();
        vector<vector<bool>> visited(n , vector<bool>(n , false));
        int cnt = 0;

        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<n ; j++){
                if(visited[i][j]==false && grid[i][j]==1){
                    dfs(i , j , grid , visited , cnt);
                    cnt++ ;
                    if(cnt == 2){
                        break ;
                    }
                }
            }
        }

        int ans = INT_MAX;
        for(int i=0 ; i<g1.size() ; i++){
            for(int j=0 ; j<g2.size() ; j++){
                ans = min(ans , abs(g1[i].first - g2[j].first) + abs(g1[i].second - g2[j].second) - 1);
            }
        }

        return ans ;
    }
};