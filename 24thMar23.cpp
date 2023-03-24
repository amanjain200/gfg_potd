/*
Remove and Reverse
MediumAccuracy: 50.43%Submissions: 17K+Points: 4
Win Prize worth ₹6000 with Ease. Register for the Easiest Coding Challenge!  

Given a string S which consists of only lowercase English alphabets, you have to perform the below operations:
If the string S contains any repeating character, remove the first repeating character and reverse the string and again perform the above operation on the modified string, otherwise, you stop.
You have to find the final string.

Example 1:

Input: S = "abab"
Output: ba
Explanation:
In 1st operation: The first repeating 
character is a. After Removing the first 
character, S = "bab". After Reversing the 
string, S = "bab".
In 2nd operation: The first repeating 
character is b. After Removing the first 
character, S = "ab". After Reversing the 
string, S = "ba".
Now the string S does not contain any 
repeating character.
Example 2:

Input: S = "dddd"
Output: d
Your Task:  
You don't need to read input or print anything. Your task is to complete the function removeReverse( ) which accepts a string S input parameter and returns the modified string.

Expected Time Complexity: O(|S|)
Expected Auxiliary Space: O(K), K <= 26.

Constraints:
The string contains only lowercase English alphabets.
1 < |S| < 105
|S| denotes the length of the string S.

*/

#include<iostream>
#include<vector>
using namespace std;

//{ Driver Code Starts
//Initial Template for C++


// } Driver Code Ends
//User function Template for C++
class Solution {
  public:
    string removeReverse(string s) {
        vector<int> freq(26,0);
        int i = 0, j = s.length()-1;
        int cnt = 0;
        for(char c : s) {
            freq[c-'a']++;
        }
        
        bool rev = false;
        string a = "", b = "";
        
        while(i <= j) {
            char c;
            
            if(rev) c = s[j--];
            else c = s[i++];
            
            if(freq[c-'a'] > 1) {
                freq[c-'a']--;
                rev = !rev;
                cnt++;
            }
            else {
                if(rev) b = c + b;
                else a += c;
            }
        }
        
        s = a + b;
        if(cnt&1) reverse(s.begin(),s.end());
        return s;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin>>S;
        Solution obj;
        auto ans = obj.removeReverse(S);
        cout<<ans<<endl;
    }
}
// } Driver Code Ends