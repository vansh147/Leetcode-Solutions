class Solution {
public:
    int maxdepth(TreeNode *root){
        if(root==NULL){
            return 0;
        }
        int left= maxdepth(root->left);
        int right = maxdepth(root->right);

        return max(left, right)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        int left= diameterOfBinaryTree(root->left);
        int right = diameterOfBinaryTree(root->right);
        int ht = maxdepth(root->left) +maxdepth(root->right);
       
        return  max( left , max(right , ht)); 
    }
};