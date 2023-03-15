class Solution {
public:
    bool isCompleteTree(TreeNode* root) {
        queue<TreeNode*> q ;
        q.push(root) ;
        bool found = false ;

        while(q.size() > 0){
            TreeNode* tp = q.front();
            q.pop();

            if(tp == NULL){
                found = true ;
            }else{
                if(found){
                    return false ;
                }

                q.push(tp->left) ;
                q.push(tp->right) ;
            }
        }

        return true;
    }
};