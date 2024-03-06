void insertAtFront(int key) { 
if(head == NULL) { 
head = (struct node *)malloc(sizeof(struct node)); 
head -> data = key; 
head -> next = head; 
} 
else { 
struct node *temp = (struct node *)malloc(sizeof(struct node)); 
struct node *last = head; 
temp -> data = key;
while(last -> next != head) // listenin son elemaný bulunuyor. 
last = last -> next; 
temp -> next = head; 
last -> next = temp; 
head = temp; 
} 
}
