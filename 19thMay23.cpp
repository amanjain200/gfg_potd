/*
Find k-th smallest element in given n ranges
MediumAccuracy: 39.75%Submissions: 3K+Points: 4
Applying for Jobs, Now Easier Than Today's Problem! Explore Now

Given n ranges of the form [p, q] which denotes all the numbers in the range [p, p + 1, p + 2,...q].  Given another integer q denoting the number of queries. The task is to return the kth smallest element for each query (assume k>1) after combining all the ranges.
In case the kth smallest element doesn't exist return -1. 

Example 1:

Input:
n = 2, q = 3
range[] = {{1, 4}, {6, 8}}
queries[] = {2, 6, 10}
Output: 
2 7 -1
Explanation: 
After combining the given ranges, 
the numbers become 1 2 3 4 6 7 8. As here 2nd 
element is 2, so we print 2. As 6th element is 
7, so we print 7 and as 10th element doesn't 
exist, so weprint -1.
Example 2:

Input:
n = 2, q = 2
range[] = {{2, 6}, {5, 7}} 
queries[] = {5, 8}
Output: 
6 -1
Explantion: 
After combining the ranges, we'll take Union of 
range= {2,3,4,5,6,7}, here  5th smallest number 
will be 6 and 8th smallest number does not exists.
Your Task:  
You don't need to read input or print anything. Your task is to complete the function kthSmallestNum() which takes a n * 2 array denoting the ranges and an array denoting the queries.

Expected Time Complexity: O(nlogn+q*n)
Expected Auxiliary Space: O(q)

Constraints:
1 <= n <= 103
1 <= range[i][0] <= range[i][1] <= 2*109
1 <= q <= 500
1 <= queries[i] <= 2*109
*/

/*
//{ Driver Code Starts
/* Driver program to test above function 

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    vector<int>kthSmallestNum(int n, vector<vector<int>>&range, int q, vector<int>queries){
        sort(range.begin(), range.end());
        vector<vector<int>> v;
        v.push_back(range[0]);
        
        for(int i=1; i<n; i++) {
            if(v.back()[1] >= range[i][0]) v.back()[1] = max(v.back()[1], range[i][1]);
            else v.push_back(range[i]);
        }
        
        vector<int> ps, ans;
        int cnt = 0;
        for(int i=0; i<v.size(); i++) {
            cnt += v[i][1] - v[i][0] + 1;
            ps.push_back(cnt);
        }
        
        for(int q : queries) {
            int pos = lower_bound(ps.begin(), ps.end(), q) - ps.begin();
            if(pos >= ps.size()) ans.push_back(-1);
            else {
                int pre = pos == 0 ? 0 : ps[pos - 1];
                ans.push_back(v[pos][0] + q - pre - 1);
            }
        }
        return ans;
    } 
};


//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    vector<vector<int>>range(n, vector<int>(2, 0));
	    for(int i = 0 ; i < n; i++){
	        cin >> range[i][0] >> range[i][1];
	    }
	    int q;
	    cin >> q;
	    vector<int>queries;
	    for(int i = 0 ; i < q; i++){
	        int x;
            cin >> x;
	        queries.push_back(x);
	    }
	    Solution ob;
	    vector<int>ans = ob.kthSmallestNum(n, range, q, queries);
	    for(auto it : ans){
	        cout << it << " ";
	    }
	    cout << endl;
	}
	return 0;
}

// } Driver Code Ends
*/