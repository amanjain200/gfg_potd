/*
Cutting Rectangles
EasyAccuracy: 52.88%Submissions: 15K+Points: 2
Lamp
Don't Miss Out on the Chance to Work with Leading Companies! Visit the GFG Job Fair Now!  

Given a rectangle of dimensions L x B find the minimum number (N) of identical squares of maximum side that can be cut out from that rectangle so that no residue remains in the rectangle. Also find the dimension K of that square.

Example 1:

Input: L = 2, B = 4
Output: N = 2, K = 2
Explaination: 2 squares of 2x2 dimension.

Example 2:

Input: L = 6, B = 3
Output: N = 2, K = 3
Explaintion: 2 squares of 3x3 dimension. 

Your Task:
You do not need to read input or print anything. Your task is to complete the function minimumSquares() which takes L and B as input parameters and returns a list of 2 integers containing the values of N and K respectively.


Expected Time Complexity: O(log min(L, B))
Expected Auxiliary Space: O(1)


Constraints:
1 ≤ L, B ≤ 109

*/

/*
// User function Template for C++

class Solution{
public:
    vector<long long int> minimumSquares(long long int L, long long int B)
    {
        vector<long long int> ans;
        long long int k = __gcd(L, B);
        long long int n = (L*B)/(k*k);
        ans.push_back(n);
        ans.push_back(k);
        
        return ans;
    }
};

*/