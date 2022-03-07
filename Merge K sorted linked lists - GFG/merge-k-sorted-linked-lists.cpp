// { Driver Code Starts
// C++ program to merge k sorted arrays of size n each
#include <bits/stdc++.h>
using namespace std;

// A Linked List node
struct Node
{
	int data;
	Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};

/* Function to print nodes in a given linked list */
void printList(Node* node)
{
	while (node != NULL)
	{
		printf("%d ", node->data);
		node = node->next;
	}
	cout<<endl;
}

 // } Driver Code Ends
/*Linked list Node structure

struct Node
{
	int data;
	Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};
*/ 

class Solution{
  public:
     Node* twoMerge(Node* l1,Node* l2){
         if(l1==NULL) return l2;
         if(l2==NULL) return l1;
         
         Node* dummy=NULL;
         Node* ans=NULL;
         if(l1 && l1){
             if((l1->data)<=(l2->data)){
                 dummy=l1;
                 l1=dummy->next;
             }
             else{
                 dummy=l2;
                 l2=dummy->next;
             }
             ans=dummy;
             while(l1 && l2){
                 if((l1->data)<=(l2->data)){
                     dummy->next=l1;
                     dummy=l1;
                     l1=l1->next;
                 }
                 else{
                     dummy->next=l2;
                     dummy=l2;
                     l2=dummy->next;
                 }
             }
         
         if(l1==NULL) dummy->next=l2;
         if(l2==NULL) dummy->next=l1;
         }
         return ans;
     }
    //Function to merge K sorted linked list.
    Node * mergeKLists(Node *arr[], int K)
    {
        Node* f1=arr[0];
          for(int i=1; i<K; i++){
            f1=twoMerge(f1,arr[i]);  
          } // Your code here
         return f1; 
    }
};



// { Driver Code Starts.
// Driver program to test above functions
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
	   int N;
	   cin>>N;
       struct Node *arr[N];
       for(int j=0;j<N;j++)
        {
           int n;
           cin>>n;

           int x;
           cin>>x;
           arr[j]=new Node(x);
           Node *curr = arr[j];
           n--;

           for(int i=0;i<n;i++)
           {
               cin>>x;
               Node *temp = new Node(x);
               curr->next =temp;
               curr=temp;
           }
   		}
   		Solution obj;
   		Node *res = obj.mergeKLists(arr,N);
		printList(res);

   }

	return 0;
}
  // } Driver Code Ends