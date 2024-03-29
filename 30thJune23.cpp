/*
Next Happy Number
HardAccuracy: 55.11%Submissions: 10K+Points: 8
Sharpen up your programming skills, participate in coding contests & explore high-paying jobs

For a given non-negative integer N, find the next smallest Happy Number. A number is called Happy if it leads to 1 after a sequence of steps. Wherein at each step the number is replaced by the sum of squares of its digits that is, if we start with Happy Number and keep replacing it with sum of squares of its digits, we reach 1 at some point.
 
Example 1:

Input:
N = 8
Output:
10
Explanation:
Next happy number after 8 is 10 since
1*1 + 0*0 = 1

Example 2:

Input:
N = 10
Output
13
Explanation:
After 10, 13 is the smallest happy number because
1*1 + 3*3 = 10, so we replace 13 by 10 and 1*1 + 0*0 = 1.

Your Task:
You don't need to read input or print anything. Your task is to complete the function nextHappy() which takes an integer N as input parameters and returns an integer, next Happy number after N.

Expected Time Complexity: O(Nlog10N)
Expected Space Complexity: O(1)
 
Constraints:
1<=N<=105

*/
/*

//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    bool isHappy(int num) {
    unordered_set<int> visited;
    while (num != 1 && visited.find(num) == visited.end()) {
        visited.insert(num);
        int sum = 0;
        while (num > 0) {
            int digit = num % 10;
            sum += digit * digit;
            num /= 10;
        }
        num = sum;
    }
    return num == 1;
}

    int nextHappy(int N){
        int num = N + 1;
        while (!isHappy(num)) {
            num++;
        }
        return num;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.nextHappy(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends

*/