void insertAtFirst(int key) { 
if(head == NULL) { // liste yoksa oluþturuluyor 
head = (struct node *)malloc(sizeof(struct node)); 
head -> data = key; 
head -> next = NULL; 
head -> prev = NULL; 
} 
else { 
struct node *temp = (struct node *)malloc(sizeof(struct node)); 
temp -> data = key; 
temp -> next = head; 
temp -> prev = NULL; 
head -> prev = temp; 
head = temp; 
} 
}
