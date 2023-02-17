/*
783. Minimum Distance Between BST Nodes
Easy
2.6K
368
Companies
Given the root of a Binary Search Tree (BST), return the minimum difference between the values of any two different nodes in the tree.

 

Example 1:


Input: root = [4,2,6,1,3]
Output: 1
Example 2:


Input: root = [1,0,48,null,null,12,49]
Output: 1
 

Constraints:

The number of nodes in the tree is in the range [2, 100].
0 <= Node.val <= 105
 

Note: This question is the same as 530: https://leetcode.com/problems/minimum-absolute-difference-in-bst/
*/

#include<iostream>
using namespace std;

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
/*
class Solution {
public:
    void helper(TreeNode* root, vector<int>& storeNodeVal) {
        if(root == nullptr)
            return;
        helper(root -> left, storeNodeVal);
        storeNodeVal.push_back(root -> val);
        helper(root -> right, storeNodeVal);
    }

    int minDiffInBST(TreeNode* root) {
        vector<int> storeNode;
        helper(root, storeNode);
        int minDiff = INT_MAX;
        for (int i = 0; i < storeNode.size()-1; i++) {
            minDiff = min(minDiff, storeNode[i+1] - storeNode[i]);
        }
        return minDiff;
    }
};*/