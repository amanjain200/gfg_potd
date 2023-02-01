/*
Distinct Coloring
MediumAccuracy: 65.26%Submissions: 5K+Points: 4
Lamp
You can earn more Geekbits by participating in GFG Weekly Coding Contest  

There is a row of N houses, each house can be painted with one of the three colors: red, blue or green. The cost of painting each house with a certain color is different. You have to paint all the houses such that no two adjacent houses have the same color. Find the minimum cost to paint all houses.

The cost of painting each house in red, blue or green colour is given in the array r[], g[] and b[] respectively.


Example 1:

Input:
N = 3
r[] = {1, 1, 1}
g[] = {2, 2, 2}
b[] = {3, 3, 3}
Output: 4
Explanation: We can color the houses 
in RGR manner to incur minimum cost.
We could have obtained a cost of 3 if 
we coloured all houses red, but we 
cannot color adjacent houses with 
the same color.



Example 2:

Input:
N = 3
r[] = {2, 1, 3}
g[] = {3, 2, 1}
b[] = {1, 3, 2} 
Output: 3
Explanation: We can color the houses
in BRG manner to incur minimum cost.


Your Task:  
You don't need to read input or print anything. Your task is to complete the function distinctColoring() which takes the size N and the color arrays r[], g[], b[] as input parameters and returns the minimum cost of coloring such that the color of no two houses is same.

 

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)

 

Constraints:
1 <= N <= 5*104
1 <= r[i], g[i], b[i] <= 106

*/

#include<iostream>
using namespace std;

//User function Template for C++

class Solution{   
public:
    long long int distinctColoring(int N, int r[], int g[], int b[]){
        long long int R = r[0], B = b[0], G = g[0];
 
    for (int i = 1; i < N; i++)
    {
       long long int rr = R, bb = B, gg = G;
        R = min(bb, gg) + r[i];
        B = min(rr, gg) + b[i];
        G = min(rr, bb) + g[i];
    }
    return min(R, min(B, G));
    }
};

