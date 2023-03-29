/*
Count the Substrings
EasyAccuracy: 84.68%Submissions: 3K+Points: 2
Attend free LIVE Webinars with Summer Skill-Up Sessions! Enroll Now!  

Given a string S. The task is to count the number of substrings which contains equal number of lowercase and uppercase letters. 

Example 1:

Input:
S = "gEEk"
Output: 3
Explanation: There are 3 substrings of
the given string which satisfy the
condition. They are "gE", "gEEk" and "Ek".
Example 2:

Input:
S = "WomensDAY"
Output: 4
Explanation: There are 4 substrings of 
the given string which satisfy the
condition. They are "Wo", "ensDAY", 
"nsDA" and "sD"
Your Task:
The task is to complete the function countSubstring() which takes the string S as input parameter and returns the number of substrings which contains equal number of uppercase and lowercase letters.

Expected Time Complexity: O(N*N)
Expected Auxiliary Space: O(1)

Constraints:
1 ≤ |S| ≤ 103
*/

#include<iostream>
#include<string>
using namespace std;

//{ Driver Code Starts
//Initial Template for C++

// } Driver Code Ends
//User function Template for C++
class Solution
{
    public:
    int countSubstring(string S)
    {
        int count = 0;
        for(int i=0; i<S.size()-1; i++){
            int balance = 0;
            (S[i]<='Z'&&S[i]>='A') ? balance++ : balance--;
            for(int j=i+1; j<S.size(); j++){
                (S[j]<='Z'&&S[j]>='A') ? balance++ : balance--;
                
                if(balance==0) count++;
            }
        }
        return count;
    }
};

//{ Driver Code Starts.
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        Solution obj;
        cout<<obj.countSubstring(S)<<endl;
    }
}  
// } Driver Code Ends