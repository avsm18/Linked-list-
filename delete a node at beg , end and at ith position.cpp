#include <stdio.h>
#include <stdlib.h>

// creating linked list , insert a node at beginning , end and at ith position.

int main() {
	
	struct Node {
		
		
		int data;
		struct Node *next;
		
		
		
		
		
		
	};
	int choice , count = 0 , pos , i = 1 ;

struct Node *head , *newNode , *temp , *previousNode , *nextNode;
head = 0;


// so first let us create a linked list for that we need to create a node
 while (choice)	{
 
  newNode = (struct Node *) malloc(sizeof(struct Node));
  printf("Enter data : ");
  scanf("%d" , &newNode->data);
  
  if (head == 0) {
  
  head = temp = newNode;
  newNode->next = 0;
  
  
}
  else 
  {
  	
  	temp->next = newNode;
  	temp = newNode;
  	newNode->next = 0;
  	
  	
  	
  	
  	
  	
  }
  
  printf("Press 1 if you wish to continue and 0 if you want to end : ");
  scanf("%d" , &choice);
}
  


// delete a node at beginning.
temp = head;
head = head->next;
free(temp);
temp = head;
while (temp != 0) {
	
	printf("%d " , temp->data);
	temp = temp->next;
	
	
	
	
	
	
}
printf("\n");
// delete a node from end;
temp = head;
while (temp->next != 0) {
	
	previousNode =  temp;
	temp = temp->next;
	 
	
	
	
	
}


previousNode->next = 0;
free(temp);
temp = head;
while (temp != 0) {
	
	printf("%d " , temp->data);
	temp = temp->next;
	
	
	
	
	
}
printf("\n");
// delete a node from ith position;
printf("Enter the position from where you want to delete : ");
scanf("%d" , &pos);
temp = head;
while (i < pos - 1) {
	
	
	temp = temp->next;
	i++;
	
	
	
	
	
}

nextNode = temp->next;
temp->next = nextNode->next;

free(nextNode); // nextNode pointer must be free completely

temp = head;
while (temp != 0) {
	
	printf("%d " , temp->data);
	temp = temp->next;
	
	
	
	
	
	

}
}
