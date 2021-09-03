// { Driver Code Starts
//Initial Template for C
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

/* Link list node */
struct Node
{
	int data;
	struct Node* next;
};

/* pull off the front node of the source and put it in dest */
void MoveNode(struct Node** destRef, struct Node** sourceRef);



 // } Driver Code Ends
//User function Template for C

struct Node* SortedMerge(struct Node* a, struct Node* b)
{
    if(!a)
        return b;
    if(!b)
        return a;
    if(a->data < b->data)
    {
        a->next = SortedMerge(a->next, b);
        return a;
    }
    if(a->data >= b->data)
    {
        b->next = SortedMerge(a, b->next);
        return b;
    }
}

// { Driver Code Starts.

/* UTILITY FUNCTIONS */
/* MoveNode() function takes the node from the front of the
source, and move it to the front of the dest.
It is an error to call this with the source list empty.

Before calling MoveNode():
source == {1, 2, 3}
dest == {1, 2, 3}

Affter calling MoveNode():
source == {2, 3}
dest == {1, 1, 2, 3} */
void MoveNode(struct Node** destRef, struct Node** sourceRef)
{
	/* the front source node */
	struct Node* newNode = *sourceRef;
	assert(newNode != NULL);

	/* Advance the source pointer */
	*sourceRef = newNode->next;

	/* Link the old dest off the new node */
	newNode->next = *destRef;

	/* Move dest to point to the new node */
	*destRef = newNode;
}


/* Function to insert a node at the beginging of the
linked list */
void push(struct Node** head_ref, int new_data)
{
	/* allocate node */
	struct Node* new_node =
		(struct Node*) malloc(sizeof(struct Node));

	/* put in the data */
	new_node->data = new_data;

	/* link the old list off the new node */
	new_node->next = (*head_ref);

	/* move the head to point to the new node */
	(*head_ref) = new_node;
}

/* Function to print nodes in a given linked list */
void printList(struct Node *node)
{
	while (node!=NULL)
	{
		printf("%d ", node->data);
		node = node->next;
	}
}

/* Driver program to test above function*/
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m;
        scanf("%d",&n);
        scanf("%d",&m);

        /* Start with the empty list */
      	struct Node* res = NULL;
	    struct Node* a = NULL;
	    struct Node* b = NULL;
	    int arr[n];
	    for (int i = 0; i < n; ++i)
        {   
            scanf("%d",&arr[i]);
        }
        for (int i = n-1; i >=0; i--)
        {  
            push(&a, arr[i]);
        }
        int arr1[m];
        for(int i = 0; i<m; i++)
        {   
            scanf("%d",&arr1[i]);
            
        }
        for(int i = m-1; i>=0; i--)
        {   
            push(&b, arr1[i]);    
        }
        res = SortedMerge(a, b);
        printList(res);
        printf("\n");
    }
    return 0;
}  // } Driver Code Ends