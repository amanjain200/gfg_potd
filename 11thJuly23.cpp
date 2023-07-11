/*
Find kth element of spiral matrix
MediumAccuracy: 50.66%Submissions: 28K+Points: 4
POTD July Placement Special : All POTD in the month of July are based on popular interview questions. Solve every day to ace the upcoming Placement Season !

Given a matrix with n rows and m columns. Your task is to find the kth element which is obtained while traversing the matrix spirally. You need to complete the method findK which takes four arguments the first argument is the matrix A and the next two arguments will be n and m denoting the size of the matrix A and then the forth argument is an integer k. The function will return the kth element obtained while traversing the matrix spirally.

Example 1:

Input:
n = 4, m = 4, k = 10
A[][] = {{1  2  3  4},
         {5  6  7  8},
         {9  10 11 12},
         {13 14 15 16}}
Output:
13
Explanation:

The spiral order of matrix will look like 1->2->3->4->8->12->16->15->14->13->9->5->6->7->11->10. So the 10th element in this order is 13. 

Example 2:

Input:
n = 3, m = 3, k = 4
A[][] = {{1 2 3},
         {4 5 6},
         {7 8 9}}
Output:
6
Explanation:
The spiral order of matrix will look like 1->2->3->6->9->8->7->4->5. So the 4th element in this order is 6.

Your Task:
You only need to implement the given function findK(). Do not read input, instead use the arguments given in the function. Return the K'th element obtained by traversing matrix spirally.

Expected Time Complexity: O(n*m)
Expected Auxiliary Space: O(n*m)

Constraints:
1<=n,m<=103
1<=k<=n*m
*/
/*
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

// } Driver Code Ends
class Solution
{
    public:
    /*You are required to complete this method
    int findK(int a[MAX][MAX],int n,int m,int k)
    {
 		int counter=n*m;
         vector<int> v;
         int lrow=0;
         int hrow=n-1;
         int lcol=0;
         int hcol=m-1;
         
         while(counter!=0)
         {
             for(int i=lrow;i<=hcol && counter!=0;i++)
             {
                 v.push_back(a[lrow][i]);
                 counter--;
             }
             lrow++;
             
             for(int i=lrow;i<=hrow && counter!=0;i++)
             {
                 v.push_back(a[i][hcol]);
                 counter--;
             }
             hcol--;
             
             for(int i=hcol;i>=lcol && counter!=0;i--)
             {
                 v.push_back(a[hrow][i]);
                 counter--;
             }
             hrow--;
             
             for(int i=hrow;i>=lrow && counter!=0;i--)
             {
                 v.push_back(a[i][lcol]);
                 counter--;
             }
             lcol++;
         }
         
         return v[k-1];
 		
    }
};





//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        int a[MAX][MAX];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        Solution ob;
        cout<<ob.findK(a,n,m,k)<<endl;
        
       
    }
}
// } Driver Code Ends

*/