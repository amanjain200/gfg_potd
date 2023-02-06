/*
BST Downward Traversal
EasyAccuracy: 53.27%Submissions: 12K+Points: 2
Lamp
You can earn more Geekbits by participating in GFG Weekly Coding Contest  

Given a Binary Search Tree with unique node values and a target value. You have to find the node whose data is equal to target and return the sum of all descendant node's data which are vertically below the target node. Initially, you are at the root node.
Note: If target node is not present in bst then return -1.

Example 1:

Input:


Target = 35
Output: 32
Explanation: Vertically below 35 is 32.
Example 2:

Input:

Target = 25
Output: 52
Explanation: Vertically below 25 is 22, 30 and their sum is 52.

Your Task:
You don't need to read input or print anything. Your task is to complete the function verticallyDownBST() which takes BST(you are given root node of bst ) and target as input, and return an interger value as the sum of vertically down nodes from target. If target is not present in bst then return -1.

Expected Time Complexity: O( n ), n is number of nodes.
Expected Auxiliary Space: O(Height of the tree).

Constraints:
1 <= n < 106
1 <= target <= n
1 <= node.data < 106


*/


/*

//User function Template for C++
/*
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
/*
class Solution{
public:
    bool cmp=false;
    long long ans=0,g;
    Node *start=NULL;
    void dfs(Node* root,int trt,int gg)
    {
        if(root==NULL)return;
        if(root->data==trt && !cmp)
        {
            g=gg;
            start=root;
            return;
            
        }
        dfs(root->left,trt,gg-1);
        dfs(root->right,trt,gg+1);
        if(cmp)
        {
            if(g==gg)ans+=root->data;
        }
    }

    long long int verticallyDownBST(Node *root,int target){
        dfs(root,target,0);
        cmp=true;
        if(start==NULL)return -1;
        dfs(start,target,g);
        return ans-start->data;
    }
};

*/