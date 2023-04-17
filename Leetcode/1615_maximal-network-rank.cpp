class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        int m = roads.size() ;
        vector<vector<int>> edges(n , vector<int>()) ;

        for(int i=0 ; i<m ; i++){
            edges[roads[i][0]].push_back(roads[i][1]);
            edges[roads[i][1]].push_back(roads[i][0]) ;
        }

        for(int i=0 ; i<n ; i++){
            sort(edges[i].begin(), edges[i].end()); 
        }

        int ans = INT_MIN ;
        for(int i=0 ; i<n ; i++){
            for(int j=i+1 ; j<n ; j++){
                bool found = false ;
                
                for(int k=0 ; k<edges[j].size() ; k++){
                    if(edges[j][k] == i){
                        found = true ;
                    }
                }

                int res = edges[i].size() + edges[j].size() ;
                if(found){
                    res-=1 ;
                }

                ans = max(ans , res);
            }
        }
        return ans;
    }
};