/*

Permutations of a given string
MediumAccuracy: 34.65%Submissions: 213K+Points: 4
Getting a High Paying Job Now Easier Than Today's Problem! Apply For Mega Job-A-Thon  

Given a string S. The task is to print all unique permutations of the given string in lexicographically sorted order.

Example 1:

Input: ABC
Output:
ABC ACB BAC BCA CAB CBA
Explanation:
Given string ABC has permutations in 6 
forms as ABC, ACB, BAC, BCA, CAB and CBA .

Example 2:

Input: ABSG
Output:
ABGS ABSG AGBS AGSB ASBG ASGB BAGS 
BASG BGAS BGSA BSAG BSGA GABS GASB 
GBAS GBSA GSAB GSBA SABG SAGB SBAG 
SBGA SGAB SGBA
Explanation:
Given string ABSG has 24 permutations.

Your Task:  
You don't need to read input or print anything. Your task is to complete the function find_permutaion() which takes the string S as input parameter and returns a vector of string in lexicographical order.

Expected Time Complexity: O(n! * n)
Expected Space Complexity: O(n! * n)

Constraints:
1 <= length of string <= 5
*/

/*
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	void solve(int n,set<string>&st,string temp,string &s,vector<int>&vis){
         if(temp.size()==n){
             st.insert(temp);
             return;
         }
         for(int i=0;i<n;i++){
             if(!vis[i]){
                  temp+=s[i];
                  vis[i]=1;
             solve(n,st,temp,s,vis);
                temp.pop_back();
                vis[i]=0;
         }
   }
  }
	public:
		vector<string>find_permutation(string s)
		{
		    int n=s.size();
		  set<string>st;
          string temp="";
          vector<int>vis(n,0);
        solve(n,st,temp,s,vis);
         vector<string>ans;
        for(auto it:st){
            ans.push_back(it);
        }
        return ans;
    }
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends

*/