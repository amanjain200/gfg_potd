/*
ind Maximum Equal sum of Three Stacks
MediumAccuracy: 48.71%Submissions: 16K+Points: 4
Given three stacks S1, S2 & S3 of size N1, N2 & N3 respectively, having only Positive Integers. The task is to find the possible equal maximum sum of the stacks with the removal of top elements allowed. Stacks are represented as an array, and the first index of the array represents the top element of the stack.

Example 1:

Input:
N1 = 3, N2 = 4, N3 = 2
S1 = {4,2,3}
S2 = {1,1,2,3}
S3= {1,4}
Output:
5
Explanation:
We can pop 1 element from the 1st stack, and 2
elements from the 2nd stack. Now remaining elements
yield the equal sum of the three stacks, that is 5.
Example 2:

Input:
N1 =2, N2 = 1, N3 = 3
S1 = {4,7}
S2 = {10}
S3 = {1,2,3}
Output:
0
Explanation:
We will never get an equal sum after popping
some elements, so the answer will be 0.
Your Task:
You don't need to read input or print anything. Your task is to complete the function maxEqualSum() which takes the arrays S1[], S2[], and S3[] and their sizes N1, N2, and N3 as inputs and returns the maximum equal sum we can obtain.

Expected Time Complexity: O(N1+N2+N3)
Expected Auxiliary Space: O(1)

Constraints:
1 <= N1, N2, N3 <= 105
1 <= S1[i], S2[i], S3[i] <= 103
The sum, N1+N2+N3 doesn't exceed 106
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
    int maxEqualSum(int N1,int N2,int N3,vector<int> &S1,vector<int> &S2,vector<int> &S3){
        int ans = 0;
        int sum1=S1[N1-1], sum2=S2[N2-1], sum3=S3[N3-1];
        int i1=N1-2, i2=N2-2, i3=N3-2;
        while(i1>=0 || i2>=0 || i3>=0){
            if(sum1==sum2 && sum2==sum3){
                ans=max(ans, sum1);
                sum1+=S1[i1];
                sum2+=S2[i2];
                sum3+=S3[i3];
                i1--;
                i2--;
                i3--;
            }
            else if(i2>=0 && (sum1>sum2 || sum3>sum2)){
                sum2+=S2[i2];
                i2--;
            }
            else if(i3>=0 && (sum2>sum3 || sum1>sum3)){
                sum3+=S3[i3];
                i3--;
            }
            else if(i1>=0 && (sum2>sum1 || sum3>sum1)){
                sum1+=S1[i1];
                i1--;
            }else{
                break;
            }
            
        }
        
        if(sum1==sum2 && sum2==sum3) ans=max(ans, sum1);
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n1,n2,n3;
        cin>>n1>>n2>>n3;
        vector<int> s1(n1),s2(n2),s3(n3);
        for(int i=0;i<n1;i++){
            cin>>s1[i];
        }
        for(int i=0;i<n2;i++){
            cin>>s2[i];
        }
        for(int i=0;i<n3;i++){
            cin>>s3[i];
        }
        Solution ob;
        int ans=ob.maxEqualSum(n1,n2,n3,s1,s2,s3);
        cout<<ans<<endl;
    }
    
    return 0;
}
// } Driver Code Ends
*/