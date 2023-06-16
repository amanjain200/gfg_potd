/*
Min Time
MediumAccuracy: 56.75%Submissions: 12K+Points: 4

Given an array locations[] of size n where locations[i] represents the location of the ith fruit on the x-axis and also given an array types[]  where types[i] is an integer which represents the type of the ith fruit. You are initially at coordinate 0 and you have to collect all the fruits and then return back to coordinate 0 again. To move 1 unit on the x-axis requires 1 second of time. The only condition is that you have to collect the fruits in a non-decreasing order of their types[i] (for example if ith fruit has type[i]=1 and jth fruit has type[j]=2 then ith fruit has to be picked before jth fruit). Find minimum time to collect all fruits in the non-decreasing order of their types and return back to coordinate 0.

Note: You can assume it takes no time to pick up fruit and the location of a fruit can be negative also.

Example 1:

Input:
n=4
locations={1,3,5,7}
types={1,2,3,1}
Output:
18
Explanation:
You start at x=0 and move to x=7 and 
in the way pick fruits of type 1 at x=1 
and x=7 and it took total 7 seconds to 
move from 0->7 now you move to x=3 
in 4 seconds and than to x=5 in 2 seconds 
and than return back to x=0 in 5 seconds.
So overall it took 18 seconds(7+4+2+5).

Example 2:

Input:
n=4
locations={-4,-3,1,-8}
types={4,2,4,5}
Output:
24
Explanation:
The optimal way is to way go to x=-3 
in starting than 1 and follow path 
like this  (1)->(-4)->(-8)->(0) and 
total time it takes is 24 .

Your Task:
You don't need to read input or print anything. Your task is to complete the function minTime() which takes an integer n, integer array locations and types and you have to return minimum time to collect all fruits.

Expected Time Complexity: O(n)
Expected Space Complexity: O(n)

Constraints:
1<=n<=105
-109<=locations[i]<=109
1<=types[i]<=105

*/

/*
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  private:
    #define ll long long
    unordered_map<ll, pair<ll, ll>> mp;
    vector<int> typs;
    ll dp[100004][3];
public:
    ll solve(int i, int j) {
        ll pos = 0;
        
        if(j == 0)
            pos = mp[typs[i - 1]].first; 
        else if(j == 1)
            pos = mp[typs[i - 1]].second; 
            
        if(i == typs.size())
            return abs(pos);
            
        if(dp[i][j] != -1)
            return dp[i][j];
        
        ll ans = 1e18, dist = abs(mp[typs[i]].second - mp[typs[i]].first);
        
        ans = min(ans, dist + abs(mp[typs[i]].first - pos) + solve(i + 1, 1));
        ans = min(ans, dist + abs(mp[typs[i]].second - pos) + solve(i + 1, 0));
        
        return dp[i][j] = ans;
    } 

    ll minTime(int n, vector<int> &locations, vector<int> &types) {
        for(int i = 0; i < n; i++) {
            int loc = locations[i], ty = types[i];

            if(mp.count(ty)) {
                int s = mp[ty].first, e = mp[ty].second;
                s = min(s, loc), e = max(e, loc);
                mp[ty] = {s, e};
            } else
                mp[ty] = {loc, loc};
        }
        
        for(auto i: mp) typs.push_back(i.first);
        sort(typs.begin(), typs.end());
        
        memset(dp, -1, sizeof(dp));
        return solve(0, 2); 
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        
        
        vector<int> locations(n);
        for(int i=0;i<n;i++){
            cin>>locations[i];
        }
        
        
        vector<int> types(n);
        for(int i=0;i<n;i++){
            cin>>types[i];
        }
        
        Solution obj;
        long long res = obj.minTime(n, locations, types);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends

*/