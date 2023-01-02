/*
Maximum Value
Given a binary tree, find the largest value in each level.


Example 1:

Input:
        1
       / \
      2   3 
Output:
1 3
Explanation:
At 0 level, values of nodes are {1}
                 Maximum value is 1
At 1 level, values of nodes are {2,3}
                Maximum value is 3
*/



//User function Template for C++
/* Tree node structure  used in the program
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */

class Solution {
  public:
    vector<int> maximumValue(Node* node) {
        vector<int> answer;
        queue<Node*> q;
        q.push(node);
        while(!q.empty()) {
            int level = q.size();
            int curr = INT_MIN;
            for(int i = 0; i < level; i++) {
                auto currNode = q.front();
                q.pop();
                curr = max(curr,currNode->data);
                if(currNode->left)
                    q.push(currNode->left);
                if(currNode->right)
                    q.push(currNode->right);
            }
            answer.push_back(curr);
        }
        return answer;
    }
};