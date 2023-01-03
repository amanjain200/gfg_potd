/*
Minimize number of Students to be removed
MediumAccuracy: 34.1%Submissions: 44+Points: 4

N Students of different heights are attending an assembly. The heights of the students are represented 
by an array H[]. The problem is that if a student has less or equal height than the student standing 
in front of him, then he/she cannot see the assembly. Find the minimum number of students to be removed 
such that maximum possible number of students can see the assembly.
 

Example 1:

Input:
N = 6
H[] = {9, 1, 2, 3, 1, 5}
Output:
2
Explanation:
We can remove the students at 0 and 4th index.
which will leave the students with heights
1,2,3, and 5.
*/

#include<iostream>
#include<vector>
using namespace std;
//User function Template for C++

class Solution {
  public:
    int removeStudents(int H[], int N) {
        vector<int> vec;
        for(int i=0; i<N; i++){
            int it = lower_bound(vec.begin(), vec.end(), H[i]) - vec.begin();
            if(it == vec.size()){
                vec.push_back(H[i]);
            }
            else{
                vec[it] = H[i];
            }
        }
        return N-vec.size();
    }
};