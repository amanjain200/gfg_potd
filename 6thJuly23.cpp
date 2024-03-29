/*
Quick Sort
MediumAccuracy: 55.23%Submissions: 135K+Points: 4
Sharpen up your programming skills, participate in coding contests & explore high-paying jobs

Quick Sort is a Divide and Conquer algorithm. It picks an element as a pivot and partitions the given array around the picked pivot.
Given an array arr[], its starting position is low (the index of the array) and its ending position is high(the index of the array).

Note: The low and high are inclusive.

Implement the partition() and quickSort() functions to sort the array.

Example 1:

Input: 
N = 5 
arr[] = { 4, 1, 3, 9, 7}
Output:
1 3 4 7 9

Example 2:

Input: 
N = 9
arr[] = { 2, 1, 6, 10, 4, 1, 3, 9, 7}
Output:
1 1 2 3 4 6 7 9 10

Your Task: 
You don't need to read input or print anything. Your task is to complete the functions partition()  and quickSort() which takes the array arr[], low and high as input parameters and partitions the array. Consider the last element as the pivot such that all the elements less than(or equal to) the pivot lie before it and the elements greater than it lie after the pivot.

Expected Time Complexity: O(N*logN)
Expected Auxiliary Space: O(logN)

Constraints:
1 <= N <= 103
1 <= arr[i] <= 104
*/
/*
//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

/* Function to print an array 
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// } Driver Code Ends
class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
         if(low<high)
        {
           int ans= partition(arr,low,high);
           quickSort(arr,low,ans-1);
           quickSort(arr,ans+1,high);
        }
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
        int pivot=arr[high];
       int i=(low-1);
       for(int j=low;j<=high-1;j++)
       {
           if(arr[j]<=pivot)
           {
               i++;
               swap(arr[i],arr[j]);
           }
       }
       swap(arr[i+1],arr[high]);
       return (i+1);
    }
};


//{ Driver Code Starts.
int main()
{
    int arr[1000],n,T,i;
    scanf("%d",&T);
    while(T--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
      Solution ob;
    ob.quickSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends

*/