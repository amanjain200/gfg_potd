/*
Longest K unique characters substring
MediumAccuracy: 34.65%Submissions: 108K+Points: 4
30% Off on all premium courses! Enrol today and utilize this offer before placement ends

Given a string you need to print the size of the longest possible substring that has exactly K unique characters. If there is no possible substring then print -1.

Example 1:

Input:
S = "aabacbebebe", K = 3
Output: 
7
Explanation: 
"cbebebe" is the longest substring with 3 distinct characters.

Example 2:

Input: 
S = "aaaa", K = 2
Output: -1
Explanation: 
There's no substring with 2 distinct characters.

Your Task:
You don't need to read input or print anything. Your task is to complete the function longestKSubstr() which takes the string S and an integer K as input and returns the length of the longest substring with exactly K distinct characters. If there is no substring with exactly K distinct characters then return -1.

Expected Time Complexity: O(|S|).
Expected Auxiliary Space: O(|S|).

Constraints:
1 ≤ |S| ≤ 105
1 ≤ K ≤ 26
All characters are lowercase latin characters.
*/
/*
//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
          int n=s.length();
            
            vector<int> cnt(26, 0);
            
            int i=0, j=0, diff=0;
            int ans = -1;
            
            while(j<n){
                if(cnt[s[j]-'a']==0){
                    
                    if(diff == k){
                        cnt[s[i]-'a']--;
                        if(cnt[s[i]-'a'] == 0){
                            diff--;
                        }
                        i++;
                    }else{
                        diff++;
                        cnt[s[j]-'a']++;
                        j++;
                    }
                }else{
                    cnt[s[j]-'a']++;
                    j++;
                }
                
                if(diff == k){
                    ans = max(ans, j-i);
                }
            }
            return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends
*/