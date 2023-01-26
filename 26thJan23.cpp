/*
Case-specific Sorting of Strings
MediumAccuracy: 69.88%Submissions: 33K+Points: 4

Given a string S consisting of only uppercase and lowercase characters. The task is to sort uppercase and lowercase letters separately such that if the ith place in the original string had an Uppercase character then it should not have a lowercase character after being sorted and vice versa.

Example 1:

Input:
N = 12
S = defRTSersUXI
Output: deeIRSfrsTUX
Explanation: Sorted form of given string
with the same case of character as that
in original string is deeIRSfrsTUX
Example 2:

Input:
N = 6
S = srbDKi
Output: birDKs
Explanation: Sorted form of given string
with the same case of character will
result in output as birDKs.
Your Task:
You only need to complete the function caseSort that takes a string str and length of the string n and returns sorted string.

Expected Time Complexity: O(Nlog(N)).
Expected Auxiliary Space: O(N).

Constraints:
1 ≤ N ≤ 105

*/

#include<iostream>
#include<vector>
using namespace std;


//User function Template for C++

class Solution
{
    public:
    static bool cmp(char a, char b){
        return int(a)<int(b);
    }
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        vector<int> positions;
        vector<char> capital;
        vector<char> small;
        for(char ch : str){
            if(ch <= 'z' && ch>='a'){
                positions.push_back(0);
                small.push_back(ch);
            }
            else{
                positions.push_back(1);
                capital.push_back(ch);
            }
        }
        
        //sort(capital.begin(), capital.end(), cmp);
        //sort(small.begin(), small.end(), cmp);
        
        str = "";
        int cain = 0;
        int smin = 0;
        
        for(int i=0; i<n; i++){
            if(positions[i] == 0){
                str+=small[smin];
                smin++;
            }
            else{
                str+=capital[cain];
                cain++;
            }
        }
        return str;
    }
};


