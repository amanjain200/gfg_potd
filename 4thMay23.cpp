/*
Max Coins
MediumAccuracy: 57.14%Submissions: 10K+Points: 4
Finding A Job Is Now Easier Than Today's Problem! Explore Job Fair 2023 

You are given a 2D integer array ranges whose length is n where ranges[i]=[starti, end,coinsi] means all integers from starti to endi inclusive starti and endi are present and we get coinsi amount of coins when we select this ith range. You can select at most two intervals so as to collect maximum coins but if you select two ranges then those two ranges should not intersect or overlap but can touch each other.

Note: You can select at max 2 ranges and they should not intersect with each other but they can touch themselves.

Example 1:

Input :
n=3
ranges={{1,3,4},{2,3,5},{3,4,2}}
Output: 7
Explanation:
We can see that we can take 2nd and 
3rd ranges as they are not intersecting
(only touching) we get maximum Coins by 
taking these ranges(5+2=7).
Example 2:

Input :
n=5
ranges={{1,3,4},{2,3,5},{3,4,2},{5,8,9},{2,8,10}}
Output: 14
Explanation:
We can see that we can take 2nd and 
4th ranges as they are not intersecting 
we get maximum Coins(5+9=14) by taking 
these ranges.
Your Task:
You don't need to read input or print anything. Your task is to complete the function maxCoins() which takes an integer n(length of ranges), integer 2D integer array ranges, and you have to return the maximum number of coins you got after selecting at most two ranges that are not intersecting.

Expected Time Complexity: O(nlogn)
Expected Space Complexity: O(n)

Constraints:
1<=n<=105
0<=ranges[i][0]<=ranges[i][1]<=109
0<=ranges[i][2](coins)<=106
The sum of n over all test cases won't exceed 106
*/

/*
//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int maxCoins(int n,vector<vector<int>> &ranges){
        sort(ranges.begin(),ranges.end());
        vector<int> mx(n+1);
        int maxi=-1;
        mx[n]=0;
        for(int i=n-1; i>-1; --i) {
            maxi=max(maxi,ranges[i][2]);
            mx[i]=maxi;
        }
        int ans=-1;
        for(int i=0; i<n; ++i) {
            int sec=ranges[i][1];
            int l=i+1,h=n-1;
            while(l<=h) {
                int m=l+(h-l)/2;
                if(ranges[m][0]<sec) {
                    l=m+1;
                }
                else {
                    h=m-1;
                }
            }
            ans=max(ans,ranges[i][2]+mx[l]);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<vector<int>> a(n,vector<int>(3));
        for(int i=0;i<n;i++){
            cin>>a[i][0]>>a[i][1]>>a[i][2];
        }
        Solution ob;
        cout<<ob.maxCoins(n,a)<<endl;
    }
    return 0;
}
// } Driver Code Ends
*/