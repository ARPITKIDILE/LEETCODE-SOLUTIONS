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
    void traverse(TreeNode *root, vector<vector<int>>*sol, int level) {
        if (root == NULL) {
            return;
        }
        if (level == sol->size()) {
            sol->push_back(vector<int>());
        }
        sol->at(level).push_back(root->val);
        traverse(root->left, sol, level+1);
        traverse(root->right, sol, level+1);   
        return;
    }
    
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> sol;
        traverse(root, &sol, 0);
        //reverse(sol.begin(),sol.end());
        return sol;
    }
};
