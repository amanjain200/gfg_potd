/*
Remainder on dividing by 11
EasyAccuracy: 39.33%Submissions: 94+Points: 2
Attend free LIVE Webinars with Summer Skill-Up Sessions! Enroll Now!  

Given a big positive number x represented as string, find value of x % 11 or x mod 11. Output is expected as an integer.

Example 1:

Input: x = 1345
Output: 3
Explanation: 1345 % 11 = 3 
Example 1:

Input: x = 231456786543567898765
Output: 1
Explanation: 231456786543567898765 % 11 = 1

Your Task:  
You don't need to read input or print anything. Your task is to complete the function xmod11() which takes string x as the input parameter and returns the integer value of x%11.

Expected Time Complexity: O(length of string x)
Expected Space Complexity: O(1)

Constraints:
1 ≤ length of string x ≤ 100000

*/

#include<iostream>
using namespace std;

//{ Driver Code Starts
//Initial Template for C++


// } Driver Code Ends
//User function Template for C++


class Solution
{
public:
    int xmod11(string x)
    {
       int ans = 0;
       for(int i=0; i<x.size(); i++){
           ans = (ans*10 + (int)x[i]-'0')%11;
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
        string x;
        cin>>x;
        Solution ob;
        int ans = ob.xmod11(x);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends