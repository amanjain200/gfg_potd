/*
Make the array beautiful
EasyAccuracy: 42.48%Submissions: 7K+Points: 2
Attend free LIVE Webinars with Summer Skill-Up Sessions! Enroll Now!  

Given an array of positive and negative integers. You have to make the array beautiful. An array is beautiful if two adjacent integers, arr[i] and arr[i+1] have the same sign. And you can do the following operation any number of times until the array becomes beautiful.

If two adjacent integers have different signs, remove them.
Return the beautiful array after performing the above operation.

Note: An empty array is also a beautiful array. There can be many adjacent integers with different signs. So remove adjacent integers with different signs from left to right.

Example 1:

Input: 4 2 -2 1
Output: 4 1
Explanation: As at indices 1 and 2 , 2 and -2 have
different sign, they are removed. And the  the final
array is: 4 1.
Example 2:

Input: 2 -2 1 -1
Output: []
Explanation: As at indices 0 and 1, 2 and -2 have
different sign, so they are removed. Now the array
is 1 -1.Now 1 and -1 are also removed as they have
different sign. So the final array is empty. 
Your Task:
You don't need to read input or print anything. Your task is to complete the function makeBeautiful() which takes an array as an input parameter and returns an array.

Expected Time Complexity: O(N)
Expected Space Complexity: O(N)


Constraints:
1 <= size of the array <= 105
-105 <= arr[i] <= 105
*/
#include<iostream>
#include<vector>
using namespace std;

//{ Driver Code Starts
// Initial Template for C++



// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
        int siz = arr.size();
        vector<int> empty;
        for(int i=0; i<siz-1; i++){
            if(arr.size() == 2 || arr.size() == 1) break;
            if((arr[i]<0&&arr[i+1]>=0)||(arr[i]>=0&&arr[i+1]<0)){
                arr.erase(arr.begin()+i, arr.begin()+i+2);
                siz-=2;
                i=max(-1,i-2);
            }
        }
        if(arr.size() == 2 && arr[0]*arr[1] < 0) return empty;
        return arr;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution obj;
        vector<int> res = obj.makeBeautiful(arr);
        for (int i = 0; i < res.size(); i++) {
            cout << res[i] << " ";
        }

        cout << "\n";
    }
}
// } Driver Code Ends