/*
Find the longest string  

Given an array of strings arr[]. You have to find the longest string which is 
lexicographically smallest and also all of its prefix strings are already present in the array.

Example 1:

Input: ab a abc abd
Output: abc
Explanation: We can see that length of the longest 
string is 3. And there are two string "abc" and "abd"
of length 3. But for string "abc" , all of its prefix
"a" "ab" "abc" are present in the array. So the
output is "abc".
Example 2:

Input: ab a aa abd abc abda abdd abde abdab
Output: abdab
Explanation: We can see that each string is fulfilling
the condition. For each string, all of its prefix 
are present in the array.And "abdab" is the longest
string among them. So the ouput is "abdab".
 



//User function Template for C++

#include<iostream>
#include<map>
#include<vector>
using namespace std;

class Solution
{
public:
    string longestString(vector<string> &words)
    {
        sort(words.begin(), words.end());
        map<string, int>mp;
        for(auto &i : words)    mp[i]++;
        string str;   
        int len = 0;
        for(auto &i : words){
            string tmp;    
            int n = i.size();
            for(int j = 0; j < n; j++){
                tmp += i[j];
                if(!mp[tmp]){
                    n = 0;  break;
                }
            }
            if(n > len){
                str = i;  len = n;
            }
        }
        return str;
    }
};

*/