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
    int averageOfSubtree(TreeNode* root) {
        return rec(root);
    }

    int rec(TreeNode* root){
        if(root == NULL) return 0;

        int count = 0;
        int sum = totalSum(root, count);
        int avg = sum/count;
        int res = 0;

        if(root -> val == avg) res = res + 1;

        res = res + rec(root -> left);
        res = res + rec(root -> right);
        
        return res;
    }

    int totalSum(TreeNode* root, int &count){
        if(root == NULL) return 0;

        count++;
        int leftSum = totalSum(root -> left, count);
        int rightSum = totalSum(root -> right, count);

        return leftSum + rightSum + root->val;
    }

};