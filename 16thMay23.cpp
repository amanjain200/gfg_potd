/*
Cutting Binary String
MediumAccuracy: 49.71%Submissions: 18K+Points: 4
Applying for Jobs, Now Easier Than Today's Problem! Explore Now

Given a string s containing 0's and 1's. You have to return the smallest positive integer C, such that the binary string can be cut into C pieces and each piece should be of the power of 5  with no leading zeros.
Note: The string s is a binary string. And if no such cuts are possible, then return -1.

Example 1:

Input:
s = "101101101"
Output: 
3
Explanation: 
We can split the given string into 
three 101s, where 101 is the binary 
representation of 5.
Example 2:

Input:
s = "00000"
Output: 
-1
Explanation: 
0 is not a power of 5.
Your Task:
Your task is to complete the function cuts() which take a single argument(string s). You need not take any input or print anything. Return an int C if the cut is possible else return -1.

Expected Time Complexity: O(|s|*|s|*|s|).
Expected Auxiliary Space: O(|s|).

Constraints:
1<= |s| <=50
*/

/*
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    int is_power_of_5(string s){
        int n=s.length(), number=0;
        if(!n) return 0;
        
        if(s[0]=='0' || s[n-1]=='0') return 0;
        if(n==1 && s[0]=='1') return 1;
        
        
        for(int i=0;i<n;i++){
            number+=pow(2, i)*(s[n-1-i]-'0');
        }
        
        while(number%5==0) number/=5;
        if(number==1) return 1; else return 0;
    }
    public:
    int cuts(string s){
         for(int i=0;i<s.length();i++){
            if(is_power_of_5(s.substr(i, s.length()-i))) {
                //check for the remaining string
                if(i==0) return 1;
                int left=cuts(s.substr(0, i));
                if(left!=-1) return (1+left);
            }
        }
        return -1;
        
    }
};

//{ Driver Code Starts.
int main()
{
   int t;
   cin>>t;
   string s;
   while(t--)
   {
    cin>>s;
    Solution obj;
    int res=obj.cuts(s);
    cout<<res<<endl;

   }


    return 0;
}

// } Driver Code Ends
*/