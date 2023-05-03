/*
Make Palindrome
EasyAccuracy: 55.43%Submissions: 13K+Points: 2
Finding A Job Is Now Easier Than Today's Problem! Explore Job Fair 2023 

You are given an array of strings arr of size n. You have to find out if it is possible to make a palindromic string by concatenating the strings in any order. Provided that all the strings given in the array are of equal length.

Example 1:

Input:
n = 4
arr = {"djfh", "gadt", "hfjd", "tdag"}
Output:
YES
Explanation:
You can make the string "djfhgadttdaghfjd", by concatenating the given strings which is a palindrome.
Example 2:

Input:
n = 3
arr = {"jhjdf", "sftas", "fgsdf"}
Output:
NO
Explanation:
You can't make a palindromic string with this strings.
Your Task:
You don't need to read input or print anything. Your task is to complete the function makePalindrome() which takes an integer n and an array of strings arr respectively and returns true or false.

Expected Time Complexity: O(n * len(arr[i]))
Expected Space Complexity: O(n * len(arr[i]))

Constraints:
1 <= n <= 104
0 <= |arr[i]| <= 104
The sum of n*|arr[i]| over all test cases won't exceed 106
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
    bool makePalindrome(int n,vector<string> &arr){
        unordered_map<string,int> mp;
        
        for(auto i:arr)
        {
            mp[i]++;
        }
        
        int odd=0;
        for(auto i: mp)
        {
            string temp=i.first;
            reverse(temp.begin(),temp.end());
            
            if(i.first==temp)
            {
                if(i.second%2) // odd
                {
                    odd++;
                }
                if(odd>1)
                {
                    return false;
                }
            }
            else
            {
                if(i.second!=mp[temp])
                {
                    return false;
                }
            }
        }
        
        return true;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        if(ob.makePalindrome(n,arr)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
// } Driver Code Ends
*/