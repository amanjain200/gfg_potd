/*
Multiply two strings
MediumAccuracy: 20.06%Submissions: 146K+Points: 4
Win from a prize pool of INR 15K and get exciting merch! Register your team for Hack-A-Thon today!

Given two numbers as strings s1 and s2. Calculate their Product.

Note: The numbers can be negative and You are not allowed to use any built-in function or convert the strings to integers. There can be zeros in the begining of the numbers.

Example 1:

Input:
s1 = "0033"
s2 = "2"
Output:
66

Example 2:

Input:
s1 = "11"
s2 = "23"
Output:
253

Your Task: You don't need to read input or print anything. Your task is to complete the function multiplyStrings() which takes two strings s1 and s2 as input and returns their product as a string.

Expected Time Complexity: O(n1* n2)
Expected Auxiliary Space: O(n1 + n2); where n1 and n2 are sizes of strings s1 and s2 respectively.

Constraints:
1 ≤ length of s1 and s2 ≤ 103
*/
/*
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
class Solution{
  public:
    You are required to complete below function 
    string multiplyStrings(string S1, string S2) {
        reverse(S1.begin(),S1.end());
       reverse(S2.begin(),S2.end());
       int sign=1;
       if(S1.back()=='-'){sign*=-1;S1.pop_back();}
       if(S2.back()=='-'){sign*=-1;S2.pop_back();}
       while(S1.back()=='0' && S1.size()>1)S1.pop_back();
       while(S2.back()=='0' && S2.size()>1)S2.pop_back();
       string ans="";
       int carry,l,r,prod;
       for(int i=0;i<S2.length();i++){
           string p(i,'0');
           carry=0;l=S2[i]-'0';
           for(auto it:S1){
               r=it-'0';
               prod=l*r+carry;
               carry=prod/10;
               p+=char(prod%10 + 48);
           }
           while(carry)p+=(carry%10 + 48),carry/=10;
           for(int j=0;j<p.length();j++){
               if(j==ans.length()){
                   ans += '0';
               }
               r=p[j]-'0'+carry+ans[j]-'0';
               ans[j]=char(r%10 + 48);
               carry=r/10;
           }
           while(carry)ans+=(carry%10 + 48),carry/=10;
       }
       if(sign==-1)ans+='-';
       reverse(ans.begin(),ans.end());
       return ans;
    }

};

//{ Driver Code Starts.
 
int main() {
     
    int t;
    cin>>t;
    while(t--)
    {
    	string a;
    	string b;
    	cin>>a>>b;
    	Solution obj;
    	cout<<obj.multiplyStrings(a,b)<<endl;
    }
     
}
// } Driver Code Ends
*/