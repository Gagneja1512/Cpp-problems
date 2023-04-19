// Simple Solution without dp -> TLE but all testcases passed.
class Solution {
    int solve(TreeNode* root , bool left , bool right ,int cnt){
        if(right && root->right){
            return solve(root->right , true , false , cnt+1);
        }

        if(left && root->left){
            return solve(root->left , false , true , cnt+1);
        }

        return cnt ;
    }

    int solve2(TreeNode* root , int &ans){
        int ans_1 = 0 , ans_2 = 0 , cnt = 1 ;

        if(root == NULL){
            return 0;
        }

        solve2(root->left , ans) ;
        if(root->left)
            ans_1 = solve(root->left , false , true , cnt);
        if(root->right)
            ans_2 = solve(root->right , true , false , cnt);
        solve2(root->right , ans) ;

        ans = max(ans , max(ans_1 , ans_2)) ;
        return ans ;
    }
public:
    int longestZigZag(TreeNode* root) {
        int ans = 0 ;
        return solve2(root , ans);           
    }
};


// Using the map for dp
class Solution {
    void solve(TreeNode* root , map<pair<TreeNode* , int>, int> &m){
        if(root == NULL){
            return ;
        }

        if(root->left){
            solve(root->left , m);
        }
        if(root->right){
            solve(root->right , m);
        }

        //processing the node
        if(root->left){
            m[{root , 0}] = m[{root->left , 1}] + 1 ;
        }
        if(root->right){
            m[{root , 1}] = m[{root->right , 0}] + 1;
        }
    }
public:
    int longestZigZag(TreeNode* root) {
        if(!root->left && !root->right){
            return 0 ;
        }

        map<pair<TreeNode* , int> , int> dp ;
        solve(root , dp);

        int ans = INT_MIN ;
        for(auto itr = dp.begin() ; itr != dp.end() ; itr++){
            ans = max(ans , itr->second);
        }

        return ans ;
    }
};