/*
Minimum Steps Required
MediumAccuracy: 73.44%Submissions: 3K+Points: 4
Attend free LIVE Webinars with Summer Skill-Up Sessions! Enroll Now!  

Given a string str consisting of only two characters 'a' and 'b'. You need to find the minimum steps required to make the string empty by removing consecutive a's and b's.

Example 1:

Input:
str = "bbaaabb"
Output:
2
Explanation:
Operation 1: Removal of all a's modifies str to "bbbb".
Operation 2: Removal of all remaining b's makes str
empty.
Therefore, the minimum number of operations required
is 2.
Example 2:

Input:
str = "aababaa"
Output:
3
Explanation:
Operation 1: Removal of b's modifies str to "aaabaa".
Operation 2: Removal of b's modifies str = "aaaaa".
Operation 3: Removal of all remaining a's makes str 
empty.
Therefore, the minimum number of operations required 
is 3.
Your Task:

You need to complete the function minSteps() which takes a string str as the only input parameter and returns an integer, denoting the minimum steps required to make the string empty.

Expected Time Complexity: O(N), where N = length of string str
Expected Space Complexity: O(1)

Constraints:

1 <= str.length() <= 105
'a' <= str[i] <= 'b' 
*/

#include<iostream>
#include<vector>
using namespace std;

//{ Driver Code Starts
// Initial Template for C++


// } Driver Code Ends
// User function Template for C++
int minSteps(string str) {
    char start = str[0];
    int cnt = 1;
    for(int i=1; i<str.size(); i++){
        if(str[i] != str[i-1]){
            cnt++;
            start = str[i];
        }
    }
    //if(cnt%2==0) return (cnt/2+1);
    return cnt/2 + 1;
}

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        cout << minSteps(str) << endl;
    }
}

// } Driver Code Ends