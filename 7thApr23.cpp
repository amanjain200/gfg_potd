/*
Add Minimum Characters
MediumAccuracy: 32.84%Submissions: 67+Points: 4
Attend free LIVE Webinars with Summer Skill-Up Sessions! Enroll Now!  

Given a string str, find the minimum characters to be added at front of the string to make it a palindrome.


Example 1:

Input:
str = ABCD
Output: 3
Explanation: The resultant string 
after adding 3 characters is DCBABCD.
The minimum possible answer is 3.
Example 2:

Input:
str = ABA
Output: 0
Explanation: The given string
is already a palindrome.

Your Task:  
You don't need to read input or print anything. Your task is to complete the function addMinChar() which takes the string str as input parameters and returns the minimum number of characters to be added to make it a palindrome.


Expected Time Complexity: O(|str|)
Expected Auxiliary Space: O(|str|)


Constraints:
1 ≤  |str| ≤ 105
str contains only uppercase english alphabets
*/

#include<iostream>
using namespace std;

//{ Driver Code Starts
//Initial Template for C++

 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int addMinChar(string str){
        int start = 0;
        int temp = str.size()-1;
        int end = str.size()-1;
        while(start < end) {
            if(str[start] == str[end]) {
                start ++;
                end --;
            } else {
                start = 0;
                temp--;
                end=temp;
            }
        }
        return str.length () - temp - 1;
    }
};

//{ Driver Code Starts.


int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin >> str;
        
        Solution ob;
        cout << ob.addMinChar(str) << endl;
    }
    return 0; 
} 
// } Driver Code Ends