/*
Binary Modulo
EasyAccuracy: 59.5%Submissions: 8K+Points: 2
Finding A Job Is Now Easier Than Today's Problem! Explore Job Fair 2023 

You are given a binary string s and an integer m. You need to return an integer r. Where r = k%m, k is the binary equivalent of string s.

Example 1:

Input:
s = "101" 
m = 2
Output:
1
Explanation: Here k=5 because (101)2 = (5)10.
Hence 5 mod 2 = 1.
Example 2:

Input:
s = "1000"
m = 4
Output:
0
Explanation: Here k=8 and m=4 hence 
r = k mod m = 8 mod 4 = 0.
Your Task:
You don't need to read input or print anything. Your task is to complete the function modulo() which takes the string s and integer m as input parameters and returns the value of r as described above.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)

Constraints:
1 <= len(s) <= 105
1 <= m <= 100
*/

/*
//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
        int modulo(string s,int m)
        {
            //double m1=m;
            int power = 1;
            int k=0;
            int n=s.size();
            for(int i=n-1; i>=0; i--){
                //power*=2;
                if(s[i]=='1'){
                    k+=power;
                }
                power*=2;
                k%=m;
                power%=m;
            }
            return k%m;
        }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int m;
        cin>>s>>m;
        Solution a;
        cout<<a.modulo(s,m)<<endl;
    }
    return 0;
}
// } Driver Code Ends
*/