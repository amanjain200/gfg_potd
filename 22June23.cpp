/*

class Solution {
public:
    int solve(int i,int &n,vector<int> &v,int &k,vector<vector<int>> &dp,int x){
        if(i>=n)return 0;
        if(dp[i][x]!=-1)return dp[i][x];
        int ans1 = solve(i+1,n,v,k,dp,x);
        int ans2 = 0;
        if(x){
            ans2 = -v[i]-k+solve(i+1,n,v,k,dp,0);
        }else{
            ans2 =  v[i]+solve(i+1,n,v,k,dp,1);
        }
        return dp[i][x] = max(ans1,ans2);
    }
    int maxProfit(vector<int>& v, int fee) {
        int n = v.size();
        vector<vector<int>> dp(n,vector<int>(2,-1));
        return solve(0,n,v,fee,dp,1);
    }
};
*/

/*

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool lemonadeChange(int N, vector<int> &bills) {
        int count5 = 0;
        int count10 = 0;
        for(int i=0; i<N; i++){
            if(bills[i] == 5) count5++;
            else if(bills[i] == 10 && count5>0){
                count5--; count10++;
            } 
            else if(bills[i]==20 && (count5>0 && count10>0)){
                count5--;
                count10--;
            }
            else if(bills[i] == 20 && count5>2 ){
                count5-=3;
            } 
            else return false;
        }
        return true;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> bills(N);
        for (int i = 0; i < N; i++) cin >> bills[i];

        Solution obj;
        int ans = obj.lemonadeChange(N, bills);
        if (ans)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}
// } Driver Code Ends
*/