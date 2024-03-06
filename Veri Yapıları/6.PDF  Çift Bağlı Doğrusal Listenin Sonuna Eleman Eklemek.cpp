void insertAtEnd(int key) { 
if(head == NULL) { 
head = (struct node *)malloc(sizeof(struct node)); 
head -> data = key; 
head -> next = NULL; 
head -> prev = NULL; 
} 
else { 
struct node *temp = head; 
struct node *temp2 = (struct node *)malloc(sizeof(struct 
node)); 
while(temp -> next != NULL) // listenin sonunu bulmamýz 
gerekiyor. 
temp = temp -> next; 
temp2 -> data = key; 
temp2 -> next = NULL; 
temp2 -> prev = temp; 
temp -> next = temp2; 
} 
}

