/*
Seating Arrangement
EasyAccuracy: 49.85%Submissions: 13K+Points: 2
Explore Job Fair for students & freshers for daily new opportunities. Find A Job Today! 

You are given an integer n, denoting the number of people who needs to be seated, and a list of m integers seats, where 0 represents a vacant seat and 1 represents an already occupied seat.

Find whether all n people can find a seat, provided that no two people can sit next to each other.

Example 1:

Input:
n = 2
m = 7
seats[] = {0, 0, 1, 0, 0, 0, 1}
Output:
Yes
Explanation:
The two people can sit at index 0 and 4.
Example 2:

Input:
n = 1
m = 3
seats[] = {0, 1, 0}
Output:
No
Explanation:
There is no way to get a seat for one person.
Your Task:

You don't have to input or print anything. Complete the function is_possible_to_get_seats() which takes the input parameters and return a boolean value, indicating whether all people can find a seat.

Expected Time Complexity: O(m)
Expected Space Complexity: O(1)

Constraints:

0 <= n <= 105
1 <= m <= 105
seats[i] == 0 or seats[i] == 1
*/

#include<iostream>
#include<vector>
using namespace std;

//User function Template for C++

class Solution{
    public:
    bool is_possible_to_get_seats(int n, int m, vector<int>& seats){
        if(n==0) return true;
        if(m==1){
            if(seats[0]==0&&n<=1) return true;
            return false;
        }
        int count =0;
        if(seats[0]==0&&seats[1]==0){
            count++;
            seats[0]=1;
        }
        for(int i=1; i<m-1; i++){
            if(seats[i]==0 && seats[i+1]==0 && seats[i-1]==0){
                seats[i]=1;
                count++;
            }
        }
        if(seats[m-1]==0&&seats[m-2]==0) count++;
        if(count>=n) return true;
        return false;
    }
};