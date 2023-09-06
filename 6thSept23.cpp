/*
Mother Vertex
EasyAccuracy: 47.64%Submissions: 53K+Points: 2

Given a Directed Graph, find a Mother Vertex in the Graph (if present). 
A Mother Vertex is a vertex through which we can reach all the other vertices of the Graph.

Example 1:

Input: 

Output: 0
Explanation: According to the given edges, all 
nodes can be reached from nodes from 0, 1 and 2. 
But, since 0 is minimum among 0,1 and 2, so 0 
is the output.

Example 2:

Input: 

Output: -1
Explanation: According to the given edges, 
no vertices are there from where we can 
reach all vertices. So, output is -1.

Your Task:
You don't need to read or print anything. Your task is to complete the function findMotherVertex() which takes V denoting the number of vertices and adjacency list as input parameter and returns the vertices from through which we can traverse all other vertices of the graph. If there is more than one possible nodes then return the node with minimum value. If not possible returns -1.

Expected Time Complexity: O(V + E)
Expected Space Complexity: O(V)

Constraints:
1 ≤ V ≤ 500
*/
/*
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution 
{
    void bfs(int node, vector<int> adj[], int V, vector<int> &visited){
        queue<int> q;
        q.push(node);
        while(!q.empty()){
            int ver = q.front();
            q.pop();
            visited[ver] = 1;
            for(auto it : adj[ver]){
                if(!visited[it]) q.push(it);
            }
        }
        
        //for(auto it : visited) if(it==0) return false;
        
        //return true;
    }
    public:
    //Function to find a Mother Vertex in the Graph.
	int findMotherVertex(int V, vector<int>adj[])
	{
	    int ans = -1;
	    vector<int> visited(V, 0);
	    for(int i=0; i<V; i++){
	        if(!visited[i]){
	            bfs(i, adj, V, visited);
	            ans = i;
	        }
	        //if(bfs(i, adj, V, vis)) return i;
	    }
	    fill(visited.begin(), visited.end(), 0);
	    bfs(ans, adj, V, visited);
	    for(auto it : visited) if(it==0) return -1;
	    return ans;
	}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
		}
		Solution obj;
		int ans = obj.findMotherVertex(V, adj);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends

*/