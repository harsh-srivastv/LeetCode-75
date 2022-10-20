// https://leetcode.com/problems/validate-binary-search-tree/
#include<bits/stdc++.h>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    bool isValidBST(TreeNode* root) {
        return checkValidBST(root, LONG_MIN, LONG_MAX);
    }
    bool checkValidBST(TreeNode* root, long  minVal, long maxVal){
        if(root == NULL) return true;
        if(root->val <= minVal or root->val >= maxVal) return false;
        return checkValidBST(root->left, minVal, root->val) and checkValidBST(root->right, root->val, maxVal);
    }
};