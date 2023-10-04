/*
Roman Number to Integer
EasyAccuracy: 43.31%Submissions: 149K+Points: 2

Continue solving this problem now on your mobile! Download the GfG App Today
banner

Given a string in roman no format (s)  your task is to convert it to an integer . Various symbols and their values are given below.
I 1
V 5
X 10
L 50
C 100
D 500
M 1000

Example 1:

Input:
s = V
Output: 5

Example 2:

Input:
s = III 
Output: 3

Your Task:
Complete the function romanToDecimal() which takes a string as input parameter and returns the equivalent decimal number. 

Expected Time Complexity: O(|S|), |S| = length of string S.
Expected Auxiliary Space: O(1)

Constraints:
1<=roman no range<=3999

*/
/*
//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    int romanToDecimal(string &str) {
        map<char,int>mpp;
        mpp['I']=1;
        mpp['V']=5;mpp['X']=10;mpp['L']=50;mpp['C']=100;mpp['D']=500;mpp['M']=1000;
       int n=str.size();
        int sum=mpp[str[n-1]];
        for(int i=n-2;i>=0;i--){
            
            if(mpp[str[i+1]]<=mpp[str[i]])
            sum=sum+mpp[str[i]];
            else{
                sum=sum-mpp[str[i]];
            }
        }
        return sum;
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
        cout << ob.romanToDecimal(s) << endl;
    }
}
// } Driver Code Ends

*/