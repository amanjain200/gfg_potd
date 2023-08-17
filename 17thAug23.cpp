/*
Next Smallest Palindrome
HardAccuracy: 19.63%Submissions: 35K+Points: 8
Applying for Jobs, Now Easier Than Today's Problem! Explore Now

Given a number, in the form of an array Num[] of size N containing digits from 1 to 9(inclusive). The task is to find the next smallest palindrome strictly larger than the given number.

Example 1:

Input:
N = 11
Num[] = {9, 4, 1, 8, 7, 9, 7, 8, 3, 2, 2}
Output: 9 4 1 8 8 0 8 8 1 4 9
Explanation: Next smallest palindrome is
9 4 1 8 8 0 8 8 1 4 9

Example 2:

Input:
N = 5
Num[] = {2, 3, 5, 4, 5}
Output: 2 3 6 3 2
Explanation: Next smallest palindrome is
2 3 6 3 2

Your Task:
Complete the function generateNextPalindrome() which takes an array num, and a single integer n, as input parameters and returns an array of integers denoting the answer. You don't to print answer or take inputs.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

Constraints:
1 <= N <= 105
1 <= Num[i] <= 9
*/
/*
//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
    vector<int> func(vector<int> vec, int n){
        vector<int> ans;
        ans.push_back(1);
        n--;
        while(n--){
            ans.push_back(0);
        }
        ans.push_back(1);
        return ans;
    }

	vector<int> generateNextPalindrome(int num[], int n) {
	    vector<int> ans;
	    if(n==1){
	        if(num[0]==9) return {1,1};
	        else{
	            return {num[0]+1};
	        }
	    }
	    for(int i=0; i<n; i++){
	        ans.push_back(num[i]);
	    }
	    bool last_inc = false;
	    int s=0, e=n-1;
	    while(s<e){
	        if(ans[s] != ans[e]){
	            if(ans[e] > ans[s]) last_inc=false;
	            else last_inc=true;
	            ans[e]=ans[s];
	        }
	        s++; e--;
	    }
	    
	    if(last_inc==false){
	        if(n%2 != 0){
	            //odd length
	            if(ans[n/2] != 9){
	                ans[n/2]++;
	            }else{
	                ans[n/2]=0;
	                int s=n/2 -1, e=n/2 +1;
	                while(s>=0){
	                    if(ans[s] != 9){
	                        ans[s]++;
	                        ans[e]++;
	                        break;
	                    }else{
	                        if(s==0){
	                            return func(ans, n);
	                        }
	                        ans[s]=0;
	                        ans[e]=0;
	                    }
	                    s--; e++;
	                }
	            }
	        }else{
	            //even length
	            int s=n/2 -1;
	            int e=n/2 ;
	            while(s>=0){
                    if(ans[s] != 9){
                        ans[s]++;
                        ans[e]++;
                        break;
                    }else{
                        if(s==0){
                            return func(ans, n);
                        }
                        ans[s]=0;
                        ans[e]=0;
                    }
                    s--; e++;
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
        int num[n];
        for (int i = 0; i < n; i++) {
            cin >> num[i];
        }
        Solution ob;
        auto ans = ob.generateNextPalindrome(num, n);
        for (auto x : ans) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends
*/