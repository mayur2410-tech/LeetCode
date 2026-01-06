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
    int maxLevelSum(TreeNode* root) {
        int sum =0;
        int maxSum = INT_MIN;
        int level = 1;
        int maxlevel = 1;
        queue<TreeNode*>Q;
        Q.push(root);
        Q.push(nullptr);
        while(!Q.empty()){
            TreeNode*curr = Q.front();
            Q.pop();
            if(curr==nullptr){
                if(sum > maxSum ){
                    maxSum = sum;
                    maxlevel = level;
                }
                sum =0;
                level++;
                if(Q.empty()){
                    break;
                }
                Q.push(nullptr);

            }else{
                sum += curr->val;
                if(curr->left){
                    Q.push(curr->left);
                }
                if(curr->right){
                    Q.push(curr->right);
                }
            }
        }

        return maxlevel;

    }
};