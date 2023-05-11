/*
Palindrome with minimum sum
MediumAccuracy: 60.42%Submissions: 12K+Points: 4
Finding a high paying job is easier than today's problem! Attend Job Fair 2023
 

Given a string, S.The string can contain small case English letters or '?'. You can replace '?' with any small English letter. Now if it is possible to make the string S a palindrome after replacing all '?' then find the palindromic string with a minimum ascii sum of the absolute difference of adjacent characters. Otherwise, return -1.

Example 1:

Input: S = a???c??c????
Output: 4
Explanation:
We can see that we can make the string
palindrome. Now to get minimum ascii sum we should
replace all the '?' between 'a' and 'c' with
'b' and all the '?' between two 'c' with 'c'.
So after replacing all the '?' the string: 
abbbccccbbba.
The sum of differences of adjacent characters is 4.   
Example 2:

Input: S = a???c??c???c
Output: -1
Explanation:
It is not possible to make the string palindrome.
Your Task:
You don't need to read input or print anything. Your task is to complete the function minimumSum() which takes a string S input parameter and returns an integer denoting the sum of differences of adjacent characters. If it is not possible to make string palindrome, return -1. 

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

Constraints:
1 <= |S| <= 105
*/

/*
//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minimumSum(string s) {
        int count =0;
        int n= s.length();
        for(int i=0;i<(n+1)/2;i++){
            if(s[i]!=s[n-1-i]){
                if(s[i]=='?' || s[n-1-i]=='?'){
                   if(s[i]=='?') s[i] = s[n-1-i];
                   else if(s[n-1-i] == '?') s[n-1-i] = s[i];
                }
                else return -1;
            }
        }
       
       int k = 0;
       int l=(k+1);
        while(l<(n+1)/2){
         if(s[k]=='?' || s[l]=='?') {
             if(s[k]=='?') k++;
             else if(s[l]=='?') l++;
         }
         else{
             count+=2*(abs(s[k]-s[l]));
             k=l;
             l++;
         }
         
       }
     
     return count;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        Solution ob;
        int ans = ob.minimumSum(s);
        cout << ans;
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends
*/