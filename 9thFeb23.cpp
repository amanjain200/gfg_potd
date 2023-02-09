/*
Maximum Bipartite Matching
MediumAccuracy: 69.01%Submissions: 7K+Points: 4
Lamp
You can earn more Geekbits by participating in GFG Weekly Coding Contest  

There are M job applicants and N jobs.  Each applicant has a subset of jobs that he/she is interested in. Each job opening can only accept one applicant and a job applicant can be appointed for only one job. Given a matrix G with M rows and N columns where G(i,j) denotes ith applicant is interested in the jth job. Find the maximum number of applicants who can get the job.

Example 1:

Input: 
M = 3, N = 5
G = {{1,1,0,1,1},{0,1,0,0,1},
{1,1,0,1,1}}
Output: 3
Explanation: There is one of the possible
assignment-
First applicant gets the 1st job.
Second applicant gets the 2nd job.
Third applicant gets the 4th job.
Example 2:

Input:
M = 6, N = 2
G = {{1,1},{0,1},{0,1},{0,1},
{0,1},{1,0}}
Output: 2
Explanation: There is one of the possible
assignment-
First applicant gets the 1st job.
Second applicant gets the 2nd job.
 

Your Task:
You don't need to read to print anything. Your task is to complete the function maximumMatch() which takes matrix G as input parameter and returns the maximum number of applicants who can get the job.

Expected Time Complexity: O(N3).
Expected Auxiliary Space: O(N).

Constraints:
1 ≤ N, M ≤ 100

*/

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int>mat;
    vector<int>vis;
    bool solve(int p,vector<vector<int>>&g){
      for(int j=0;j<g[0].size();j++){
          if(g[p][j] && !vis[j]){
              vis[j]=1;
              if(mat[j]==-1 || solve(mat[j],g)){
                  mat[j]=p;
                  return true;
              }
          }
      }
      return false;
    }

	int maximumMatch(vector<vector<int>>&G){
	    int p=G.size();
	    int j=G[0].size();
	    mat=vector<int>(j,-1);
	    int ans=0;
	    for(int i=0;i<p;i++){
	        vis=vector<int>(j,0);
	        if(solve(i,G))ans++;
	    }
	    return ans;
	}

};
