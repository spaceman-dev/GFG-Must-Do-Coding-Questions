// { Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


 // } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    struct Node* reverseLinkedList(struct Node* node)
    {
        struct Node* curr = node;
        struct Node* prev = NULL;
        struct Node* next = NULL;
        while(curr)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        first = reverseLinkedList(first);
        second = reverseLinkedList(second);
        if(!first)
            return second;
        if(!second)
            return first;
        struct Node* n1 = NULL;
        struct Node* n2 = NULL;
        int sum = 0, rem = 0;
        while(first || second)
        {
            int s1 = first ? first->data : 0;
            int s2 = second ? second->data : 0;
            sum = s1 + s2 + rem;
            rem = sum > 9 ? 1 : 0;
            sum %= 10;
            if(!n1)
                n1 = new Node(sum), n2 = n1;
            else
                n2->next = new Node(sum), n2 = n2->next;
            if(first)
                first = first->next;
            if(second)
                second = second->next;
        }
        if(rem > 0)
            n2->next = new Node(rem);
        return reverseLinkedList(n1);
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}
  // } Driver Code Ends