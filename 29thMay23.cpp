/*
CamelCase Pattern Matching
MediumAccuracy: 16.18%Submissions: 22K+Points: 4
Lamp
You can earn more Geekbits by participating in GFG Weekly Coding Contest  

Given a dictionary of words where each word follows CamelCase notation, print all words (in lexicographical order) in the dictionary that match with a given pattern consisting of uppercase characters only.

Example: GeeksForGeeks matches the pattern "GFG", because if we combine all the capital letters in GeeksForGeeks they become GFG.

CamelCase is the practice of writing compound words or phrases such that each word or abbreviation begins with a capital letter. Common examples include PowerPoint and Wikipedia, GeeksForGeeks, CodeBlocks, etc.

Example 1:

Input:
N=3
Dictionary=["WelcomeGeek",
"WelcomeToGeeksForGeeks","GeeksForGeeks"]
Pattern="WTG"
Output:
WelcomeToGeeksForGeeks
Explanation:
Since only WelcomeToGeeksForGeeks matches 
the pattern, it is the only answer.
Example 2:

Input:
N=8
Dictionary=["Hi","Hello","HelloWorld",
"HiTech","HiGeek","HiTechWorld",
"HiTechCity","HiTechLab"]
Pattern="HA"
Output:
-1
Explanation:
Since the pattern matches none of the words
of the string,the output is -1.
Your Task:
You don't need to read input or print anything. Your Task is to complete the function CamelCase() which takes an integer N, a Vector of strings Dictionary and a string Pattern and returns the strings in the dictionary that match the pattern, if not found any return -1.

Expected Time Complexity: O(N*|S|) S=Longest string in Dictionary
Expected Auxillary Space: O(26*N)

Constraints:
1<=N<=1000
1<=|S|<=100
1<=|Pattern|<=|S|<=100
S is the longest word in Dictionary.
*/

/*
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<string> CamelCase(int N, vector<string> Dictionary, string pattern) {
        vector<string> ans;
        vector<string> shortForm;
        for(auto str : Dictionary){
            string temp = "";
            for(auto it : str){
                if(it >='A' && it <='Z'){
                    temp+=it;
                }
            }
            shortForm.push_back(temp);
        }
        
        int siz = pattern.size();
        
        for(int i=0; i<shortForm.size(); i++){
            string toMatch = shortForm[i];
            if(toMatch[0] == pattern[0] && toMatch.size()>=pattern.size()){
                bool matching = true;
                for(int i=0; i<siz; i++){
                    if(pattern[i] != toMatch[i]){
                        matching = false;
                        break;
                    }
                }
                if(matching){
                    ans.push_back(Dictionary[i]);
                }
            }
        }
        
        if(ans.size()==0) return {"-1"};
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<string> Dictionary(N);
        for (int i = 0; i < N; i++) cin >> Dictionary[i];
        string Pattern;
        cin >> Pattern;
        Solution ob;
        vector<string> ans = ob.CamelCase(N, Dictionary, Pattern);
        sort(ans.begin(), ans.end());
        for (auto u : ans) cout << u << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends
*/