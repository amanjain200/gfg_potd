/*
Scrambled String
HardAccuracy: 76.54%Submissions: 3K+Points: 8

Given two strings S1 and S2 of equal length, the task is to determine if S2 is a scrambled form of S1.

Scrambled string: Given string str, we can represent it as a binary tree by partitioning it into two non-empty substrings recursively.
Below is one possible representation of str = coder:
 
To scramble the string, we may choose any non-leaf node and swap its two children. 
Suppose, we choose the node co and swap its two children, it produces a scrambled string ocder.
Similarly, if we continue to swap the children of nodes der and er, it produces a scrambled string ocred.

Note: Scrambled string is not the same as an Anagram.

Print "Yes" if S2 is a scrambled form of S1 otherwise print "No".

Example 1:

Input: S1="coder", S2="ocder"
Output: Yes
Explanation: ocder is a scrambled 
form of coder.

    ocder
   /    \
  oc    der
 / \    
o   c  

As "ocder" can represent it 
as a binary tree by partitioning 
it into two non-empty substrings.
We just have to swap 'o' and 'c' 
to get "coder".
Example 2:

Input: S1="abcde", S2="caebd" 
Output: No
Explanation: caebd is not a 
scrambled form of abcde.
Your Task:
You don't need to read input or print anything. You only need to complete the function isScramble() which takes two strings S1 and S2 as input and returns a boolean value.

Expected Time Complexity: O(N2)
Expected Auxiliary Space: O(N2)

Constrains: 

S1.length = S2.length
S1.length<=31
S1 and S2 consist of lower-case English letters.

*/

#include<iostream>
#include<unordered_map>
using namespace std;


//User function Template for C++

//Back-end complete function Template for C++

class Solution{
    public:
     unordered_map<string,bool> ump;
     bool solve(string s1,string s2)
    {
        if(s1.size()==1)
            return s1==s2;
        if(s1==s2)
            return true;
        string key = s1+s2;
        if(ump.find(key) != ump.end())
        return ump[key];
        int n=s1.size();
        bool res = false;
        for(int i=1;i<n;++i)
        {
            if((solve(s1.substr(0,i),s2.substr(0,i)) && solve(s1.substr(i),s2.substr(i)))
               ||(solve(s1.substr(0,i),s2.substr(n-i)) && solve(s1.substr(i),s2.substr(0,n-i))))
                return ump[key]=true;
        }
        return ump[key]=false;
    }
    bool isScramble(string S1, string S2){
        return solve(S1, S2);
    }    
};
