void addhead(struct node*&head, int key) { 
if(head == NULL) { 
head = (struct node *)malloc(sizeof(struct node)); 
head -> data = key; 
head -> next = head; 
head -> prev = head; 
} 
else { 
struct node *temp = (struct node *)malloc(sizeof(struct node)); 
temp -> data = key; 
struct node *last = head; 
// liste çift baðlý ve dairesel olduðu için son eleman head->prev dir. 
head->prev->next=temp; 
temp->next=head; 
temp->prev=head->prev; 
head->prev=temp; 
head = temp; 
} 
} 
