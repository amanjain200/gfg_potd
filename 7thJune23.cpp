/*
Least Prime Factor
EasyAccuracy: 51.45%Submissions: 22K+Points: 2
Getting a High Paying Job Now Easier Than Today's Problem! Apply For Mega Job-A-Thon  

Given a number N, find the least prime factors for all numbers from 1 to N.  The least prime factor of an integer X is the smallest prime number that divides it.
Note :

1 needs to be printed for 1.
You need to return an array/vector/list of size N+1 and need to use 1-based indexing to store the answer for each number.
Example 1:

Input: N = 6
Output: [0, 1, 2, 3, 2, 5, 2] 
Explanation: least prime factor of 1 = 1,
least prime factor of 2 = 2,
least prime factor of 3 = 3,
least prime factor of 4 = 2,
least prime factor of 5 = 5,
least prime factor of 6 = 2.
So answer is[1, 2, 3, 2, 5, 2]. 
Example 2:

Input: N = 4
Output: [0, 1, 2, 3, 2]
Explanation: least prime factor of 1 = 1,
least prime factor of 2 = 2,
least prime factor of 3 = 3,
least prime factor of 4 = 2.
So answer is[1, 2, 3, 2]. 
Your Task:  
You don't need to read input or print anything. Complete the function leastPrimeFactor() which takes N as input parameter and returns a list of integers containing all the least prime factors of each number from 1 to N.

Expected Time Complexity: O(NlogN)
Expected Auxiliary Space: O(N)

Constraints:
2<= n <=105

*/

/*
//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
// User function Template for C++
class Solution {
    void compute(vector<int> &primes, int n){
        vector<bool> temp(n+1, true);
        temp[0] = false;
        temp[1] = false;
        for(int i=2; i*i <= n; i++){
            //ans[i] = i;
            if(temp[i]){
                for(int j=i*i; j<=n; j+=i){
                    //ans[i] = j;
                    temp[i] = false;
                }
            }
        }
        
        for(int i=2; i<=n; i++){
            if(temp[i]){
                primes.push_back(i);
            }
        }
    }
  public:
    vector<int> leastPrimeFactor(int n) {
        vector<int> primes;
        compute(primes, n);
        vector<int> ans;
        ans.push_back(0);
        ans.push_back(1);
        for(int i=2; i<=n; i++){
            for(auto &it : primes){
                if(i%it == 0){
                    ans.push_back(it);
                    break;
                }
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
        int n;
        cin >> n;
        Solution ob;
        vector<int>ans = ob.leastPrimeFactor(n);
        for(int i=1;i<=n;i++)cout<<ans[i]<<" ";
        cout<<endl;  
    }
    return 0;
}

// } Driver Code Ends

*/