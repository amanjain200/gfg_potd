/*
Array Operations
EasyAccuracy: 62.03%Submissions: 7K+Points: 2
Finding a high paying job is easier than today's problem! Attend Job Fair 2023
 

You are given an array arr of n integers. You must return the minimum number of operations required to make this array 0. For this you can do an operation :

Choose a sub-array of non-zero elements & replace all with 0(0 must be present in arr, if not you can not replace it).
Example 1:

Input:
n = 4
arr = {3,0,4,5}
Output:
2
Explanation:
First, we can choose 3 replace with 0(which is on 1st Index) and in the second operation, we can choose 4 & 5 -> replace with 0(1st Index).
Your Task:
You don't need to read input or print anything. Your task is to complete the function arrayOperations() which takes an integer n and an array arr as inputs and find the minimum number of operations you must perform to make all the elements of the array 0. If not possible return -1;

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

Constraints:
1 <= n <= 105
0 <= arr[i] <= 109
*/

/*
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int arrayOperations(int n, vector<int> &arr) {
        int count = 0;
        if(arr[0] != 0) count++;
        for(int i=1; i<n; i++){
            if(arr[i]!=0&&arr[i-1]==0){
                count++;
            }
        }
        return count;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        
        
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        Solution obj;
        int res = obj.arrayOperations(n, arr);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends
*/