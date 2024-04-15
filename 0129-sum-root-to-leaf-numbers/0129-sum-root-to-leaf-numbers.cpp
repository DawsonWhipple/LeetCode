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
    int sumNumbers(TreeNode* root) {
        return sumNumbersHelper(root, 0);
    }
    
    int sumNumbersHelper(TreeNode* root, int current){
        //if the root doesn't exist
        if(!root)
            return 0;
        //'append' the value of the current node by shifting the current over one place
        current = (current*10) + root->val;
        // leaf node - return current number to be added to total sum
        if(!root -> left && !root -> right)           
            return current;
        
        return sumNumbersHelper(root->left, current) + sumNumbersHelper(root->right, current);
    }
};