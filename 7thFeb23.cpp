/*
Length of the longest subarray with positive product
MediumAccuracy: 50.69%Submissions: 11K+Points: 4
Lamp
You can earn more Geekbits by participating in GFG Weekly Coding Contest  

Given an array arr[] consisting of n integers, find the length of the longest subarray with positive (non zero) product.

 

Example 1:

Input:
arr[] ={0, 1, -2, -3, -4} 
Output:
3
Explanation: 
The longest subarray with positive product is: 
{1, -2, -3}.Therefore, the required length is 3.
 

Example 2:

Input:
arr[]={-1, -2, 0, 1, 2}
Output:
2
Explanation:
The longest subarray with positive products 
are: {-1, -2}, {1, 2}. Therefore, the required 
length is 2.
 

Your Task: This is a function problem. You don't need to take any input, as it is already accomplished by the driver code. You just need to complete the function maxLength() that takes array arr[], and an integer n as parameters and return the length of the longest subarray where the product of all of its element is positive. 

 

Expected Time Complexity: O(n).
Expected Auxiliary Space: O(1).

 

Constraints:
 1<=n<=105
-109<=arr[i]<=109
*/


//User function Template for C++

#include<iostream>
#include<vector>
using namespace std;



class Solution {
    public:
        // Function to return the length of the
        //longest subarray with ppositive product
        int maxLength(vector<int> &arr,int n){
           //code here
           int i=0,j=0;
           int ans=0;
           int mx=n;
           int p=1;
           while(j<n)
           {
               p*=arr[j];
               if(p==0)
               {
                   mx=n;
                   i=j+1;
                   p=1;
               }
               else if(p<0)
               {
                   mx=min(mx,j);
                   ans=max(ans,j-mx);
                   p=-1;
               }
               else if(p>0)
               {
                  ans=max(ans,j-i+1);
                  p=1;
               }
               j++;
           }
           return ans;
        }
};

