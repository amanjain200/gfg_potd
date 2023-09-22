/*
First and last occurrences of x
MediumAccuracy: 37.36%Submissions: 231K+Points: 4
Learn Google Cloud with Curated Lab Assignments. Register, Earn Rewards, Get noticed by experts at Google & Land your Dream Job! 

Given a sorted array arr containing n elements with possibly duplicate is to find indexes of first elements, the task is to find the first and last occurrences of an element x in the given array.
Note: If the number x is not found in the array then return both the indices as -1.

Example 1:

Input:
n=9, x=5
arr[] = { 1, 3, 5, 5, 5, 5, 67, 123, 125 }
Output:  
2 5
Explanation: 
First occurrence of 5 is at index 2 and last occurrence of 5 is at index 5. 

Example 2:

Input:
n=9, x=7
arr[] = { 1, 3, 5, 5, 5, 5, 7, 123, 125 }
Output:  
6 6
Explanation: 
First and last occurrence of 7 is at index 6.

Your Task:
Since, this is a function problem. You don't need to take any input, as it is already accomplished by the driver code. You just need to complete the function find() that takes array arr, integer n and integer x as parameters and returns the required answer.

Expected Time Complexity: O(logN)
Expected Auxiliary Space: O(1).

Constraints:
1 ≤ N ≤ 106
1 ≤ arr[i],x ≤ 109
*/
/*
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    vector<int> find(int arr[], int n , int x )
    {
        
    int s=0;
    int e=n-1;
    int mid = s+(e-s)/2;
    int index1=-1;
    int index2=-1;
    vector<int>ans;
    ans.push_back(-1);
    ans.push_back(-1);
    
    while(s<=e){
    if(arr[mid]<x){
        s=mid+1;
    }
    else if(arr[mid]>x){
        e=mid-1;
    }
    else if(arr[mid]==x){
        index1 = mid;
        index2 = mid;
        
    while(arr[index1]==x){
        index1 --;
    }
    while(arr[index2]==x){
        index2 ++;
    }
    ans[0]=(index1 + 1);
    ans[1]=(index2 - 1);
    break;
        
    }
    mid = s + (e-s)/2;
    }
    
    return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends

*/