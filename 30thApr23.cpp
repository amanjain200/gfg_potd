/*
Powerfull Integer
EasyAccuracy: 55.99%Submissions: 4K+Points: 2
Win Vouchers, 2X Geekbits & much more! Register for GFG Weekly #100 Now!
Click here to Enter 

Your are given an 2D integer array  intervals whose length is n where intervals[i]=[start,end] means all integers from start to  end inclusive start and end are also present and also we are given an integer k . We have to return the Powerfull Integer.Powerfull Integer is that integer that occurs at least k times and if multiple integers  have at least k  occurences we have to return the maximum integer out of all those elements . 

Note: If no integer occurs at least k times return -1 in that case .

Example 1:

Input :
n=3
intervals={{1,3},{4,6},{3,4}}
k=2
Output: 4
Explanation:
As we can see that 3 and 4 are the 2 integers 
that have 2 occurences(2>=k) so we have 4 
in this case as the Powerfull integer as it 
is the maximum element which satisfies the condition.
Example 2:

Input :
n=4
intervals={{1,4},{12,45},{3,8},{10,12}}
k=3
Output: -1
Explanation:
As we can see that no integer occurs 
3 times so in that case we have to 
return -1 (see Note).

Your Task:
You don't need to read input or print anything. Your task is to complete the function powerfullInteger() which takes an integer n, a 2d array intervals  and an integer k respectively and you have to return powerfull Integer if it exists else return -1.

Expected Time Complexity: O(NlogN)
Expected Space Complexity: O(N)

Constraints:
1<=n<=105
1<=intervals[i][0]<=intervals[i][1]<=109
1<=k<=105
The sum of n over all test cases won't exceed 106

*/

/*
//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int powerfullInteger(int n,vector<vector<int>> &in,int k){
        map<int, int> mp;
        for(int i=0; i<n; i++){
            mp[in[i][0]]++;
            if(mp.find(in[i][1])== mp.end()) mp[in[i][1]]=0;
            mp[in[i][1]+1]--;
        }
        int ans=-1, cnt=0;
        for(auto i: mp){
            cnt+= i.second;
            if(cnt>= k) ans= i.first;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n;
        vector<vector<int>> intervals(n,vector<int>(2));
        for(int i=0;i<n;i++){
            cin>>intervals[i][0]>>intervals[i][1];
        }
        cin>>k;
        Solution ob;
        cout<<ob.powerfullInteger(n,intervals,k)<<endl;
    }
    return 0;
}
// } Driver Code Ends

*/