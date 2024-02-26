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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        //if both given tree are Null then they must be equal, so return true
        if (p == NULL && q == NULL){
            return true;
        }
        //if one tree ends and the other doesnt then they are not equal, return false
        //or if each tree has a different value at current node, return false
        //order of operations means that the val comparison only happens if both nodes aren't NULL, no error
        if(p == NULL || q == NULL || p->val != q->val){
            return false;
        }
        //recursively check through the left and right side of each tree
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};