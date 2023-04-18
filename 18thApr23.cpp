/*
Minimum BST Sum Subtree
HardAccuracy: 66.43%Submissions: 9K+Points: 8
Unlock your coding potential - join our Hiring Coding Contest and land your dream job!  

Given a binary tree and a target, find the number of node in the minimum sub-tree with the given sum equal to the target which is also a binary search tree.

Example 1:

Input:
           13
         /    \
       5       23
      / \      / \
     N   17   N   N
         /
        16
Target: 38
Output: 3
Explanation: 5,17,16 is the smallest subtree
with length 3.
 

Example 2:

Input:
             7
           /   \
          N    23
             /   \
            10    23
           /  \   / \
          N   17 N   N
Target: 73
Output: -1
Explanation: No subtree is bst for the given target.
Your Task:  
You don't need to read input or print anything. Your task is to complete the function minSubtreeSumBST() which takes the tree root and target as input parameters which is a binary Tree and returns the length of the minimum subtree having a sum equal to the target but which is a binary search tree.

Expected Time Complexity: O(N), where N is no. of nodes
Expected Space Complexity: O(h), where h is the height of the tree

Constraints:
1 <= N <= 10^5
*/

/*
class Solution {
public:
 int targ=0,ans=INT_MAX,l=0;
    bool check(Node* root,int r1,int r2)
    {
        if(root==NULL)
            return true;
        if(root->data<=r1||root->data>=r2)
            return false;
        l++;
        return check(root->left,r1,root->data)&&check(root->right,root->data,r2);
    }
    int getSum(Node* root)
    {
        if(root==NULL)
            return 0;
        int sum=root->data+getSum(root->left)+getSum(root->right);
        // cout<<sum<<" ";
        if(sum==targ)
        {
            l=0;
            if(check(root,INT_MIN,INT_MAX))
            {
                ans=min(ans,l);
            }
        }
        return sum;
    }
    int minSubtreeSumBST(int target, Node *root) {
        // code here
        targ=target;
        getSum(root);
        return ans==INT_MAX?-1:ans;
    }
};
*/