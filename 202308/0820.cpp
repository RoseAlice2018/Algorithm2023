class Solution {
public:
    bool checkTree(TreeNode* root) {
        int ret = 0;
     
            ret += root->left->val;
      
            ret += root->right->val;
        return ret == root->val? true : false;      
    }
};