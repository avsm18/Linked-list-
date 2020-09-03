#include <stdio.h>
#include <stdlib.h>

// creating linked list , insert a node at beginning , end and at ith position.



	
	
	
	
	
	
	
	
	


int main() {
	struct Node {
		int data;
		struct Node *next;
};


int choice = 1 , count = 0 , pos , i = 1 ;

struct Node *head , *newNode , *temp , *previousNode , *nextNode , *currentNode;
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
 	
temp = head;
while (temp != 0) {
	
	
	printf("%d " , temp->data);
	temp = temp->next;
	
	
	
	
}
printf("\n");	
previousNode = 0;
currentNode = nextNode = head;
while (nextNode != 0) {
	
	
	nextNode = nextNode->next;
	currentNode->next = previousNode;
	previousNode = currentNode;
	currentNode = nextNode;
	
}
head = previousNode;
temp = head;
printf("Printing in reverse : \n");
while (temp != 0) {
	
	
	printf("%d " , temp->data);
	temp = temp->next;
	
	
	
	
}

printf("\n");





}
 
