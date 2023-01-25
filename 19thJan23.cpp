/*
Carpet into Box
MediumAccuracy: 59.12%Submissions: 3K+Points: 4

There is a carpet of a size a*b [length * breadth]. You are given a box of size c*d. The task is, one has to fit the carpet in the box in a minimum number of moves. 

In one move, you can either decrease the length or the breadth of the carpet by half (floor value of its half).

Note: One can even turn the carpet by 90 degrees any number of times, wont be counted as a move.

 

Example 1:

Input:
A = 8, B = 13
C = 6, D = 10
Output:
Minimum number of moves: 1
Explanation:
Fold the carpet by breadth, 13/2 i.e. 6, 
so now carpet is 6*8 and can fit fine.
 

Example 2:

Input:
A = 4, B = 8
C = 3, D = 10
Output:
Minimum number of moves: 1
Explanation: Fold the carpet by length , 4/2 i.e. 2,
so now carpet is 2*8 and can fit fine.
 

Your Task:
You don't need to read input or print anything. You only need to complete the function carpetBox() that takes an integer A, B, C and D as input and returns an integer denoting the minimum numbers of moves required to fit the carpet into the box.

 

Expected Time Complexity: O( max( log(a), log(b) ) ) .
Expected Auxiliary Space: O(1) .

 

Constrains:
1<= A,B,C,D <= 109

*/


//User function Template for C++
/*
class Solution{
    public:
    int carpetBox(int A, int B, int C, int D){
        int a, b, c, d;
        a = max(A, B);
        b = min(A, B);
        
        c = max(C, D);
        d = min(C, D);
        
        int count = 0;
        
        while(a>c || b>d){
            
            if(a>c && b>d){
                a/=2;
                count++;
            }
            else if(a>c){
                a/=2;
                count++;
            }
            else if(b>d){
                b/=2;
                count++;
            }
            A=a, B=b;
            a=max(A,B);
            b=min(A,B);
        }
        
        
        return count;
    }
};


*/