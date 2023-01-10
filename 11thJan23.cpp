/*
Make array elements unique
MediumAccuracy: 34.05%Submissions: 138+Points: 4
Lamp
You can earn more Geekbits by participating in GFG Weekly Coding Contest  

Given an array arr[ ] of N elements, your task is to find the minimum number of increment operations required to make all the elements of the array unique. ie- no value in the array should occur more than once. In an operation a value can be incremented by 1 only.

Example 1:

Input:
N = 3
arr[] = {1, 2, 2}
Output:
1
Explanation:
If we increase arr[2] by 1 then the resulting 
array becomes {1, 2, 3} and has all unique values.
Hence, the answer is 1 in this case.
Example 2:

Input: 
N = 4
arr[] = {1, 1, 2, 3}
Output:
3
Explanation: 
If we increase arr[0] by 3, then all array
elements will be unique. Hence, the answer 
is 3 in this case.
Your Task:
You dont need to read input or print anything. Complete the function minIncrements() which takes the array arr[ ] and its size N as the input parameters, and returns the minimum increment operations required to make all elements of the array unique.

Expected Time Complexity: O(N*log(N))
Expected Auxiliary Space: O(1)

Constraints:
1 ≤ N ≤ 105 
1 ≤ arr[i] ≤ 109
*/

#include<iostream>
#include<map>
#include<vector>
using namespace std;

// User function Template for C++

class Solution {
  public:
    long long int minIncrements(vector<int> arr, int N) {
        // Code here
        long long count = 0;
        map<int, int> mp;
        for(int i=0; i<N; i++){
            mp[arr[i]]++;
        }
        
        for(auto x : mp){
            while(x.second > 1){
                int val = x.first;
                x.second--;
                while(mp[val]){
                    count++;
                    val++;
                }
                mp[val]++;
            }
        }
        
        
        return count;
    }
};




