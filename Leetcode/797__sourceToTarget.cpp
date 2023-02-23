class Solution {

    void solve(vector<vector<int>> &g , vector<vector<int>> &ans , int node , int dest ,          vector<int> path){
        path.push_back(node) ;
        if(node == dest){
            ans.push_back(path) ;
        }


        for(auto child : g[node]){
            solve(g , ans , child , dest , path) ;
        }
    }

public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> ans ;
        int n = graph.size() ;
        vector<int> path ;

        solve(graph , ans , 0 , n-1 , path) ;
        return ans ;
    }
};