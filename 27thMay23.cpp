/*
Modify Linked List-1
MediumAccuracy: 81.24%Submissions: 48+Points: 4
Lamp
You can earn more Geekbits by participating in GFG Weekly Coding Contest  

Given a singly linked list containing N nodes. Modify the Linked list as follows:

1. Modify the value of the first half nodes such that 1st node's new value is equal to the value of the last node minus the first node's current value, 2nd node's new value is equal to the second last nodes value minus 2nd nodes current value, likewise for first half nodes.
2. Replace the second half of nodes with the initial values of the first half nodes(values before modifying the nodes).
3. If N is odd then the value of the middle node remains unchanged.

Example 1:

Input:
N = 5
linked list = 10 -> 4 -> 5 -> 3 -> 6
Output:
-4 -1 5 4 10
Explanation:
For first half nodes modified list will be:
-4 -> -1 -> 5 -> 3 -> 6
For second half nodes modified list will be:
-4 -> -1 -> 5 -> 4 -> 10
Example 2:

Input:
N = 6
linked list = 2 -> 9 -> 8 -> 12 -> 7 -> 10
Output:
8 -2 4 8 9 2
Explanation:
After modifying the linked list as required,
we have a new linked list containing the elements as
8 -> -2 -> 4 -> 8 -> 9 -> 2.
YourTask:
The task is to complete the function modifyTheList() which should modify the list as required.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

Constraints:
1 <= N <= 105
-105  <= Node->data <= 105

*/

/*
//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
struct Node* modifyTheList(struct Node *head);
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

void print(Node *head)
{
    Node *temp=head;
	while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout<<endl;
}


// } Driver Code Ends
/*Complete the function below
Node is as follows:
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

class Solution{
    public:
    struct Node* modifyTheList(struct Node *head)
    {
        vector<int> values;
        Node* temp = head;
        while(temp != NULL){
            values.push_back(temp->data);
            temp = temp->next;
        }
        
        int siz = values.size();
        int half = siz/2;
        
        //first half
        int k=siz/2;
        temp = head;
        while(k>0){
            temp->data = values[siz-1-half+k]- values[half-k];
            k--;
            temp = temp->next;
        }
        
        //second half
        if(siz%2 == 0){
            //even
            int p = siz - siz/2;
            while(p>0){
                temp->data = values[p-1];
                temp = temp->next;
                p--;
            }
            
            }
            else{
                temp = temp->next;
                //odd
                int p = siz - half -1;
            while(p>0){
                temp->data = values[p-1];
                temp = temp->next;
                p--;
            }
        }
        
        return head;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		struct Node *head = NULL,*temp=NULL;
		while(n--){
		    int a;
            cin>>a;
			Node *newNode = new Node(a);
			if(head==NULL)
                head=newNode;
            else
                temp->next=newNode;
            temp=newNode;
		}
		Solution obj;
		head = obj.modifyTheList(head);
		print(head);
		
	}
    return 0;
}
// } Driver Code Ends

*/