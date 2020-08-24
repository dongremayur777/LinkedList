#include<bits/stdc++.h>
using namespace std;
/* Link list node */
struct Node 
{ 
	int data; 
	struct Node* next; 
}; 

/* Function to get the middle of the linked list*/
void printMiddle(struct Node *head) 
{ 
	struct Node *slow_ptr = head; 
	struct Node *fast_ptr = head; 

	if (head!=NULL) 
	{ 
		while (fast_ptr != NULL && fast_ptr->next != NULL) 
		{ 
			fast_ptr = fast_ptr->next->next; 
			slow_ptr = slow_ptr->next; 
		} 
		printf("The middle element is [%d]\n\n", slow_ptr->data); 
	} 
} 

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

/* Drier program to test above function*/
int main() 
{ 
	/* Start with the empty list */
	struct Node* head = NULL; 
	int x; 
        int n;
        cin>>n;
        
	for (int i=n; i>0; i--) 
	{ 
	        cin>>x;
		push(&head, x); 
		
	} 
printMiddle(head); 
	return 0; 
} 

