//https://www.youtube.com/watch?v=80Zug6D1_r4&t=163s
//https://leetcode.com/problems/binary-tree-inorder-traversal/submissions/

vector<int> inorderTraversal(TreeNode* root) {
        
        vector<int> pre;
        
        
        TreeNode* curr = root;
        
        while(curr)
        {
            if(curr->left==NULL)
            {
                pre.push_back(curr->val);
                curr = curr->right;
            }
            else
            {
                TreeNode* prev = curr->left;
                while(prev->right!=NULL && prev->right!=curr)
                {
                    prev = prev->right;
                }
                
                if(prev->right==NULL){
                    prev->right = curr;
                    curr = curr->left;
                }
                else
                {
                    prev->right = NULL;
                    pre.push_back(curr->val);
                    curr = curr->right;
                }
            }
        }
        return pre;
        
    }
