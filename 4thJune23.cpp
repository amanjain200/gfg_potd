/*
Reversing the equation
EasyAccuracy: 58.61%Submissions: 14K+Points: 2
Given a mathematical equation that contains only numbers and +, -, *, /. Print the equation in reverse, such that the equation is reversed, but the numbers remain the same.
It is guaranteed that the given equation is valid, and there are no leading zeros.

Example 1:

Input:
S = "20-3+5*2"
Output: 2*5+3-20
Explanation: The equation is reversed with
numbers remaining the same.
Example 2:

Input: 
S = "5+2*56-2/4"
Output: 4/2-56*2+5
Explanation: The equation is reversed with
numbers remaining the same.
Your Task:
You don't need to read input or print anything. Your task is to complete the function reverseEqn() which takes the string S representing the equation as input and returns the resultant string representing the equation in reverse.

Expected Time Complexity: O(|S|).
Expected Auxiliary Space: O(|S|).

Constraints:
1<=|S|<=105
The string contains only the characters '0' - '9', '+', '-', '*', and '/'.
*/
/*
class Solution
{
  public:
    string reverseEqn (string s)
        {
            string ans = "";
            string temp = "";
            for(int i=s.size()-1; i>=0; i--){
                if(s[i]>='0' && s[i]<='9'){
                    temp+=s[i];
                }
                else{
                    reverse(temp.begin(), temp.end());
                    ans+=temp;
                    ans+=s[i];
                    temp="";
                }
            }
            reverse(temp.begin(), temp.end());
            ans+=temp;
            return ans;
        }
};
*/