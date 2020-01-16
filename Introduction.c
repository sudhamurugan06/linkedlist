// A linked list node 
struct Node { 
    int data; 
    struct Node* next; 
}; 
//***********CREATE A LINKED LIST WITH 3 NODES****************************
 
#include <stdio.h> 
#include <stdlib.h> 

struct Node { 
	int data; 
	struct Node* next; 
}; 


int main() 
{ 
	struct Node* head = NULL; 
	struct Node* second = NULL; 
	struct Node* third = NULL; 

	 
	head = (struct Node*)malloc(sizeof(struct Node)); 
	second = (struct Node*)malloc(sizeof(struct Node)); 
	third = (struct Node*)malloc(sizeof(struct Node)); 

	//	 
	//head		 second		 third 
		|			 |			 | 
		|			 |			 | 
	+---+-----+	 +----+----+	 +----+----+ 
	//| # | # |	 | # | # |	 | # | # | 
	+---+-----+	 +----+----+	 +----+----+ 
	


	head->data = 1; 
	head->next = second;  
	

	head		 second		 third 
		|			 |			 | 
		|			 |			 | 
	+---+---+	 +----+----+	 +-----+----+ 
	| 1 | o----->| # | # |	 | # | # | 
	+---+---+	 +----+----+	 +-----+----+	 

	second->data = 2; 

	 
	second->next = third; 

	
	
	head		 second		 third 
		|			 |			 | 
		|			 |			 | 
	+---+---+	 +---+---+	 +----+----+ 
	| 1 | o----->| 2 | o-----> | # | # | 
	+---+---+	 +---+---+	 +----+----+	 */

	third->data = 3; // assign data to third node 
	third->next = NULL; 

	 

		head	 
			| 
			| 
		+---+---+	 +---+---+	 +----+------+ 
		| 1 | o----->| 2 | o-----> | 3 | NULL | 
		+---+---+	 +---+---+	 +----+------+	 
	

	return 0; 
} 
