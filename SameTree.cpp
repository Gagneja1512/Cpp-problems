class Solution {
public:
    bool solve(TreeNode* root1 , TreeNode* root2)
    {
        if(root1 == NULL and root2 != NULL)
            return false ;
            
        if(root1 != NULL and root2 == NULL)
            return false ;
        
        if(root1 == NULL and root2 == NULL)
            return true ;
        
        bool rightans = solve(root1->right , root2->right);
        bool mid = root1->val == root2->val ;
        bool leftans = solve(root1->left , root2->left);
        
        if(rightans and mid and leftans)
            return true ;
        
        else 
            return false ;
    }
    
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return solve(p , q);
    }
};