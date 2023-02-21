/*
Fill the Matrix
MediumAccuracy: 69.0%Submissions: 9K+Points: 4
Lamp
Don't Miss Out on the Chance to Work with Leading Companies! Visit the GFG Job Fair Now!  

Given a matrix with dimensions N x M, entirely filled with zeroes except for one position at co-ordinates X and Y containing '1'. Find the minimum number of iterations in which the whole matrix can be filled with ones.
Note: In one iteration, '1' can be filled in the 4 neighbouring elements of a cell containing '1'.


Example 1:

Input:
N = 2, M = 3
X = 2, Y = 3
Output: 3 

Explanation: 3 is the minimum possible 
number of iterations in which the
matrix can be filled.
Example 2:

Input:
N = 1, M = 1
X = 1, Y = 1 
Output: 0

Explanation: The whole matrix is 
already filled with ones.

Your Task:  
You don't need to read input or print anything. Your task is to complete the function minIterations() which takes the dimensions of the matrix N and M and the co-ordinates of the initial position of '1' ie X and Y as input parameters and returns the minimum number of iterations required to fill the matrix.


Expected Time Complexity: O(N*M)
Expected Auxiliary Space: O(1)


Constraints:
1 ≤ N, M ≤ 103
1 ≤ X ≤ N
1 ≤ Y ≤ M 
*/
#include<iostream>
using namespace std;


//User function Template for C++

class Solution{   
public:
    int minIteration(int N, int M, int x, int y){    
        int top = x-1;
        int down = N-x;
        int left = y-1;
        int right = M-y;
        return (max(top+left, max(top+right, max(down+left, down+right))));
    }
};