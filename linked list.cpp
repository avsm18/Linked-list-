#include <stdio.h>
#include <stdlib.h>

int main() {
	
	struct Node {
		
	int data;
	struct Node *next;	
		
			
		
		
	};
int pos;	
struct Node *header , *newNode , *temp;
header = 0;
int choice = 1 , count = 0;

while (choice) {

  newNode = (struct Node *) malloc(sizeof(struct Node)); 
  printf("Enter data ");
  scanf("%d" ,&newNode->data);
  newNode->next = 0;
  
   if (header == 0) {
   	
   	header = temp = newNode;
   	
   	
   	
   	
   	
   }
   else {
   	
temp->next = newNode;
temp = newNode;
 	
   } 	
   	
  printf("Press 1 to continue and 0 to exit : ");
	 scanf("%d" ,&choice) ;
     
     
}
 	
temp = header;
while (temp != 0) {
	
	
	printf("%d " , temp->data);
	temp = temp->next;
	count++;
	
	
	
	
}
printf("\n");		
printf("%d\n",count);

// inserting node at the beginning

newNode =    (struct Node *) malloc(sizeof(struct Node));
printf("Enter the data : ");
scanf("%d" , &newNode->data);
newNode->next = header;
header = newNode;
temp = header;
count = 0;
while (temp != 0) {
	
	printf("%d " , temp->data);
	temp = temp->next;
	count++;
	
	
	
	
	
	
}
printf("\n");
printf("%d" , count);


printf("Enter the position after which you want to insert the node : ");
scanf("%d" , &pos);
if (pos > count) {
	
	printf("Invalid\n");
	
	
	
	
}
else {
	
	temp = header;
	int i = 1;
	while (i <  pos ) {
		
	temp = temp->next;
	i++;
		
		
		
		
		
		
		
	}
	
	
  newNode = (struct Node *) malloc(sizeof(struct Node)); 
  printf("Enter data ");
  scanf("%d" ,&newNode->data);
  newNode->next = temp->next;
  temp->next = newNode;
  temp = header;
while (temp != 0) {
	
	
	printf("%d " , temp->data);
	temp = temp->next;
	count++;
	
	
	
	
}
  
	
}
	
	
	
}
