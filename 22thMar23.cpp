/*
String rp or pr
MediumAccuracy: 57.77%Submissions: 5K+Points: 4
Win Prize worth ₹6000 with Ease. Register for the Easiest Coding Challenge!  

Given a string S. In one operation, you can remove the substring "pr" from the string S and get amount X or you can remove the substring "rp" and get the amount Y. 
Find the maximum amount you can get if you perform zero or more such operations optimally. 

Note : 

Substring of a string S is defined as a continuous sequence of characters in S.
After removing pr or rp, the order of remaining letters should remain the same.

Example 1:

Input:
X = 5, Y = 4
S = "abppprrr"
Output: 15
Explanation: 
Here, S = "abppprrr" 
X= 5, Y=4.
Remove "pr", new string S = "abpprr".
Remove "pr", new string S = "abpr".
Remove "pr", new string S = "ab".
In total, we removed "pr" 3 times, 
so total score is 3*X + 0*Y = 3*5 =15.
 

 

Example 2:

Input:
X = 7, Y = 7
S = "prpptppr"
Output: 14
Explanation: 
Here, S = "prpptppr" 
X= 7, Y=7.
As both have the same amount we can first 
remove either pr or rp. Here we start with pr
Remove "pr", new string S = "pptppr".
Remove "pr", new string S = "pptp".
In total, we removed "pr" 2 times, 
so total score is 2*X + 0*Y = 2*7 =14.

Your Task: 
You don't need to read input or print anything. Your task is to complete the function solve() which takes the X ,Y and string S as input parameters and returns the maximum amount you can get after performing the above operations.


Expected Time Complexity: O(|S|)
Expected Auxiliary Space: O(|S|)


Constraints:
1 ≤ |S| ≤ 105
1 ≤ X,Y ≤ 105
S contains lowercase English letters only.
*/

#include<iostream>
#include<vector>
#include<stack>
using namespace std;

//User function Template for C++
class Solution{   
public:
    long long solve(int X,int Y,string S){
       long long ans=0;
      if(X>Y)
      {
          long long p=0,r=0;
          for(int i=0;i<S.length();i++)
          {
              if(S[i]=='p')
              {
                  p++;
              }
              else if(S[i]=='r')
              {
                  if(p!=0)
                 { ans+=X;
                  p--;}
                  else
                  r++;
              }
              else
              {
                  long long a;
                  if(p<r)
                  a=p;
                  else
                  a=r;
                  ans+=a*(Y);
                  p=0;r=0;
                  
              }
          }
          long long a;
                  if(p<r)
                  a=p;
                  else
                  a=r;
                  ans+=a*(Y);
      }
      else
      {
          long long p=0,r=0;
          for(int i=0;i<S.length();i++)
          {
              if(S[i]=='r')
              {
                  r++;
              }
              else if(S[i]=='p')
              {
                  if(r!=0)
                 { ans+=Y;
                  r--;}
                  else
                  p++;
              }
              else
              {
                  long long a;
                  if(p<r)
                  a=p;
                  else
                  a=r;
                  ans+=a*(X);
                  p=0;r=0;
                  
              }
          }
          long long a;
                  if(p<r)
                  a=p;
                  else
                  a=r;
                  ans+=a*(X);
      }
      return ans;
    }
};