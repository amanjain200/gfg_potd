/*
Good Subtrees
MediumAccuracy: 83.75%Submissions: 4K+Points: 4
Finding A Job Is Now Easier Than Today's Problem! Explore Job Fair 2023 

You are given a root node of a binary Tree and each node of the binary tree is assigned a value and you are also given an integer k and you have to return the count of Good subtrees of this binary Tree . Good subtree is a subtree such that the number of distinct values in this subtree is less than or equal to k.

Note: Subtree of a node consists of that node and all nodes of the subtrees of left and right child  of that node  if they exist .

Example 1:

Input:

k=2
Output: 4
Explanation:
We can see all leaves 3,4,5 form good subtrees as number of distinct values in subtrees is 1 which is less than k which is given as 2,now  subtree which starts at 2 and has 3 as left node  is also a good subtree because the count of distinct values is 2 which is equal to k so overall 4 good subtrees.
Example 2:

Input:

k=1
Output: 4
Explanation:
we can see all leaves 2,2 form good subtrees as number of distinct values in subtrees is 1 which is equal to k which is given as 1, now  both subtrees which starts at 2 and has 2 as child also forms  a good subtree because count of distinct values is 1 which is equal to k so overall 4 good subtrees.
Your Task:
You don't need to read input or print anything. Your task is to complete the function goodSubtrees() which takes root of binary tree  and an integer k respectively and you have to  return the count of good subtrees .

Expected Time Complexity: O(n*k)
Expected Space Complexity: O(n+n*k), where n is the size of recursion stack.

Constraints:
1<=n<=105 (Number of nodes in binary Tree)
1<=node.data<=25
1<=k<=20
The sum of n over all test cases won't exceed 5*105
*/

/*
//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
}; 

// Function to Build Tree
Node* buildTree(string str)
{   
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
            return NULL;
    
    // Creating vector of strings from input 
    // string after spliting by space
    vector<string> ip;
    
    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);
        
    // Create the root of the tree
    Node *root = new Node(stoi(ip[0]));
        
    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);
        
    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {
            
        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();
            
        // Get the current node's value from the string
        string currVal = ip[i];
            
        // If the left child is not null
        if(currVal != "N") {

            // Create the left child for the current Node
            currNode->left = new Node(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->left);
        }
            
        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];
            
        // If the right child is not null
        if(currVal != "N") {
                
            // Create the right child for the current node
            currNode->right = new Node(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }
    
    return root;
}


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
unordered_map<int,int> solve(Node* root, int k, int &ans){
        unordered_map<int,int>M1, M2;
        if(!root) return M1;
        M1 = solve(root->left,k,ans);
        M2 = solve(root->right,k,ans);
        for(auto i: M2){
            M1[i.first] += i.second;
        }
        M1[root->data]++;
        if(M1.size() <= k) ans++;
        return M1;
    }
    int goodSubtrees(Node *root,int k){
        int ans = 0;
        solve(root, k, ans);
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        if(i==0){
            string s;
            getline(cin,s);
        }
        string str;
        getline(cin,str);
        int k;
        cin>>k;
        string newline;
        getline(cin,newline);
        Node* root = buildTree(str);
        Solution ob;
        cout<<ob.goodSubtrees(root,k)<<endl;
    }
    return 0;
}
// } Driver Code Ends

*/