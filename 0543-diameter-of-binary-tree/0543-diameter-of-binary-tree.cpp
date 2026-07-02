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
// approach 1 
// int Height(TreeNode* root){
//      if(root==nullptr){
//             return 0;
//         }

//         int leftHt = Height(root->left);
//         int rightHt = Height(root->right);

//         return max(rightHt,leftHt)+1;
// }


// approach 2
 pair<int,int> Diameter(TreeNode* root){


    if(root == nullptr){
        return make_pair(0,0);
    }

    pair<int,int> leftInfo = Diameter(root->left); //LD ,LH
    pair<int,int> rightInfo = Diameter(root->right); //RD ,RH

    int currentDia = leftInfo.second + rightInfo.second ;
    int finalDia = max(currentDia,max(leftInfo.first,rightInfo.first));
    int finalHt = max(leftInfo.second ,rightInfo.second)+1;
    return make_pair(finalDia,finalHt);
 
        }; 

        int diameterOfBinaryTree(TreeNode* root) {
//         //approach 1 = o(n^2)
//         if(root==nullptr){
//             return 0;
//         }
//         int currentDiameter = Height(root->left) + Height(root->right) ;
//         int leftDiameter =  diameterOfBinaryTree(root->left);
//         int rightDiameter =  diameterOfBinaryTree(root->right);

//         return max(currentDiameter,max(leftDiameter,rightDiameter));
//     

 
 


        return Diameter(root).first;

        }
};