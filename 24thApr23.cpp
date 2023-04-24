/*
Nearest smaller tower
MediumAccuracy: 55.45%Submissions: 12K+Points: 4
Lamp
You can earn more Geekbits by participating in GFG Weekly Coding Contest  

Given an array where each element (arr[i]) represents the height of the tower. Find for each tower, the nearest possible tower that is shorter than it. You can look left or right on both sides.
Note : 

If two smaller towers are at the same distance, pick the smallest tower.

If two towers have the same height then we choose the one with a smaller index.

Example 1:

Input: 
arr[] = {1,3,2}
Output: 
{-1,0,0}
Explanation:
For 0th Index : no tower is smallest, so -1.
For 1st Index : For 3, here 1 & 2 both are 
small & at a same distance, so we will pick 1, 
beacuse it has smallest value, so 0(Index)
For 2nd Index : here 1 is smaller, so 0(Index)
So the final output will be which consistes 
Indexes are {-1,0,0}.
Example 2:

Input: 
arr[] = {4,8,3,5,3}
Output: 
{2,2,-1,2,-1}

Explanation: 
For 0th Index : here 3 is the smaller, so 2(Index) 
For 1st Index : For 8, here 4 & 3 both are
small & at a same distance, so we will pick 3, so 2(Index)
For 2nd Index : no tower is smallest, so -1.
For 3rd Index : For 5, here 3 & 3 both are
small & at a same distance, so we will pick 
3(2nd Index) because it smaller Index, so 2(Index)
For 4th Index : no tower is smallest, so -1.
So the final output will be which consistes
Indexes are {2,2,-1,2,-1}.
Your Task:
You don't need to read input or print anything. Your task is to complete the function nearestSmallerTower() which takes an array of heights of the towers as input parameter and returns an array of indexes of the nearest smaller tower. If there is no smaller tower on both sides then return -1 for that tower.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N) 

Constraints:
1 <= N <= 105
1 <= arr[i] <= 105

*/

/*
//{ Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    vector<int> nearestSmallerTower(vector<int> arr)
    {
        int n=arr.size();
        vector<int> ans(n,-1);
        stack<int> s1;
        for(int i=0;i<n;i++){
            while(s1.size()>0 and arr[s1.top()]>=arr[i])
                s1.pop();
            if(s1.size()>0)
                ans[i]=s1.top();
            s1.push(i);
        }
        while(s1.size())
            s1.pop();
        for(int i=n-1;i>=0;i--){
            while(s1.size()>0 and arr[s1.top()]>=arr[i])
                s1.pop();
            if(s1.size()>0){
                if(ans[i]==-1)
                    ans[i]=s1.top();
                else{
                    if((i-ans[i])>(s1.top()-i))
                        ans[i]=s1.top();
                    else if((i-ans[i])==(s1.top()-i)){
                        if(arr[ans[i]]>arr[s1.top()])
                            ans[i]=s1.top();
                    }
                }
            }
            s1.push(i);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        Solution ob;
        vector<int> ans = ob.nearestSmallerTower(v);
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends
*/