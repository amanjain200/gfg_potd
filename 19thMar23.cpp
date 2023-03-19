/*
Distinct Difference
EasyAccuracy: 70.95%Submissions: 10K+Points: 2
Register NOW for the latest GFG Job-a-thon: Hiring Challenge !!  

Given an array A[] of length N. For each index i (1<=i<=N), find the diffference between the number of distinct element in it's left and right side in the array. 

Example 1:

Input:
N = 3
arr[] = {4, 3, 3}
Output: {-1, 0, 2}
Explanation: For index i=1, there are 0 distinct element in the left side of it, and 1 distinct element(3) in it's right side. So difference is 0-1 = -1. 

Similarly for index i=2, there is 1 distinct element (4) in left side of it, and 1 distinct element(3) in it's right side. So difference is 1-1 = 0.

Similarly for index i=3, there are 2 distinct elements (4 and 3) in left side of it, and 0 distinct elements in it's left side. So difference is 2-0 = 2.

Example 2:

Input:
N = 4
arr[] = {4, 4, 3, 3}
Output: {-2, 0, 0, 2}
Explanation: For index i=1, there are 0 distinct element in the left side of it, and 2 distinct element(4 and 3) in it's right side. So difference is 0-2 = -2.

Similarly for index i=2, there is 1 distinct element (4) in left side of it, and 1 distinct element(3) in it's right side. So difference is 1-1 = 0.

Similarly for index i=4, there are 2 distinct elements (4 and 3) in left side of it, and 0 distinct element in it's right side. So difference is 2-0 = 2.
Your Task: 
You don't need to read input or print anything. Your task is to complete the function getDistinctDifference() which takes the array A[] and its size N as input parameters and returns an array containing the difference between number of ditinct elements in left and right side for each 1<=i<=N.

Expected Time Complexity: O(N)
Expected Space Complexity:O(N)

Constraints:

1 <= N <= 105
1 <= A[i] <= 109
Array may contain duplicate elements.

*/

#include<iostream>
#include<vector>
using namespace std;

/*{ Driver Code Starts



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
    vector<int> getDistinctDifference(int n, vector<int> &arr) {
        vector<int> result(n);        
        unordered_set<int> s;
        for(int i =0; i<n; i++){
            result[i] = s.size();;
            s.insert(arr[i]);
        }
        s.clear();
        for(int i = n-1; i>=0; i--){
            result[i] -=s.size();
            s.insert(arr[i]);
        }
        return result;
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
        vector<int> res = obj.getDistinctDifference(N, A);
        
        Array::print(res);
        
    }
}

// }
*/ 