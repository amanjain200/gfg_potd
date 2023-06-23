/*

Task Scheduler
MediumAccuracy: 58.08%Submissions: 15K+Points: 4

Given a character array tasks of size N, representing the tasks a CPU needs to do, where each letter represents a different task. Tasks could be done in any order. Each task is done in one unit of time. For each unit of time, the CPU could complete either one task or just be idle.
CPU has a cooldown period for each task. CPU can repeat a task only after atleast K units of time has passed after it did same task last time. It can perform other tasks in that time, can stay idle to wait for repeating that task.

Return the least number of units of times that the CPU will take to finish all the given tasks.

Example 1:
Input:
N = 6
K = 2
task[ ] = {'A', 'A', 'A', 'B', 'B', 'B'}
Output: 8
Explanation: 
A -> B -> idle -> A -> B -> idle -> A -> B
There is atleast 2 units of time between any two same tasks.
 

Example 2:
Input:
N = 12
K = 2
task[ ] = {'A', 'A', 'A', 'A', 'A', 'A', 'B', 'C', 'D', 'E', 'F', 'G'}
Output: 16
Explanation:  
One possible solution is 
A -> B -> C -> A -> D -> E -> A -> F -> G -> A -> idle -> idle -> A -> idle -> idle -> A.

 

Your Task:
You don't need to read input or print anything. Your task is to complete the function leastInterval() which takes the interger N, integer K and an character array tasks as parameters and returns the minimum unit of time required to complete all tasks.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

Constraints:
1 ≤ N ≤ 104
0 ≤ K ≤ 100
taski is upper-case English letter.
*/
/*
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int leastInterval(int N, int K, vector<char> &tasks) {
        // code here
        vector<int> arr(26,0);
        int maxfre=INT_MIN;
        for(auto i: tasks){
            arr[i-'A']++;
            maxfre=max(maxfre,arr[i-'A']);
        }
        sort(arr.begin(),arr.end(),greater<int>());
        int count=0;
        for(int i=0;i<26;i++){
            if(arr[i]==maxfre){
                count++;
            }
        }
        
        return max(N,((maxfre-1)*K+ (maxfre-1)+ count));
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;

        vector<char> tasks(N);
        for (int i = 0; i < N; i++) cin >> tasks[i];

        Solution obj;
        cout << obj.leastInterval(N, K, tasks) << endl;
    }
    return 0;
}
// } Driver Code Ends

*/