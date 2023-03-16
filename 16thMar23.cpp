/*
Second smallest number
MediumAccuracy: 50.86%Submissions: 15K+Points: 4
Register NOW for the latest GFG Job-a-thon: Hiring Challenge !!  

The task is to find the second smallest number with a given sum of digits as S and the number of digits as D.
Example 1:

Input:
S = 9 
D = 2
Output:
27
Explanation:
18 is the smallest number possible with sum = 9
and total digits = 2, Whereas the second
smallest is 27.
Example 2:

Input:
S = 16
D = 3
Output:
178
Explanation:
169 is the smallest number possible with sum is
16 and total digits = 3, Whereas the second
smallest is 178.

Your Task:
You don't need to read input or print anything. Your task is to complete the function secondSmallest() which takes the two integers S and D respectively and returns a string which is the second smallest number if possible, else return "-1".

Expected Time Complexity: O(D)
Expected Space Complexity: O(1)

Constraints:
1 ≤ S ≤ 105
1 ≤ D ≤ 105
*/

#include<iostream>
#include<string>
using namespace std;

//User function Template for C++

class Solution{   
  public:
    string secondSmallest(int S, int D){
        int count = 0;
        string a;
        
        if(S >= D*9)
            return "-1";
            
        bool add = true;
        
        while(S>0){
            if(S<=10){
                if(count == (D-1)){
                    a += to_string(S);
                    add = false;
                }
                else
                    a += to_string(S-1);
                S = 0;
            }
            else{
                a += to_string(9);
                S -= 9;
            }
            count++;
        }
        
        if(add){
            count++;
            
            for(int i=count; i<D; i++){
                a += "0";
            }
            a += "1";
        }
        
        
        for(int i=1; i<D; i++){
            if(a[i]!='9'){
                a[i-1] -= 1;
                a[i] += 1;
                break;
            }
        }
        
        reverse(a.begin(), a.end());
        return a;
    }
};