void insertAtLast(int key) { 
if(head == NULL) { 
head = (struct node *)malloc(sizeof(struct node)); 
head -> data = key; 
head -> next = head; 
} 
else { 
struct node *temp = (struct node *)malloc(sizeof(struct node)); 
struct node *last = head; 
temp -> data = key; 
 // listenin son elemanư bulunuyor. 
while(last -> next != head) 
last = last -> next; 
temp -> next = head; 
last -> next = temp; 
} 
}
