/*
Count the Substring
HardAccuracy: 28.57%Submissions: 14+Points: 8


Given a binary string S consists only of 0s and 1s. The task is to calculate the number of substrings that have more 1s than 0s.

Example 1:

Input:
S = "011"
Output: 4
Explanation: There are 4 substring which 
has more 1s than 0s. i.e "011","1","11" and "1"
Example 2:

Input:
S = "0000"
Output: 0
Explanation: There is no substring
which has more 1s than 0s
Your Task:  
You dont need to read input or print anything. Complete the function countSubstring() which takes the string S as input parameter and returns the number of substring which has more 1s than 0s.

Expected Time Complexity: O(|S|)
Expected Auxiliary Space: O(|S|)

Constraints:
1 < |S| < 105
|S| denotes the length of the string S


*/
#include<iostream>
#include<vector>
#include<string>
using namespace std;

//User function Template for C++
class Solution{
public:
  long long countSubstring(string S){
    int cnt=0;
    
    long long int answer=0;
    
    int n=S.size();
    
    vector<long long int> f(2*n+2,0);
    
    vector<long long int> dp(2*n+2,0);
    
    f[n]++;
    
    for(char c:S)
    {
        if(c=='0')
        cnt--;
        else
        cnt++;
        
        if(cnt-1+n>=0)
        dp[cnt+n]=dp[cnt-1+n]+f[cnt-1+n];
        
        answer+=dp[cnt+n];
        
        f[cnt+n]++;
    }
    
    return answer;
  }
};




