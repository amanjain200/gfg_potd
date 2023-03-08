/*
Max min Height
HardAccuracy: 70.01%Submissions: 8K+Points: 8
Participate in Monthly Hiring Challenge conducted by GeeksforGeeks !!  

You have a garden with n flowers lined up in a row. The height of ith flower is ai units. You will water them for k days. In one day you can water w continuous flowers (you can do this only once in a single day). Whenever you water a flower its height increases by 1 unit. You need to maximize the height of the smallest flower all the time.

Example 1:

Input:
n=6
k=2
w=3
a[]={2,2,2,2,1,1}
Output:
2
Explanation:
Water last three flowers for first day & 
first three flowers for second day.The 
new heights will be {3,3,3,3,2,2}
Example 2:

Input:
n=2
k=5
w=1
a[]={5,8}
Output:
9
Explanation:
For the first four days water the first flower then
water the last flower once.
Your Task: 
You don't need to read input or print anything. Your task is to complete the function maximizeMinHeight() which takes the array a[], its size N, integer K, and an integer W as input parameters and returns the maximum height possible for the smallest flower.

Expected Time Complexity: O(NLogN)
Expected Auxiliary Space: O(1)

Constraints:
1 <= n<= 105
1<=w<=n
1<=k<=105
1 <= a[i] <= 109


*/


/*

//User function Template for C++

class Solution
{
    public:
    bool isPossible(int curr,int n,int k,int w,vector <int> a)
        {
            for(int i=0;i<n;i++)
            {
                if(a[i]<curr)
                {
                    if(curr-a[i]>k)
                    {
                        return false;
                    }
                    int start=i;
                    int inc=curr-a[i];
                    k-=inc;
                    if(start+w>=n)
                    {
                        start=max(0,n-w);
                    }
                    for(int ind=start;ind<min(n,start+w);ind++)
                    {
                        a[ind]+=inc;
                    }
                }
            }
            return true;
        }
        long long int maximizeMinHeight(int n,int k,int w,vector <int> &a)
        {
            long long int low=*min_element(a.begin(),a.end()),high=*max_element(a.begin(),a.end())+k;
            long long ans=0;
            while(low<=high)
            {
                long long int middle=(low+high)>>1;
                if(isPossible(middle,n,k,w,a))
                {
                    ans=middle;
                    low=middle+1;
                }
                else
                {
                    high=middle-1;
                }
            }
            return ans;
        }
};


*/


