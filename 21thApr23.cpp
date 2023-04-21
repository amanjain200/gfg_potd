/*
Prefix Suffix String
MediumAccuracy: 54.18%Submissions: 11K+Points: 4
Unlock your coding potential - join our Hiring Coding Contest and land your dream job!  

Given two Lists of strings s1 and s2, you have to count the number of strings in s2 which is either a suffix or prefix of at least one string of s1.

Example 1:

Input:
s1 = ["cat", "catanddog", "lion"]
s2 = ["cat", "dog", "rat"]
Output: 
2
Explanation: 
String "cat" of s2 is prefix of "catanddog"
& string "dog" of s2 is suffix of "catanddog" 
Example 2:

Input: 
s1 = ["jrjiml", "tchetn", "ucrhye", "ynayhy", 
       "cuhffd", "cvgpoiu", "znyadv"]
s2 = ["jr", "ml", "cvgpoi", "gpoiu", "wnmkmluc", 
      "geheqe", "uglxagyl", "uyxdroj"] 
Output: 
4
Explanation: 
String "jr" of s2 is prefix of "jrjiml", 
"ml" of s2 is suffix of "jrjiml", 
"cvgpoi" of s2 is prefix of "cvgpoiu" &
"gpoiu" of s2 is suffix of "cvgpoiu"
Your Task:
You don't need to read input or print anything. Your task is to complete the function prefixSuffixString(), which takes 2 strings s1 and s2 as input and returns an integer value as the number of strings in s2 which is a prefix or suffix in s1.

Expected Time Complexity: O(max(len(s1) , len(s2) ))
Expected Space Complexity: O(1)

Constraints:
   1 <= s1,s2 < 5 * 10^3
   5 <= len(s1[i]), len(s2[i]) < 25
*/

/*
//User function Template for C++

class Solution{
public:
    int prefixSuffixString(vector<string> &s1,vector<string> s2){
        int res = 0;
         for(auto c : s2){
                int size = c.size();
                for(auto child : s1){
                    int n = child.size();
                    if(n<size) continue;
                    if(c[0]==child[0]){
                        string left = child.substr(0,size);
                        if(left==c){
                            res++;
                            break;
                        }
                    }
                    if(c[size-1]==child[n-1]){
                        string right = child.substr(n-size,size);
                        if(right == c){
                            res++;
                            break;
                        }
                    }
                }
         }
        return res;
    }
};
*/