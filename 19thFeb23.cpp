/*
Fixing Two swapped nodes of a BST
HardAccuracy: 85.53%Submissions: 3K+Points: 8
Lamp
You can earn more Geekbits by participating in GFG Weekly Coding Contest  

Two of the nodes of a Binary Search Tree (BST) are swapped. Fix (or correct) the BST by swapping them back. Do not change the structure of the tree.
Note: It is guaranteed than the given input will form BST, except for 2 nodes that will be wrong.
 
Example 1:
Input:
       10
     /    \
    5      8
   / \
  2   20
Output: 1
Explanation:
 
Example 2:

Input:
         11
       /    \
      3      17
       \    /
        4  10
Output: 1 
Explanation: 
By swapping nodes 11 and 10, the BST 
can be fixed.
Your Task:
You don't need to take any input. Just complete the function correctBst() that takes root node as parameter. The function should return the root of corrected BST. BST will then be checked by driver code and 0 or 1 will be printed.

Expected Time Complexity : O(Number of nodes)
Expected Auxiliary Space : O(logN), N = number of nodes
 
Constraints:
1 <= Number of nodes <= 10^5
*/

// User function Template for C++

/*struct Node
{
    int data;
    struct Node *left, *right;
};

class Solution {
  public:
  void inorder(Node *root , vector<Node*> &ans){
        if(root!=NULL){
            inorder(root->left , ans);
            ans.push_back(root);
            inorder(root->right , ans);
        }
    }
    struct Node *correctBST(struct Node *root) {
        vector<Node*> ans;
        inorder(root, ans);
        Node *temp1, *temp2;
        int c = 0;
        for(int i=0; i<(ans.size()-1); i++){
            if(((ans[i])->data > (ans[i+1])->data) && c == 0){
                temp1 = ans[i];
                temp2 = ans[i+1];
                c = 1;
            }
            else if(((ans[i])->data > (ans[i+1])->data) && c == 1){
                temp2 = ans[i+1];
                break;
            }
        }
        swap(temp1->data, temp2->data);
        return root;
    }
};*/