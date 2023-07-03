/*
859. Buddy Strings
Easy
2.2K
1.3K
Companies

Given two strings s and goal, return true if you can swap two letters in s so the result is equal to goal, otherwise, return false.

Swapping letters is defined as taking two indices i and j (0-indexed) such that i != j and swapping the characters at s[i] and s[j].

    For example, swapping at indices 0 and 2 in "abcd" results in "cbad".

 

Example 1:

Input: s = "ab", goal = "ba"
Output: true
Explanation: You can swap s[0] = 'a' and s[1] = 'b' to get "ba", which is equal to goal.

Example 2:

Input: s = "ab", goal = "ab"
Output: false
Explanation: The only letters you can swap are s[0] = 'a' and s[1] = 'b', which results in "ba" != goal.

Example 3:

Input: s = "aa", goal = "aa"
Output: true
Explanation: You can swap s[0] = 'a' and s[1] = 'a' to get "aa", which is equal to goal.

 

Constraints:

    1 <= s.length, goal.length <= 2 * 104
    s and goal consist of lowercase letters.


*/
/*
class Solution {
public:
    bool buddyStrings(string s, string goal) {
        vector<int> vec;
        for(int i=0; i<s.size(); i++){
            if(s[i] != goal[i]){
                vec.push_back(i);
            }
        }
        if(vec.size()==2){
            swap(s[vec[0]], s[vec[1]]);
            return s==goal;
        }
        if(s==goal){
            for(int i=0; i<s.size()-1; i++){
                for(int j=i+1; j<s.size(); j++){
                    if(s[i]==s[j]) return true;
                }
            }
        }
        return false;
    }
};

*/