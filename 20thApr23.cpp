/*
Bheem Wants Ladoos
MediumAccuracy: 69.68%Submissions: 10K+Points: 4
Unlock your coding potential - join our Hiring Coding Contest and land your dream job!  

Chhota Bheem wants to eat the maximum number of ladoos in Dholakpur on Independence Day. The houses in Dholakpur are arranged in the form of a binary tree and have ladoos the same as their house number. Chhota Bheem is standing at his home initially. 
Find the maximum ladoos he can eat if he can go to houses within a maximum distance k from his house. The number of ladoos at his home should also be included in the sum.

Note: Every house has distinct ladoos in it. 
Example 1:

Input:
                   1
                 /    \
                2      9
               /      /  \
              4      5     7
            /   \         /  \
           8     19     20    11
          /     /  \
         30   40   50
home = 9, K = 1
Output:
22
Explanation:
Initially Bheem at 9, so sum = 9
In 2nd move he went to 5, sum=9+5=14
In 3rd move he went to 7, sum=14+7=21
In 4th move he went to 1, sum=21+1=22
So within K distance bheem can get 22 ladoos.  
Example 2:

Input:
                   1
                 /    \
                2      9
               /      /  \
              4      5     7
            /   \         /  \
           8     19     20    11
          /     /  \
         30   40   50
home = 40, K = 2
Output:
113
Explanation:
Initially Bheem at 40, so sum = 40
In 2nd move he went to 19, sum=40+19=59
In 3rd move he went to 4, sum=59+4=63
In 4th move he went to 50, sum=63+50=113
So within K distance bheem can get 113 ladoos.
Your Task:
You don't need to read input or print anything. Complete the function ladoos() which takes the root of the tree, home, and K  as input parameters and returns the maximum number of ladoos he can eat.

Expected Time Complexity: O(N), where N is no. of nodes
Expected Space Complexity: O(1)

Constraints:
1 ≤ N, Home ≤ 105
1 ≤ K ≤ 20

*/

/*
/*
// node structure:

struct Node
{
    int data;
    Node* left;
    Node* right;
};





class Solution{

    public:
    int ladoos(Node* root, int home, int k)
    {
        unordered_map<int ,vector<int>>mp;
        queue<Node*>q;
        q.push(root);
        while(!q.empty())
        {
            int n=q.size();
            for(int i=0;i<n;i++)
            {
                 Node *temp=q.front();
                 q.pop();
                 if(temp->left)
                 {
                     mp[temp->data].push_back(temp->left->data);
                     mp[temp->left->data].push_back(temp->data);
                     q.push(temp->left);
                 }
                 if(temp->right)
                 {
                     mp[temp->data].push_back(temp->right->data);
                     mp[temp->right->data].push_back(temp->data);
                     q.push(temp->right);
                 }
            }
        }
        queue<pair<int,pair<int,int>>>pq;
        pq.push({0,{home,-1}});
        int ans=0;
        while(!pq.empty())
        {
            int steps=pq.front().first;
            int node=pq.front().second.first;
            int parent=pq.front().second.second;
            pq.pop();
            ans+=node;
            for(auto it:mp[node])
            {
                if(steps+1<=k&&parent!=it)
                {
                    pq.push({steps+1,{it,node}});
                }
            }
        }
        return ans;
    }


};
*/