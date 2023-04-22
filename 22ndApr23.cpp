/*
Smaller Sum
MediumAccuracy: 74.24%Submissions: 700+Points: 4
Lamp
You can earn more Geekbits by participating in GFG Weekly Coding Contest  

You are given an array arr of n integers. For each index i, you have to find the sum of all integers present in the array with a value less than arr[i].

Example 1:

Input:
n = 3
arr = {1, 2, 3}
Output:
0 1 3
Explanation:
For 1, there are no elements lesser than itself.
For 2, only 1 is lesser than 2.
And for 3, 1 and 2 are lesser than 3, so the sum is 3.
Example 2:

Input:
n = 2
arr = {4, 4}
Output:
0 0
Explanation:
For 4, there are no elements lesser than itself. 
For 4, there are no elements lesser than itself.
There are no smaller elements than 4.
Your Task:
You don't need to read input or print anything. Your task is to complete the function smallerSum() which takes an integer n and an array arr and returns an array of length n , the answer for every index.

Expected Time Complexity:O(n)
Expected Space Complexity:O(n)

Constraints:
1 <= n <= 105
1 <= arr[i] <= 109
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
    vector<long long> smallerSum(int n,vector<int> &arr){
        vector<long long> ans(n,0);
        map<int,long long> mp;
        
        for(int i=0;i<n;++i)
        {
            mp[arr[i]]++;
        }
        
        long long prev=0;
        for(auto &it:mp)
        {
            int frequency=it.second;
            it.second=prev;
            prev=prev + (frequency * it.first);
        }
        
        for(int i=0;i<n;++i)
        {
            ans[i]=mp[arr[i]];
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
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob; 
        vector<long long> ans=ob.smallerSum(n,arr);
        for(int i=0;i<n;i++){
            if(i!=n-1){
                cout<<ans[i]<<" ";
            }
            else{
                cout<<ans[i]<<endl;
            }
        }
    }
    return 0;
}
// } Driver Code Ends
*/