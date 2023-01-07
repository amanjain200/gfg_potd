/*
Shortest Prime Path


You are given two four digit prime numbers Num1 and Num2. Find the distance of the 
shortest path from Num1 to Num2 that can be attained by altering only one 
single digit at a time. Every number obtained after changing a digit should 
be a four digit prime number with no leading zeros.


Example 1:

Input:
Num1 = 1033 
Num2 = 8179
Output: 6
Explanation:
1033 -> 1733 -> 3733 -> 3739 -> 3779
                 -> 8779 -> 8179.
There are only 6 steps required to reach
Num2 from Num1, and all the intermediate
numbers are 4 digit prime numbers.
Example 2:

Input:
Num1 = 1033 
Num2 = 1033
Output:
0

Your Task:  
You don't need to read input or print anything. Your task is to

Complete the constructor of the class Solution to precompute a list of prime numbers.  
Complete function shortestPath() which takes two integers Num1 and Num2 as 
input parameters and returns the distance of the shortest path from Num1 to Num2. 
If it is unreachable then return -1.

Expected Time Complexity: O(NlogN)
Expected Auxiliary Space: O(N)


Constraints:
1000 ≤ Num1,Num2 ≤ 9999
Num1 and Num2 are prime numbers.




//User function Template for C++
class Solution{   
  public:
  void prime(vector<int>&arr){
      
       for(int i=2;i*i<10000;i++){
           if(arr[i]==1){
               for(int j=i*i;j<10000;j+=i){
                   arr[j]=0;
               }
           }
       }
   }
  
  
    int shortestPath(int Num1,int Num2)
    {   
        vector<int>v(10000,1);
        prime(v);
        unordered_set<int>ump;
        queue<int>q;
        q.push(Num1);
        ump.insert(Num1);
        int count=0;
        while(!q.empty()){
            int l=q.size();
            while(l--){
            int x=q.front();
            if(x==Num2)return count;
            q.pop();
            string s=to_string(x);
            int j=0;
            for(int i=3;i>=0;i--){
                int g=x-(s[i]-'0')*pow(10,j);
                if(i!=0 and v[g]==1 and ump.find(g)==ump.end()){q.push(g);ump.insert(g);}
                for(int k=1;k<=9;k++){
                    g+=pow(10,j);
                    if(v[g]==1 and ump.find(g)==ump.end()){q.push(g);ump.insert(g);}
                }
                j++;
            }
            }
            count++;
        }
        return count;
    }
};



*/
