/*
Stock buy and sell II
MediumAccuracy: 13.43%Submissions: 87K+Points: 4
Sharpen up your programming skills, participate in coding contests & explore high-paying jobs

The cost of stock on each day is given in an array price[] of size n. Each day you may decide to either buy or sell the stock i at price[i], you can even buy and sell the stock on the same day, Find the maximum profit which you can get.

Note: You can only hold one stock at a time.

Example 1:

Input:
n = 4
a = {3, 4, 1, 5}
Output:
5
Explanation:
We can buy stock on day 1 (at price 3) and sell it on 
day 2 (at price 4) profit will be 4-3=1, 
We can buy another stock on day 3 (at price 1) and sell 
it on day 4 (at price 5) profit will be 5-1=4, 
which will give us maximum profit of 5.

Example 2:

Input:
n = 5
a = {1, 3, 5, 7, 9}
Output:
8
Explanation:
We can buy stock on day 1 (at price 1) and sell it on 
day 5 (at price 9), 
which will give us maximum profit of 8.

Your Task:
Complete stockBuyAndSell() function which takes an array of Prices as input and returns the maximum profit achieved as described in the problem statement.

Expected Time Complexity: O(n)
Expected Auxiliary Space: O(1)

Constraints:
1 <= n <= 105
0 <= price[i] <= 104

*/

/*
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
    int func(int index, int buy, vector<int> &prices, vector<vector<int>> &dp){
        if(index == prices.size()) return 0;
        if(dp[index][buy] != -1) return dp[index][buy];
        if(buy){
            return dp[index][buy] = max(-prices[index]+func(index+1, 0, prices, dp), func(index+1, 1, prices, dp));

        }
        else{
            return dp[index][buy] = max(prices[index]+func(index+1,1,prices, dp), func(index+1, 0, prices, dp));
        }
    }
  public:
    int stockBuyAndSell(int n, vector<int> &prices) {
        vector<vector<int>> dp(n, vector<int>(2, -1));
        return func(0, 1, prices, dp);
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int n;
        scanf("%d",&n);
        
        
        vector<int> prices(n);
        Array::input(prices,n);
        
        Solution obj;
        int res = obj.stockBuyAndSell(n, prices);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends

*/