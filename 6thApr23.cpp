/*
Equal Left and Right Subarray Sum
EasyAccuracy: 53.57%Submissions: 140+Points: 2
Attend free LIVE Webinars with Summer Skill-Up Sessions! Enroll Now!  

Given an array A of n positive numbers. The task is to find the first index in the array such that the sum of elements before it is equal to the sum of elements after it.

Note:  Array is 1-based indexed.

Example 1:

Input: 
n = 5 
A[] = {1,3,5,2,2} 
Output: 3 
Explanation: For second test case 
at position 3 elements before it 
(1+3) = elements after it (2+2). 
 

Example 2:

Input:
n = 1
A[] = {1}
Output: 1
Explanation:
Since its the only element hence
it is the only point.
Your Task:
The task is to complete the function equalSum() which takes the array and n as input parameters and returns the point. Return -1 if no such point exists.

Expected Time Complexily: O(N)
Expected Space Complexily: O(1)

Constraints:
1 <= n <= 106
1 <= A[i] <= 108
*/

#include<iostream>
#include<vector>
using namespace std;

//{ Driver Code Starts



class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }
 
    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends
class Solution {
  public:
    int equalSum(int N, vector<int> &A) {
        if(N == 1) return 1;
        for(int i=1; i<N; i++){
            A[i]+=A[i-1];
        }
        int index = -1;
        for(int i=1; i<N; i++){
            if(A[i-1] == A[N-1]-A[i]){
                index = i+1;
                break;
            }
        }
        return index;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N; 
        scanf("%d",&N);
        
        
        vector<int> A(N);
        Array::input(A,N);
        
        Solution obj;
        int res = obj.equalSum(N, A);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends