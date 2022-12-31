class Solution {
    void values(TreeNode* root , vector<int> &ans){
        if(root == NULL) {
            return ;
        }

        values(root->left , ans) ;
        //ans.push_back(root->val) ;
        ans.push_back(root->val) ;
        values(root->right, ans) ;   
    }

    void solve(TreeNode* root , vector<int> &ans){
        if(root == NULL){
            return ;
        }

        solve(root->left , ans) ;
        int x = root->val ;
        int sum = x ;
        for(int i=0 ; i<ans.size() ; i++){
            if(x < ans[i]){
                sum += ans[i] ;
            }
        }

        root->val = sum ;
        solve(root->right , ans) ;
    }

public:
    TreeNode* bstToGst(TreeNode* root) {
        vector<int> ans ;
        values(root ,ans) ;

        solve(root , ans) ;

        int n = ans.size() ;
        for(int i=0 ; i<n ; i++){
            cout<<ans[i]<<' ';
        }
        cout<<endl;

        return root ;
    }
};