struct node *addlast(struct node *head,int key) { 
struct node *temp = (struct node *)malloc(sizeof(struct node)); 
temp -> data = key; 
temp -> next = NULL; 
struct node *temp2 = head; 
while(temp2 -> next != NULL) 
temp2 = temp2 -> next; 
temp2 -> next = temp; 
return head; 
} 
