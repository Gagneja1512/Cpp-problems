class Solution {
    void solve(TreeNode* root , int level , unsigned long long cnt , unordered_map<int , vector<unsigned long long>> &m){
        if(root == NULL){
            return ;
        }

        m[level].push_back(cnt);
        solve(root->left , level+1 , 2L*cnt, m);
        solve(root->right , level+1 , 2L*cnt+1 , m);

    }

public:
    int widthOfBinaryTree(TreeNode* root) {
        unordered_map<int , vector<unsigned long long>> m;

        int level = 0 ;
        solve(root , level , 0 , m) ;

        long ans = INT_MIN ;

        for(auto itr = m.begin() ; itr != m.end() ; itr++){
            int first = itr->first ;
            vector<unsigned long long> second = itr->second ;


            long t = second[second.size() - 1] - second[0] + 1;
            ans = max(ans , t);
        }

        return ans;
    }
};