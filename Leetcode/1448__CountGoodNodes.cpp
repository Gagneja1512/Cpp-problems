class Solution {

    void solve(TreeNode* root , int &cnt , int maximum){
        if(root == NULL){
            return ;
        }

        if(root->val >= maximum){
            cnt++ ;
        }

        solve(root->left , cnt , max(maximum , root->val)) ;
        solve(root->right , cnt , max(maximum , root->val)) ;
    }

public:
    int goodNodes(TreeNode* root) {
        int cnt = 0 ;
        solve(root , cnt , INT_MIN) ;

        return cnt ;
    }
};