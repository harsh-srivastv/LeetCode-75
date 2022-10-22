// https://leetcode.com/problems/n-ary-tree-preorder-traversal/

#include<bits/stdc++.h>
using namespace std;

// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};


class Solution {
public:
    
    void check(Node* root, vector<int>& ans){
        ans.push_back(root->val);
        for(int i=0; i<root->children.size(); i++){
            check(root->children[i], ans);
        }
    }
    
    vector<int> preorder(Node* root) {
        vector<int> ans;
        if(root == NULL) return ans;
        
        check(root, ans);
        return ans;
    }
};