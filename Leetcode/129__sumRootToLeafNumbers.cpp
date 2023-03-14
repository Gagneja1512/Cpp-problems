class Solution {
    void solve(TreeNode* root , int &ans , int x){
        x = x*10 + root->val ;
        
        if(root->left){
            solve(root->left , ans , x) ;
        }

        if(root->right){
            solve(root->right , ans , x) ;
        }

        if(root->left == NULL && root->right == NULL){
            cout<<ans<<' '<<x<<endl;
            ans += x ;
            return ;
        }
    }

public:
    int sumNumbers(TreeNode* root) {
        int ans = 0 ;
        int x = 0 ;

        solve(root , ans , x) ;
        return ans ;
    }
};