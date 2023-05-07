/*
String Mirror
EasyAccuracy: 51.38%Submissions: 12K+Points: 2
Finding A Job Is Now Easier Than Today's Problem! Explore Job Fair 2023 

You are given a string str of length n. You want to choose a non-zero integer k (k<=n), such that you can perform the following operation:
Take the prefix of the string of length k and append the reverse of it to itself.
Your task is to find the lexicographically smallest string you can get.

Example 1:

Input:
str = "bvdfndkn"
Output:
bb
Explanation:
"bb" is the lexicographically smallest string you can get. If you choose k>1 the order of the resulting string will increase.

Example 2:

Input:
str = "casd"
Output:
caac
Explanation:
"caac" is the lexicographically smallest string you can get.
Your Task:
You don't need to read input or print anything. Your task is to complete the function stringMirror() which takes a String str as input, and returns the lexicographically smallest string.

Expected Time Complexity: O(|str|)
Expected Space Complexity: O(|str|)

Constraints:
1 <= |str| <= 105

*/


/*

//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    string stringMirror(string str){
        string res;
    res += str[0];
    
    for(int i=1;i<str.length();i++){
        if(str[i] < str[i-1] || (i != 1 && str[i] == str[i-1]))res += str[i];
        else break;
    }
    
    string rev = res;
    reverse(rev.begin(),rev.end());
    
    return res + rev;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        Solution ob;
        string res=ob.stringMirror(str);
        cout<<res<<endl;
    }
}
// } Driver Code Ends
*/