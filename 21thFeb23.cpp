/*
Count Cyclic Paths
MediumAccuracy: 63.26%Submissions: 8K+Points: 4
Lamp
You can earn more Geekbits by participating in GFG Weekly Coding Contest  

Given a triangular pyramid with its vertices marked as O, A, B and C and a number N, the task is to find the number of ways such that a person starting from the origin O initially, reaches back to the origin in N steps. In a single step, a person can go to any of its adjacent vertices.

Lightbox


Example 1:

Input:
N = 1
Output: 0
Explanation: The minimum length of
a cyclic path is 2.
Example 2:

Input:
N = 2
Output: 3
Explanation: The three paths are :
O-A-O, O-B-O, O-C-O

Your Task:  
You don't need to read input or print anything. Your task is to complete the function countPaths() which takes an integer N as input parameter and returns the number of possible paths. Since the answer may be big, return it modulo (10^9+7). 


Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)


Constraints:
1 ≤ N ≤ 106

*/

#include<iostream>
using namespace std;
//User function Template for C++

class Solution{   
public:
    int countPaths(int N){
         int MOD=1e9+7;
        if(N==1)return 0;
        long int p1=0;
        long int p2=3;
        if(N==2)return p2;
        long int ans;
        for(int i=3;i<=N;i++)
        {
            ans=((p2*2)%MOD+(p1*3)%MOD)%MOD;
            p1=p2;
            p2=ans;
        }
        return ans%MOD; 
    }
};
