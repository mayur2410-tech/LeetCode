/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

int Height(TreeNode* root){
     if(root==nullptr){
            return 0;
        }

        int leftHt = Height(root->left);
        int rightHt = Height(root->right);

        return max(rightHt,leftHt)+1;
}
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==nullptr){
            return 0;
        }
        int currentDiameter = Height(root->left) + Height(root->right) ;
        int leftDiameter =  diameterOfBinaryTree(root->left);
        int rightDiameter =  diameterOfBinaryTree(root->right);

        return max(currentDiameter,max(leftDiameter,rightDiameter));
    }
};